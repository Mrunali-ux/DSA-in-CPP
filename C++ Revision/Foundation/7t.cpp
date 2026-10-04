#include<iostream>
using namespace std;

int main(){
    
    // implicit conversion
    // int num1=10;
    // float num2=5.5;
    // float result=num1+num2;
    // //  int result=num1+num2; it willl truncate the point value as it stores integer 
    // cout << result << endl;

    //  ch to int
    // char ch='A';
    // int a=ch+1;
    // char a=ch+1;
    //  66 = 65+1
    //  a=66 // char 
    // cout << a;

    //  int to char
    // int a=97;
    // char ch=a;
    // cout << a;

    // char g='B';
    // int gg=g;
    // cout<<g<<endl;

    //  explicit type conversion
    // int num1=10;
    // float num2=5.5;
    // float result = num1 + (int)num2;
    // cout<<result<<endl;

    // double pi=3.14159265;
    // int intpI=(int)pi;
    // cout<<intpI<<endl;

    // float fn=65.35;
    // char cv=(char)fn;
    // cout<<cv<<endl;

    int a=10;
    int b=3.0; // int hai automatic type conversion of float to int as it will be in integer block 
    float c=a/b;// int/int = int return krenga that s why only 3 rahenga not 3.333 
    cout<<c<<endl;


    return 0;
}