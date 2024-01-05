#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter any number n: ";
    cin>>n;
    i=1;
    while (i<=10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }     
    return 0;
}
