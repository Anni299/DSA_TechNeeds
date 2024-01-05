#include<iostream>
using namespace std;
int main()
{
    int n, row, col, i;
    cout<<"Enter the value of n: ";
    cin>>n;
    i=1;
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=row;col++)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<"\n";
    }      
    return 0;
}
