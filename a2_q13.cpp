#include<iostream>
using namespace std;
int main()
{
    int n, row, col, i;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (row=0;row<=n;row++)
    {
        i=1;
        for (col=0;col<=row;col++)
        {
            cout<<i<<" ";
            i=(i*(row-col))/(col+1);
        }
        cout<<"\n";
    }      
    return 0;
}
