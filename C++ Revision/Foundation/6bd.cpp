#include <iostream>
#include <math.h>
using namespace std;

// int decimalToBinaryMethod(int n)
// {

//     // division method
//     // while(n>0){
//     //     int bit = n%2;
//     //     cout << bit << endl;
//     //     n=n/2;
//     // }

//     //  for number
//     // int binaryn = 0;
//     // int i = 0;
//     // while (n > 0)
//     // {
//     //     int bit = n % 2;
//     //     binaryn = bit * pow(10, i++) + binaryn;
//     //     n = n / 2;
//     // }
//     // return binaryn;

//     // by method 2
//     //  bitwsie method

// }

// int decimalBinaryMethod2(int n){
//     int binaryno = 0;
//     int i = 0;
//     while(n>0){
//         int bit = (n & 1);
//         binaryno = bit*pow(10, i++) + binaryno;
//         n = n >> 1;
//     }
//     return binaryno;
// }

//  binary to decimal
int binarytodecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2,i++);
        n /= 10;

    }
    return decimal;
}
int main()
{

    // int n;
    // cin >> n;
    // int bina = decimalBinaryMethod2(n);

    // cout << bina << endl;

    int binaryno;
    cin >> binaryno;
    cout << binarytodecimal(binaryno) << endl;

    return 0;
}