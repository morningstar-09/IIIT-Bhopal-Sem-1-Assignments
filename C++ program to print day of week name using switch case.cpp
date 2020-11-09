//C++ program to print day of week name using switch case

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"ENTER THE DAY OF THE WEEK\n";
    cin>>a;
    cout<<"THE DAY OF THE WEEK IS: ";
    switch (a)
    {
        case 1:
        cout<<"SUNDAY";
        break;
        case 2:
        cout<<"MONDAY";
        break;
        case 3:
        cout<<"TUESDAY";
        break;
        case 4:
        cout<<"WEDNESDAY";
        break;
        case 5:
        cout<<"THURSDAY";
        break;
        case 6:
        cout<<"FRIDAY";
        break;
        case 7:
        cout<<"SATURDAY";
        break;
        default:
        cout<<"PLEASE ENTER CORRECT INPUT";
        break;
    }

    return 0;
}
