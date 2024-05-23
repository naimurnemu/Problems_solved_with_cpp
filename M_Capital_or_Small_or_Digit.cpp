#include<bits/stdc++.h>
using namespace std;

int main() 
{
    char input;
    cin>> input;
    int ascii = input;
    if(ascii >= 48 && ascii <=57) {
        cout << "IS DIGIT" << endl;
    }
    else if (ascii >= 65 && ascii <=90) {
        cout << "ALPHA" << endl << "IS CAPITAL"<< endl;
    }
    else if(ascii >= 97  && ascii <= 122) {
        cout << "ALPHA" << endl << "IS SMALL"<< endl;
    }
    return 0;
}
