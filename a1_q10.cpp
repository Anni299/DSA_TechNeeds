#include<iostream>
using namespace std;
int main()
{
    int n,div;
    cout<<"Enter any number"<<endl;
    cin>>n;
    for (div=2;div*div<=n;div++)
    {
        while (n%div==0)
        {
            cout<<div<<", "<<endl;
            n/=div;            
        }
    }
    if (n!=1)
        cout<<n<<endl;
    return 0;
}
