#include <iostream>
using namespace std;
int main(){
    int binary;
    cout << "Enter Binary (base) number : ";
    cin >> binary;
    int decimal=0, pow=1;
     while(binary>0){
        int rem = binary%10;
        binary = binary/10;
        decimal += (rem*pow);
        pow *=2;
     }

    cout << "The Decimal (base) number is : " << decimal;

    return 0;
}