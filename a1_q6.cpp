#include<iostream>
using namespace std;
int main()
{
    int a,i,count=0;
    cout<<"Enter any number:"<<endl;
    cin>>a;
    while (a!=0)
    {
        i=a%10;
        count=count*10+i;
        a/=10;
    }
    cout<<count;
    return 0;
}
