#include <stdio.h>

// int main()
// {
//     //  array - data structure jo ki humko sequential collection of elements ko store krne me madat krta hai
//     // example to store 10 numbers in 1 variable

//     int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


//     for (int i = 0; i < 10; i++)
//     {
//         printf(" Enter the values for index %d  \n",i);
//         scanf("%d\n", &arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("  the values for index %d is %d \n",i,arr[i]);
//         // scanf("%d\n", &arr[i]);
//     }
//         // printf("%d\n", arr[7]);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char arr[10];

//     for(int i = 0; i < 7; i++) {
//         printf("Enter the value for index %d: ", i);
//         scanf(" %c", &arr[i]);
//     }

//     printf("\nArray elements are:\n");
//     for(int i = 0; i < 7; i++) {
//         printf("%c", arr[i]);
//     }

//     return 0;
// }
int main(){
//  int myNumbers[]={25,50,75,100};
//  myNumbers[0]=33;
// printf("%d",myNumbers[0]);

// int myNumbers[4];

// myNumbers[0]=25;
// myNumbers[1]=50;
// myNumbers[2]=75;
// myNumbers[3]=100;

// printf("%zu",sizeof(myNumbers));

// int myNum[]={10,25,50,75,100};
// int length=sizeof(myNum)/sizeof(myNum[0]);

// printf("%d",length);

// int myNumbers[]={25,50,75,100};
// int length=sizeof(myNumbers)/sizeof(myNumbers[0]);
// int i;

// for(i=0;i<length;i++){
//     printf("%d\n",myNumbers[i]);
// }

// int ages[]={20,22,18,35,48,26,87,70};

// float avg ,sum=0;

// int length=sizeof(ages)/sizeof(ages[0]);

// for(int i=0;i<length;i++){
//     sum+=ages[i];
// }

// avg=sum/length;

// printf(" The avarage age is : %.2f",avg);


// int lowestAge=ages[0];

// for(int i=0;i<length;i++){
//     if(lowestAge>ages[i]){
//         lowestAge=ages[i];
//     }
// }

// printf("%d",lowestAge);

// int myNumbers[]={3,-1,7,0,9};
// int length=sizeof(myNumbers)/sizeof(myNumbers[0]);

// for (int i=0;i<length;i++){
//     if(myNumbers[i]<0){
//         continue;
//     }
//     if(myNumbers[i]==0){
//         break;
//     }
//     printf("%d\n",myNumbers[i]);
// }

// int matrix[2][3]={{1,4,2},{3,6,8}};
// // matrix[0][0]=9;
// // printf("%d",matrix[0][0]);

// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         printf("%d\n",matrix[i][j]);
//     }
// }

int myNum[]={1,2,3,4,5};
myNum[0]=10;
myNum[4]=50;

printf("%d\n",myNum[0]);
printf("%d",myNum[4]);

return 0;
}
