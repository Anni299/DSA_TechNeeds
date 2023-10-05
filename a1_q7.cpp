#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,inverse=0,count=1;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    while (n>=0)
    {
        int dig=n%10;
        n/=10;
        inverse+=count*pow(10,dig-1);
        count+=1;
    }
    cout<<"Inverse= "<<inverse<<endl;
    return 0;
}
