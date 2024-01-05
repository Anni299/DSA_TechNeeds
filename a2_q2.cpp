#include<iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout<<"Enter the value of n";
    cin>>n;
    for (row=0;row<=n;row++)
    {
        for (col=n;col>=row;col--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
