//Program to display multiplication table upto 10.
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    
int n;
cin>>n;
for(int i = 0;i<=10; i++)
{
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
}
return 0;
}
