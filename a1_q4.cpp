#include<iostream>
using namespace std;
int main()
{
    int a,i,j,count=0;
    cout<<"Enter the number till which prime nos. is to be printed"<<endl;
    cin>>a;
    for (i=1;i<a;i++)
    {
        for (j=2;j<i;j++)
        {
            count=i%j;
        if (count==0)
            break;
        }
        if (count!=0)
            cout<<j<<endl;

    }
}
