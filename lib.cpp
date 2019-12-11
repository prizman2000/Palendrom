#include <iostream>
#include <fstream>

using namespace std;

string read(ifstream &file) {

    string s;
    getline(file, s);
    return s;
}

bool Palendrom(string s){

    bool pal = true;
    string bez="";

    unsigned long len=s.length();

    for(int i=0; i<len; i++){

        if (s[i]!=' '){
            bez+=s[i];
        }
    }

    for (int i=0; i<bez.length()/2; i++){

        if (bez[i]!=bez[bez.length()-(i+1)]){
            pal=false;
        }
    }
    return pal;
}