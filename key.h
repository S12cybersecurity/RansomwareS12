#include <string>
#include <windows.h>

using namespace std;

string getkey() {

    // Obtiene la versión de Windows
    OSVERSIONINFO osVersionInfo;
    osVersionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&osVersionInfo);

    // Obtiene el nombre del host
    char hostName[256];
    DWORD hostNameSize = 256;
    GetComputerNameA(hostName, &hostNameSize);

    int numkey = osVersionInfo.dwMajorVersion * 12 + 12 * 666 * 24 + 9 * 2; 

    string finalkey = hostName;
    finalkey += to_string(numkey);

    return finalkey;
}
