#include<iostream>
using namespace std;
int main()
{
    int n, row, col, a, b, c;
    cout<<"Enter the value of n: ";
    cin>>n;
    a=0;
    b=1;
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=row;col++)
        {
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"\n";
    }      
    return 0;
}
