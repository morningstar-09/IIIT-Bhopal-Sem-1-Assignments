#include <iostream>
using namespace std;
//Write a program to print all prime numbers in a given range using break and continue
int main()
{
    cout<<"INPUT TWO NUMBERS\n"<<endl;
int a,b,i,c,d,e,f,g,h,j;
cin>>a>>b;
for(c=a;c<=b;c++)
{
for(i=2;i<c;i++)
{
 if(c%i==0)
 break;
}
{
    if(c==i)
    {
        cout<<c<<endl;
    }
}}
    return 0;
}
