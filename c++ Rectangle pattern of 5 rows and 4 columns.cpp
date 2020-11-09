#include <iostream>
using namespace std;
//Rectangle pattern of 5 rows and 4 columns
int main()
{
    int i,j,k,l;
    i=5;
    j=4;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=4;j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}
