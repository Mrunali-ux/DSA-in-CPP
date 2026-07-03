#include <iostream>
using namespace std;

// int sum(int a , int b){
//     int totalsum = a+b;
//     return totalsum;
// }


// void printMyName()
// {
//     cout << "Mrunali";
// }

// void printMyName()

int getMultiplication (int x , int y, int z){

    int result= x*y*z;
    return result;
}

void printNam(){
       for(int i=1 ; i<=10; i++){
        cout << "Mrunali";
       }
}

void multiples(int num){
    for(int i=1 ; i<=10;i++){
        cout << num*i << endl;
    }
    return;
}

int convertintoCelsius(int far)
{
    int celsius = (far-32)*5/9;
    return celsius;
}

char convertintoUppercase(char ch)
{
    char answer = ch - 'a' + 'A';
    return answer;
}

int main()
{
   
    // int ans = sum(5,10);

    // cout << ans << endl;

    // function call
    // printMyName();
     
    // function calling
    // int multians=getMultiplication(5,4,3); function arguments bhejte hoo
    // cout << multians << endl;

    // printNam();

    // int m = multiples(5);error
    // int m=5;
    // multiples(5);


    // int far=32;
    // int ans=convertintoCelsius(far);
    // cout << ans << endl;

    char ans=convertintoUppercase('k');
  cout << ans ;


    return 0;
}

// void printMyName()
// {
//     cout << "Mrunali";
// }