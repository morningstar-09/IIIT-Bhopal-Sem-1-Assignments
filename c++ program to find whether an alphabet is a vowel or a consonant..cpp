#include <iostream>
using namespace std;
//Write a program to find whether an alphabet is a vowel or a consonant.
int main()
{
    char chec;
    cin>>chec;
    switch (chec)
    {
        case 'a':
        cout<<"VOWEL\n";
        break;
        case 'e':
        cout<<"VOWEL\n";
        break;
        case 'i':
        cout<<"VOWEL\n";
        break;
        case 'o':
        cout<<"VOWEL\n";
        break;
        case 'u':
        cout<<"VOWEL\n";
        break;
        default:
        cout<<"CONSONENT\n";
    }
    return 0;
}
