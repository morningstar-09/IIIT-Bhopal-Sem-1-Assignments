//Write a program in C++ to find the sum of first 10 natural numbers
#include <iostream>

using namespace std;

int main()
{
    int sum=0;
   cout<<"THE SUM OF FIRST 10 NATURAL NUMBERS ARE: ";
    for(int i=1;i<=10;i++)
    {
        sum+=i;
    }
cout<<sum;
    return 0;
}
