#include <iostream>
using namespace std;

int main() {

    char a;

    cout<<"enter alphabet: ";
    cin>>a;

    switch (a)
    {
        case 'a':
            cout<<"it is a vowel"<<endl;
            break;

        case 'e':
            cout<<"it is a vowel"<< endl;
            break;

        case 'u':
            cout<<"it is a vowel"<< endl;
            break;

        case 'i':
            cout<<"it is a vowel"<< endl;
            break;

       case 'o':
            cout<<"it is a vowel"<< endl;
            break;

    
    default:
    cout<<"it is a consonent";
        break;
    }

    return 0;
}