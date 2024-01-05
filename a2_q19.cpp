#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space, i;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for (row=1;row<=n;row++){
        for (col=1;col<= n;col++){
            if (row==1){
                if (col==n || col<=n/2+1){
                    cout << ("* ");
                }else{
                    cout << ("  ");
                }
            }else if (row<=n/2){
                if (col==n || col==n/2+1){
                    cout << ("* ");
                }else{
                    cout << ("  ");
                }
            }else if (row==n/2+1){
                cout << ("* ");
            }else if (row<n){
                if (col==1 || col==n/2+1){
                    cout << ("* ");
                }else{
                    cout << ("  ");
                }
            }else{
                if (col==1 || col>=n/2+1){
                    cout << ("* ");
                }else{
                    cout << ("  ");
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
