#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space, i;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for (row=1;row<=n/2;row++){
        for (col=1;col<=n/2;col++){
            cout<<"  ";
        }
        for (col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (i=1;i<=n;i++){
        cout<<"* ";
    }
    cout<<endl;
    for (row=1;row<=n/2;row++){
        for (col=1;col<=n/2;col++){
            cout<<"  ";
        }
        for (col=n/2;col>=row;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
