#include <iostream>
#include <vector>
#include <dirent.h>
#include <cstring>
#include <sys/stat.h>

using namespace std;

void listfiles(string path, vector<string>& files){
    DIR* dir;
    dirent* pdir;

    dir = opendir(path.c_str());
    if (dir == NULL) {
        return;
    }

    while ((pdir = readdir(dir)) != NULL) {
        if (strcmp(pdir->d_name, ".") != 0 && strcmp(pdir->d_name, "..") != 0 && pdir->d_name[0] != '.') {
            string filename = path + "/" + pdir->d_name;
            struct stat filestat;
            if (stat(filename.c_str(), &filestat) >= 0) {
                if (S_ISDIR(filestat.st_mode)) {
                    listfiles(filename, files);
                } else {
                    files.push_back(filename);
                }
            }
        }
    }

    closedir(dir);
}

vector<string> getfiles(){
    vector<string> files;
    listfiles("C:\\Users", files);
    return files;
}
