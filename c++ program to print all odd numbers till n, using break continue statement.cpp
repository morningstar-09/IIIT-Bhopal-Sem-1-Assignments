//Write a program to print all odd numbers till n, using break/continue statement
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int sum = 0;  
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    if (i%2==0)
    {
        continue;
    }
    cout<<i<<endl;
}
return 0;
}
