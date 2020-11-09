// This progam checks whether a integer input by the user is positive or NEGATIVE.
//Number 0 is treated as positive in this program

#include <iostream>

using namespace std;

int main ()
{
  cout << "ENTER A NUMBER";
  int a;
  cin >> a;
  if (a >= 0)
    {
      cout << "THE NUMBER IS POSITIVE\n";
    }
  else
    {
      cout << "THE NUMBER IS NEGATIVE\n";
    }




  return 0;
}
