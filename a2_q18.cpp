#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space, i;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for (row=1;row<=n;row++){
        for(col=1; col<row; col++){
            printf(" ");
        }
        for(col=1; col<=(n*2 - (2*row-1)); col++)
        { 
            if(row==1 || col==1 || col==(n*2 - (2*row - 1)))
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for (row=1;row<=n;row++){
        cout<<endl;
        for (space=1;space<=n-row;space++){
            cout<<" ";
        }
        for (col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
