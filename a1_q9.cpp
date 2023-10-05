#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a=n,i=0;
    while (a>=0)
    {
        a/=10;
        i++;
    }
    k=k%n;
    if (k<0)
        k+=i;
    int p=pow(10,k);
    int m=pow(10,i-k);
    int q=n/p;
    int r=n%p;
    int ans=r*m + q;
    cout<<ans<<endl;
    return 0;
}
