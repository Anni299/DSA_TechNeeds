#include<iostream>
using namespace std;
int main()
{
    int n, row, col, space;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (row=1;row<=n;row++)
    {
        for (col=n;col>row;col--)
        {
            cout<<" ";
        }
        cout<<"*";
        for (col=1;col<(row-1)*2;col++)
        {
            cout<<" ";
        }
        if (row==1)
        {
            cout<<"\n";
        }
        else
        {
            cout<<"*\n";
        }
    } 
    for (row=n-1;row>=1;row--)
    {
        for (col=n;col>row;col--)
        {
            cout<<" ";
        }
        cout<<"*";
        for (col=1;col<(row-1)*2;col++)
        {
            cout<<" ";
        }
        if (row==1)
        {
            cout<<"\n";
        }
        else{
            cout<<"*\n";
        }
    }
    return 0;
}
