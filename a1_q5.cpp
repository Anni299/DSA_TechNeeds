#include<iostream>
using namespace std;
int main()
{
    int a,digits=0;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    do{
        digits++;
        a/=10;
    }while (a>0);
    cout<<"Number of digits:"<<digits<<endl;
    return 0;
}
