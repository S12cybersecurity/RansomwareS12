#include <fstream>
#include <bits/stdc++.h>

using namespace std;

class encryptOPS {
    
    private:
        string file;
        string key;

    public:
        encryptOPS(string file, string key) {
            this->file = file;
            this->key = key;
        }

        void encrypt() {
            char c; 
            fstream fileIO;
            fileIO.open(file, ios::in | ios::out);

            int keyLength = key.length();

            for (int i = 0; fileIO >> noskipws >> c; i++) {
                char temp = (c + key[i % keyLength]);
                fileIO.seekp(-1, ios::cur);
                fileIO.put(temp);
            }

            fileIO.close();
        }

        void decrypt() {
            char c; 
            fstream fileIO;
            fileIO.open(file, ios::in | ios::out);

            int keyLength = key.length();

            for (int i = 0; fileIO >> noskipws >> c; i++) {
                char temp = (c - key[i % keyLength]);
                fileIO.seekp(-1, ios::cur);
                fileIO.put(temp);
            }

            fileIO.close();

        }

        string getFile() {
            return  this->file;
        }

        string getKey() {
            return this->key;
        }

        void setFile(string file) {
            this->file = file;
        }

        void setKey(string key) {
            this->key = key;
        }
};

