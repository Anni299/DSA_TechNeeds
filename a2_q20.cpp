#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space, i;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for (row=1;row<=n;row++){
        for (col=1;col<=n;col++){
            if (col==1 || col==n){
                cout<<"* ";
            }
            else if(row>n/2 && (row==col || row+col==n+1)){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
