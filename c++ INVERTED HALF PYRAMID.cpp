#include <iostream>
using namespace std;
//INVERTED HALF PYRAMID
int main()
{
    int i,j,k,n,m;
    cout<<"ENTER NUMBER STARS IN THE BEGINNING(N)\n";
    cin>>n;
    for (i=n;i>=1;i--){
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
           cout<<"\n";
    } return 0;
}
