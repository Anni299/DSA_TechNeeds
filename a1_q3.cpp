#include<iostream>
using namespace std;
int main()
{
    int a,i,count=0;
    cout<<"Enter any number:"<<endl;
    cin>>a;
    for (i=2;i<a;i++)
    {
        if (a%i==0)
        {
            count++;
        }
    }
    if (count==0)
        cout<<"Given number is a prime number"<<endl;
    else
        cout<<"Given number is not a prime"<<endl;
    return 0;
}
