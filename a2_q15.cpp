#include <iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<<"Enter the value of n";
    cin >> n;
    int stars = 1;
    int spaces = n / 2;
    int oval = 1;
    for (row=1; row<= n; row++){
        int val = oval;
        for (col=1; col<=spaces; col++){
            cout << (" ");
        }
        for (col=1; col<=stars; col++){
            cout << val << " ";
            if (col<= stars/2){
                val++;
            }else{
                val--;
            }
        }

        cout << endl;
        
        if (row<= n/2){
            oval++;
            stars += 2;
            spaces--;
        }else{
            oval--;
            stars -= 2;
            spaces++;
        }
    }
}
                                
