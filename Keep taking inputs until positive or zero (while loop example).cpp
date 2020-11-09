//Keep taking inputs until positive or zero (while loop example)
//THIS PROGRAM KEEPS TAKES INPUT FROM USER UNTIL THE USER ENTERS A NEGATIVE NUMBER

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    
int n;
cin>>n;
while(n>=0)
{
    cout<<n<<endl;
    cin>>n;
}
return 0;
}
