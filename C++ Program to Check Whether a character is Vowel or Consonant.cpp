//C++ Program to Check Whether a character is Vowel or Consonant

#include <iostream>

using namespace std;

int main ()
{
  cout << "ENTER A CHARACTER\n";
  char c;
  cin >> c;
   if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
   {
       cout<<"CHARACTER IS VOWEL\n";
   }
   else
   {
       cout<<"CHARACTER IS CONSONANT\n";
   }




  return 0;
}
