#include<iostream>
using namespace std;
int main()
{
    int row, col, n, space;
    cout<<"Enter the value of n";
    cin>>n;
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=2*n;col++)
        {
            if (row<=(n+1)/2)
            {
                if (col<n && col<(n-row))
                {
                    cout<<"*";
                }
                else if (col>n && col>=(2*n+row-3))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if (row%2==0)
                {
                    if (col<=(row/2))
                    {
                        cout<<"*";
                    }
                    else if (col>=2*n-((row/2)-1))
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                else
                {
                    if (col<=(row+1)/2)
                    {
                        cout<<"*";
                    }
                    else if(col>=2*n-(((row+1)/2)-1))
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }

        }
        cout<<"\n";
    }
    return 0;
}
