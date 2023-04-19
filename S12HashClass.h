#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>

using namespace std;

class S12HashClass {

    private:
        // Define the string to be hashed
        string str;
        unsigned long long finalHashValue;
    public:
        S12HashClass(string str){
            this->str = str;
            this->finalHashValue = createhash(getStr());
        }

        unsigned int S12hash(string str) {
            unsigned int sum = 0;
            // Loop through each character in the string
            for (int i = 0; i < str.length(); i++) {
                // Add the ASCII value of the character to the running sum
                sum += (unsigned int)str[i];
            }
            // Multiply the sum by the ASCII value of 'S' (83) and add 12
            sum = sum * 83 + 12;
            // Return the final hash value
            return sum;
        }

        unsigned long long createhash(string str) {            
            // Calculate the hash value of the original string
            unsigned int h1 = S12hash(str);
            // Calculate the hash value of the reversed string
            unsigned int h2 = S12hash(string(str.rbegin(), str.rend()));
            // Calculate the hash value of the reversed string divided by 12
            unsigned int h3 = h2 / 12;
            // Concatenate the hash values to get the final hash value
            string hashValue = to_string(h1) + to_string(h2) + to_string(h3);

            // Multiply the hash value by (83+12)
            unsigned long long finalHashValue = stoull(hashValue) * (83 + 12);
            return finalHashValue;
        }

        //getters
        string getStr(){
            return str;
        }
        unsigned long long getFinalHashValue(){
            return finalHashValue;
        }

        //setters
        void setStr(string str){
            this->str = str;
        }
    
};