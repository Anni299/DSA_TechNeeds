#include<iostream>
using namespace std;
int main()
{
    int n, row, col, space;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=row;col++)
        {
            if (col==row)
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
}
