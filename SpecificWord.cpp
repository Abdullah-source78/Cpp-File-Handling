#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
using namespace std;
int main(){
    ifstream inFile("Character.txt",ios::in);
    ofstream out("Sorted_Array.txt");
    char letter = 'A';

    string line;
    while(getline(inFile,line)){
        stringstream ss(line);
        string word;
        while(ss >> word){
            if(!word.empty() && tolower(word[0]==tolower(letter))){
                out<<word<<endl;
            }
        }

    }


    return 0 ;
}
