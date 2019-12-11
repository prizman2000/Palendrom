#include "lib.h"

using namespace std;

int main() {

    string stroka;
    ifstream f1("/Users/apple/CLionProjects/zadanee_po_OOP/Rare_f");

    stroka=read(f1);

    if (Palendrom(stroka)){
        cout<<"Это палендром!\n";
    }else{
        cout<<"Это не палендром\n";
    }

    return 0;
}