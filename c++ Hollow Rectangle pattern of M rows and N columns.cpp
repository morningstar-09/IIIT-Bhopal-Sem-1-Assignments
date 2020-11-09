#include <iostream>
using namespace std;
//Hollow Rectangle pattern of M rows and N columns
int main()
{
    int i,j,k,n,m;
    cout<<"ENTER NUMBER OF ROWS(M) AND NUMBER OF COLUMNS(N)\n";
    cin>>m>>n;
    for (i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (i==1 || i==m)
            {
                cout<<"*";
            }
            else if (j==1 || j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
