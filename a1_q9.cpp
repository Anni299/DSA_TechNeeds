#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    while (a % b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    int gcd = b;
    int lcm = (num1 * num2) / gcd;

    cout << (gcd) << endl;
    cout << (lcm) << endl;
    return 0;
} 
