#include<iostream>
#include<string>
using namespace std;

int main(){
    
    // Variables & Data Types
    // Question 1
    // int a=5;
    // int b=10;
    // cout << "Before Swapping : " << a << b << endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // // swap(a,b); swap function 
    // cout << "After Swapping : " << a  << " " << b<< endl;

    // Question 2
    // int age , birthyear  , current_year=2026;

    // cout << "Enter your birth year  : ";
    // cin >> birthyear;

    // int leapcount = 0;
    // for(int year = birthyear ; year < current_year ; year++)
    // {
    //     if((year % 4 ==0 && year % 100 !=0) || (year % 400 ==0))
    //     {
    //         leapcount++;
    //     }
    // }

    // int normalYears = (current_year - birthyear) - leapcount;
    // long long days = (normalYears * 365)+(leapcount * 366);

    // cout << " Total days lives (with leap years ) : " << days << endl;


    //  Real logic 
//     int birthDay, birthMonth, birthYear;
// cout << "Enter your birth date (dd mm yyyy): ";
// cin >> birthDay >> birthMonth >> birthYear;

// int currentDay = 1, currentMonth = 7, currentYear = 2026; // today

// int totalDays = 0;

// Add days for each full year from birthYear to currentYear - 1
// for (int year = birthYear; year < currentYear; year++) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//         totalDays += 366;
//     else
//         totalDays += 365;
// }

// // Now subtract the days you HADN'T lived yet in your birth year
// // i.e., subtract days from Jan 1 to your actual birth date
// int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// if ((birthYear % 4 == 0 && birthYear % 100 != 0) || (birthYear % 400 == 0))
//     daysInMonth[1] = 29; // Feb has 29 days if birth year is leap

// for (int m = 0; m < birthMonth - 1; m++) {
//     totalDays -= daysInMonth[m];
// }
// totalDays -= (birthDay - 1);

// // Add the days you've lived in the CURRENT year (2026) so far
// int daysInMonth2026[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 2026 not leap
// for (int m = 0; m < currentMonth - 1; m++) {
//     totalDays += daysInMonth2026[m];
// }
// totalDays += (currentDay - 1);

// cout << "Total days lived: " << totalDays << endl;


// Question 3
// cout << sizeof(int) << endl << sizeof(float) << endl << sizeof(double) << endl << sizeof(char) << endl;

// Question 4
// float celsius ;

// cout << "Enter temperature in Celsius : ";
// cin >> celsius;

// cout << " In Fahrenheit it is : " << (celsius * 9/5)+32 << endl;
// cout << " In Kelvin it is : " << (celsius + 273.15) << endl;

// Question 4
// int age = 20 ;
// int height = 175;
// string name = "Mrunali";

// cout << " My name is : "<< name << endl;
// cout << " My age is : " << age << endl;
// cout << " My height is : " << height  << endl;
// cout << " My name is : "<< name << "My age is : " << age << " My height is : " << height << endl;

// Question 5
// int num1=5;
// int num2=10;
// float result=(float)num1/(float)num2;
// cout << " Result is : " << result << endl;

// Question 6
// char a = 'A';
// int aa=a;
// cout << "ASCII value of A is : " << aa << endl;

// Question 7
// int num=68;
// char ch=num;
// cout << " Character for  "<< num << " is : " << ch << endl;

// Question 8
// float num = 9.99;
// cout << " Integer value of 9.99 is : " << (int)num << endl;
 
// Question 9;
// int a='A' + 1;
// cout << " As integer : "<< a << endl << "As character : "<< char(a) << endl;

//  Question 10;
// int a= 123;
// double d= 123456789012345;
// cout << a << endl << d << endl;

// double d=9.99;
// int x=d;
// cout << d << endl << x << endl;

// double big = 123456789012345.0;
// cout << fixed << big << endl;

// Question 11
// int year ;
// cin >> year;
// if((year % 4 ==0 && year % 100 !=0)|| (year % 400 ==0)){
//     cout << "Leap Year ";
// }
// else {
//     cout << " NOrmal Year ";
// }

// Question 12;
// int marks ;
// cin >> marks ;
// if(marks >= 90){
//     cout << "A" << endl;
// }
// else if(marks >= 80 ){
//     cout << "B" << endl;
// }
// else if(marks >= 70){
//     cout << "C" << endl;
// }
// else if(marks >= 60){
//     cout << "D" << endl;
// }
// else {
//     cout << "F" << endl;
// }

// Qustion 13
// int op;
// float a ,b ;
// cout << "Enter operation : " << endl << "1.Addition" << endl << "2.Subtraction " << endl << "3.Multiplication" << endl << "4.Division" << endl;
// cin >> op;
// cout << "Enter two numbers : " ;
// cin >> a >> b;

// switch(op){
//     case 1:
//     cout << "Addition is : " << a+b;
//     break;
//     case 2:
//     cout << "Subtraction is : " << a-b;
//     break;
//     case 3:
//     cout << "Multiplication is : "<< a*b;
//     break;
//     case 4:
//     cout << "Divison is : " << a/b;
//     break;
//     default :
//     cout << "Invalid operator !!";
//     break;

// }

// question 14:

// int a,b,c;
// cin >> a >> b >> c;

// if ( (a + b > c) && (a + c > b) && (b + c > a)){
//     cout << " Triangle is Valid  " << endl;
//      if (a==b && b==c && a==c){
//         cout << "It is Equilateral Triangle " << endl;
//      }
//      else if( (a==b)||(b==c)||(a==c)){
//         cout << "It is Isosceles Triangle "<< endl;
//      }
//      else if((a!=b) && (b!=c) && (a!=c)){
//         cout << " It is Scalene Triangle " << endl;
//      }
// }
// else {
//     cout << "It is Invalid ";
// }

// largets 
// int a , b ,c;
// cin >> a >>b >>c;

// if(a>b && a>c){
//     cout << "A is Largest " << endl;
// }
// else if(b>a && b>c){
//     cout << "B is Largest " << endl;
// }
// else if(c>a && c>b){
//     cout << " C is Largest " << endl;
// }
// else {
//     cout << "Invalid Integers";
// }

// all even numbers from 1 to 100

// for(int i=1 ; i<=100 ; i++){
//     if(i%2==0){
//         cout << i << " ";
//     }
// }

// sum of digits of a number (e.g., 1234 → 1+2+3+4=10
// int num;
// cin >> num;
// int sum = 0;
// while ( num > 0){
//     int digit = num % 10;
//     sum = sum + digit;
//     num = num / 10;

// }
// cout << sum << endl;

// Reverse a number (e.g., 1234 → 4321).
// int num;
// cin >> num;
// int reverse = 0;
// while ( num > 0){
//     int digit = num % 10;
//     reverse = reverse * 10 + digit;
//     num = num / 10; 
// }
// cout << reverse << endl;

// 





return 0;
}