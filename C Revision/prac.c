#include <stdio.h>

int main()
{

    // find whether a number is even or odd.
    // int num;
    // printf(" Please enter the numer : \n");
    // scanf("%d",&num);
    // if (num%2==0){
    //     printf(" The number is even ");
    // }
    // else {
    //     printf(" The number is odd");
    // }

    // find the largest of two numbers
    // int a , b ;
    // printf(" Enter the numbers : \n");
    // scanf("%d%d",&a,&b);
    // if (a>b){
    //     printf(" The first number is greater than b ");
    // }
    // else {
    //     printf(" Second number is bigger ");
    // }

    // find the largest of three numbers using if else.
    // int a , b , c ;
    // printf(" Enter the values of this three numbers : \n");
    // scanf("%d%d%d",&a,&b,&c);
    // if (a>b && a>c){
    //     printf(" a  is bigger than b and c ");

    // }
    // else if (b>c && b>a){
    //         printf(" b is bigger than a and b");

    //     }
    // else {
    //     printf(" c is bigger than a and b");
    // }

    // find the leap year or not
    // int year ;
    // printf(" Enter the year : \n");
    // scanf("%d",&year);
    // if ( (year % 400 ==0) || (year % 4 ==0 && year % 100 !=0))
    // {
    //     printf(" The year is leap year ");
    // }
    // else {
    //     printf(" The year is not a leap year ");
    // }

    // sum of first n natural numbers
    // int n;
    // printf(" Enter the number :\n");
    // scanf("%d",&n);
    // int sum=0;
    // for(int i=0;i<=n;i++){
    //       sum+=i;
    // }
    // printf(" sum is %d",sum);

    // find the factorial of a number
    // int n;
    // printf(" Enter the number : \n");
    // scanf("%d",&n);
    // int fac=1;
    // for( int i=1;i<=n;i++){
    //     fac*=i;
    // }
    // printf(" factorial is %d",fac);

    // multiplication table of a give  number
    // int num , multi;
    // printf(" Enter the nujmber : \n");
    // scanf("%d",&num);
    // for(int i=0;i<=10;i++){
    //     multi=num*i;
    //     printf(" %d X %d = %d \n",num,i,multi);
    // }

    //  count digits in a number
    // int num , count=0;
    // printf("Enter the number : \n");
    // scanf("%d",&num);
    // while(num!=0){
    //     num=num/10;
    //     count++;
    // }
    // printf(" Number of digits is %d",count);

    // return 0;

    // reverse a number
    // int num, rev=0;
    // printf("Enter the number : \n");
    // scanf("%d",&num);
    // while(num!=0){
    //     rev=rev*10+num%10;
    //     num=num/10;
    // }
    // printf(" reverse of a number %d",rev);
    // return 0;

    // palindrome or not
    // int num , rev=0 , temp;
    // printf(" Enter the number : \n");
    // scanf("%d",&num);
    // temp=num;
    // while(num!=0){
    //     rev=rev*10+num%10;
    //     num=num/10;
    // }
    // if (temp==rev){
    //     printf(" palindrome");
    // }
    // else {
    //     printf(" not palindrome");
    // }
    // return 0;

    // all even numbers from 1 to 100
    // int i;
    // for(i=1;i<=100;i++){
    //     if (i%2==0){
    //         printf("%d\n",i);
    //     }
    //     else {
    //         continue;
    //     }
    // }
    // return 0;

    // odd numbers fro 1 to 100
    // int i;
    // for(i=1;i<=100;i++){
    //     if(i%2!=0){
    //         printf("%d\n",i);
    //     }
    //     else {
    //         continue;
    //     }
    // }
    // return 0;

    // sum of all even numbers from 1 to n
    // int n , sum=0;
    // printf(" Enter the number : \n");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     if (i%2==0){
    //         sum=sum+i;

    //     }
    //     else {
    //         continue;
    //     }
    // }
    // printf(" Sum is %d",sum);
    // return 0;

    // sum of digits of a number
    // int num , sum=0;
    // printf(" Enter the number : \n");
    // scanf("%d",&num);
    // while(num!=0){
    //     sum=sum+num%10;
    //     num=num/10;
    // }
    // printf(" SUm is %d",sum);
    // return 0;

    // armstrong number or not
    // int num , sum=0 , temp , rem;
    // printf(" Enter the number :\n");
    // scanf("%d",&num);
    // temp=num;
    // while(num!=0){
    //     rem=num%10;
    //     sum=sum+rem*rem*rem;
    //     num=num/10;
    // }
    // if (temp=sum){
    //     printf(" Armstrong number ");
    // }
    // else {
    //     printf(" Not armstrong number");
    // }
    // return 0;

    // prime number or not
    // int num , i , count=0;
    // printf(" Enter the number : \n");
    // scanf("%d",&num);
    // for(i=1;i<=num;i++){
    //     if (num%i==0){
    //         count++;
    //     }
    // }
    // if (count==2){
    //     printf(" Prime number ");
    // }
    // else {
    //     printf(" not prime");
    // }
    // return 0;

    // all prime number from 1 to n
    //     int n , i , j , count;
    //     printf(" Enter the number :\n");
    //     scanf("%d",&n);
    //     for(i=2;i<=n;i++){
    //         count=0;
    //         for(j=1;j<=i;j++){
    //             if(i%j==0){
    //                 count ++;
    //             }
    //         }
    //         if (count==2)
    //         {
    //             printf("%d",i);
    //         }
    //     }

    //     return 0;
    // }

    // fibonacci series up to n =
    int n, f0 = 0, f1 = 1, f2;
    printf(" Enter the range : \n");
    scanf("%d\n", &n);
    printf(" Fibonacci Series : \n");
    if (n >= 1)
    {
        printf("%d\n", f0);
    }
    if (n >= 2)
    {
        printf("%d\n", f1);
    }
    for (int i = 3; i <= n; i++)
    {
        f2 = f0 + f1;
        printf("%d\n", f2);
        f0 = f1;
        f1 = f2;
    }
    return 0;
}