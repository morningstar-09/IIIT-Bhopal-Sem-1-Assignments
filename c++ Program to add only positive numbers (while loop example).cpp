//Program to add only positive numbers (while loop example)
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
int sum = 0;  
int n;
cin>>n;
while(n>0)
{
sum+=n;
cin>>n;
}
cout<<"\n Sum is "<<sum<<endl;
return 0;
}
