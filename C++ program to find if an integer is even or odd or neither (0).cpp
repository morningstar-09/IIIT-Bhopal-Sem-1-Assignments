// C++ program to find if an integer is even or odd or neither (0)

#include <iostream>

using namespace std;

int main ()
{
  cout << "ENTER A NUMBER\n";
  int a;
  cin >> a;
   if (a==0)
   {
       cout<<"NUMBER IS NEITHER EVEN NOR ODD (IT IS ZERO)\n";
   }
   else
   {
       if(a%2==0)
       {
           cout<<"NUMBER IS EVEN\n";
       }
       else
       {
           cout<<"NUMBER IS ODD\n";
       }
   }




  return 0;
}
