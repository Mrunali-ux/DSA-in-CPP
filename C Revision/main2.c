#include<stdio.h>
#include<math.h>

// int glo=76;

// data_type func_name(parameter_type parametername){
    // return value_of_type_data_type;}

// void newPrint(char *char1)
// {
//     printf(" The value is %s\n",char1);
// }

// yeh function integer type of return krta hai and sum two integer 
// int sum(int a , int b){
//     return a+b;
// }

// float average(float a , float b){
//     return (a+b)/2;
// }

// int main(){

//     int glo=87;

    // newPrint(" Hello world ");

    // printf("%d\n",sum(100,299));
    
    // printf("%f\n",average(100,299));

    // printf(" glo is %d\n",glo);


//     return 0;
// }

//  Practice 

// Predefined function 
// int main(){
//     printf("Hello Wolrd");
//     return 0;
// }

// void myFunction(){
//     printf(" I just got executed ! ");
// }

// int main(){
//     myFunction();
//     myFunction();
//     myFunction(); // call the function
//     return 0;
// }

// void calculateSum(){
//     int x=5;
//     int y=10;
//     int sum=x+y;
//     printf("sum is %d\n",sum);
// }

// int main(){
//     calculateSum();
//     return 0;
// }

// returntype functionName (parameter1....){
// }

// void myFunction(char name[],int age){
//     printf(" Hello %s\n %d\n",name,age);

// }

// int main(){
//     myFunction("Liam",3);
//     myFunction("Jenny",14);
//     myFunction("Anja",30);
//     return 0;
// }

// void calculateSum(int x , int y){
//     int sum=x+y;
//     printf(" The sum of %d + %d is : %d\n",x,y,sum);
// }

// int main(){
//     calculateSum(5,3);
//     calculateSum(8,12);
//     calculateSum(15,15);
//     return 0;
// }

// void myFunction(int myNumber[5]){
//     for(int i=0;i<5;i++){
//         printf("%d\n",myNumber[i]);
//     }
// }
// int main(){
//     int myNumbers[5]={10,20,30,40,50};
//     myFunction(myNumbers);
//     return 0;
// }

// int myFunction(int x){
//     return 5+x;
// }
// int main(){
//     printf(" Result is %d\n",myFunction(3));
//     return 0;
// }

// int myFunction(int x , int y){
//     return x+y;
// }
// int main(){
//     printf(" Result is : %d\n",myFunction(5,3));
//     return 0;
// }
// int main(){
//     int result=myFunction(5,3);
//     printf(" Result is %d\n",result);
//     return 0;
// }

// int main(){
//     int result1=myFunction(5,3);
//     int result2=myFunction(8,2);
//     int result3=myFunction(15,15);

//     printf(" Result 1 is %d\n",result1);
//     printf(" Result2 is %d\n",result2);
//     printf(" Result 3 is %d\n",result3);

//     return 0;
// }

// int main(){
//     int resultArr[6];

//     resultArr[0]=myFunction(5,3);
//     resultArr[1]=myFunction(8,2);
//     resultArr[2]=myFunction(15,15);
//     resultArr[3]=myFunction(9,1);
//     resultArr[4]=myFunction(7,7);
//     resultArr[5]=myFunction(1,1);

//     for(int i=0;i<6;i++){
//         printf(" Result%d is %d\n",i+1,resultArr[i]);


//     }
//     return 0;
// }

// float toCelsius(float fahrenheit){
//     return(5.0/9.0)*(fahrenheit-32.0);
// }

// int main(){
//     float f_value=98.8;

//     float result=toCelsius(f_value);

//     printf(" Fahrenheit is %.2f\n",f_value);

//     printf("Convert fahrenheit to celsius is %.2f\n",result);

//     return 0;
// }
// int y=5;

// void myFunction(){
//     int x=5;
//     printf("%d",x);
// }
// int main(){
//     myFunction();
//     printf("%d\n",y);
//     return 0;
// }

// void myfunction(){ // declaration 
//    // the body of the function (definition)}

// void myFunction();

// int main(){
//     myFunction();
//     return 0;
// }

// void myFunction(){
//     printf(" I just got executed ");
// }

// int myfunction(int x , int y);

// int main(){
//     int result=myfunction(5,3);
//     printf("%d\n",result);
//     return 0;
// }

// int myfunction(int x , int y){
//     return x+y;
// }

// void myFunction();
// void myotherFunction();

// int main(){
//     myFunction();
//     return 0;
// }

// void myFunction(){
//     printf("Some of text \n");
//     myotherFunction();
// }

// void myotherFunction(){
//      printf(" Hey me 2nd");
// }

// int add(int x , int y);

// int main(){
//     int result=add(5,3);
//     printf("%d\n",result);
//     return 0;
// }

// int add(int x , int y){
//     return x+y;
// }

// int main(){
//     printf("%f",sqrt(16));
//     printf("%f\n",ceil(1.4));
//     printf("%f\n",floor(1.4));
//     printf("%f\n",pow(4,3));

//     return 0;
// }

// inline int add(int a,int b){
//     return a+b;
// }

// int main(){
//     printf("%d\n",add(5,3));
//     return 0;
// }

// int sum(int k);

// int main(){
//     int result=sum(10);
//     printf("%d",result);
//     return 0;
// }

// int sum(int k){
//     if(k>0){
//         return k+sum(k-1);
//     }
//     else{
//         return 0;
//     }
// }

// void countdown(int n);

// int main(){
//     countdown(5);
//     return 0;
// }

// void countdown(int n){
//     if(n>0){
//         printf("%d\n",n);
//         countdown(n-1);
//     }
// }

int factorial(int n);

int main(){
    printf(" Factorial of 5 is %d",factorial(5));
    return 0;
}

int factorial(int n){
    if(n>1){
        return n*factorial(n-1);

    }
    else{
        return 1;
    }
}