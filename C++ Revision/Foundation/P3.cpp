#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// question 1 print counting from 1 to 100
// int counting(int num)
// {
//     for(int i=1 ; i < num;i++)
//     {
//         cout << i << endl;
//     }
//     return num;
// }

// Question 2 simple interest
// int simpleInterest(int principal , int rateofInterest , int time)
// {
//     return (principal*rateofInterest*time)/100 ;
// }

// Question 3
//  bool primeNumbers(int num){
//         if( num < 2){
//             return false;
//         }
//         for( int i=2 ; i< num ; i++){
//             if( num % i ==0 ){
//                  return false;
//             }
//         }
//         return true;
//     }

// void votingEligibility(int age)
// {
//     if(age > 18)
//     {
//         cout << "Can Vote";
//     }
//     else {
//         cout << "Cannot Vote";
//     }
// }

// Question 5
double sipCalculator ( double p , double r , double n )
{
    return  p * ((pow(1 + r , n) - 1) / r) * ( 1+r);
}



int main()
{
    // question 1
    // int ans = counting(100);
    // cout << ans << endl;

    // question 2
    // int p , roi , t ;
    // cin >> p >> roi >> t;
    // cout << "Principal : " << p << endl << "Rate of Interest : " << roi << endl << "Time : " << t << endl;
    // // or 
    // // cout << "Enter Principal: ";
    // // cin >> p;

    // // cout << "Enter Rate of Interest: ";
    // // cin >> roi;

    // // cout << "Enter Time (in years): ";
    // // cin >> t;

    // int simple_Interest = simpleInterest(p,roi,t);
    // cout << "Simple Interest is : " <<  simple_Interest << endl;

    // question 3
    // for(int n=1 ; n<=100;n++){
    //     if(primeNumbers(n)){
    //         cout << n << "  ";
    //     }
    // }

    // question 4
    // int person_age;
    // cout << "Enter person age : " << endl;
    // cin >> person_age ;
    // votingEligibility(person_age);

    // question 5
    double monthlyInvestment , annualrate , years , r , n ;

    cout << "Enter monthly investment : ";
    cin >> monthlyInvestment;
    cout << " Enter annual rate of return : ";
    cin >> annualrate;
    cout << "Enter investment duration : ";
    cin >> years ;

    r = annualrate / 12 / 100;
    n = years * 12;
    
    double result = sipCalculator( monthlyInvestment , r , n);

    cout << "Maturity amount  : "<< fixed << setprecision(5) << result << endl;

   

    

    return 0;
}