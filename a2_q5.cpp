#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    space = n-1;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=space; col++)
            cout<<" ";
        space--;
        for(col=1; col<=(2*row-1); col++)
            cout<<"*";
        cout<<endl;
    }
    space = 1;
    for(row=1; row<=(n-1); row++)
    {
        for(col=1; col<=space; col++)
            cout<<" ";
        space++;
        for(col=1; col<=(2*(n-row)-1); col++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
