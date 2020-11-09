//Write a program to check if a given number is prime or not, using break/continue statement
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int sum = 0;  
int i,n;
cout<<"ENTER THE NUMBER TO BE CHECKED\n";
cin>>n;
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        cout<<"Number is not prime number"<<endl;
        break;
    }
}
    if(n==i)
    {
        cout<<"Number is prime"<<endl;
    }
return 0;
}
