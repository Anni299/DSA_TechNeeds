#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space, j=1, z=2*n-3;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for (row=1;row<=n;row++){
        int i=1;
        for (col=1;col<=j;col++){
            cout<<i;
            i++;
        }
        for (space=1;space<=z;space++){
            cout<<" ";
        }
        i=row<n?i-1:i-2;
        j=row<n?j:j-1;
        for (col=1;col<j;col++){
            cout<<i;
            i--;
        }
        j++;
        z-=2;
        cout<<endl;
    }
    return 0;
}
