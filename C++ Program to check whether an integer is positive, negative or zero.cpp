// This progam checks whether a integer input by the user is positive or NEGATIVE or zero.

#include <iostream>

using namespace std;

int main ()
{
  cout << "ENTER A NUMBER";
  int a;
  cin >> a;
  if (a>0)
    {
      cout << "THE NUMBER IS POSITIVE\n";
    }
  else if (a<0)
    {
      cout << "THE NUMBER IS NEGATIVE\n";
    }
    else
    {
        cout<<"THE NUMBER IS ZERO\n";
    }




  return 0;
}
