#include<stdio.h>

// union myUnion {
//     int myNum;
//     char myLetter;
//     char myString[30];

// };

// int main(){
//     union myUnion u1;

//     u1.myNum=1000;

//     u1.myLetter='A';

//     printf(" My Num %d\n",u1.myNum);
//     printf(" Letter %c\n",u1.myLetter);

//     printf(" Size %zu\n",sizeof(u1));
//     return 0;
// }

// struct Example {
//     int b;
//     char a;
//     char c;
// };

// union U{
//     char a;
//     int b;
//     char c;
// };


// int main(){
//     printf(" Size is %zu bytes\n",sizeof(struct Example));
//     printf("Union %zu \n",sizeof(union U));
//     return 0;
// }

// typedef float temp;

// int main(){
//     temp today=25.5;
//     temp tomorrow=18.6;

//     printf(" Today %.1f C\n",today);
//     printf(" Tomorrow %.1f",tomorrow);

//     return 0;
// }

// struct car {
//     char brand[30];
//     int year;
// };

// typedef struct{
//     char brand[30];
//     int year;
// }car;

// int main(){
//     struct car c1={"BMW",1999};
//     car c2={"yoo",2000};

//     printf("%s %d\n",c1.brand,c1.year);
//     printf("%s %d\n",c2.brand,c2.year);

//     return 0;
// }

// typedef struct {
//     char fName[20];
//     char lName[20];

// }Owner;

// typedef struct{
//     char brand[20];
//     int year;
//     Owner owner;
// }Car;

// typedef struct {
//     char name[30];
//     Car car;
// }Dealership;

// int main(){
//     Owner person={"John","Doe"};
//     Car c1={"Toyota ",2010,person};
//     Dealership d={"City Motors",c1};

//     printf(" Featured car : %s %d , owned by %s %s \n",
//     d.car.brand,d.car.year,d.car.owner.fName,d.car.owner.lName);

//     return 0;
// }

#include<stdio.h>

int main(){
    
    char s[1000];
    
    fgets(s, sizeof(s), stdin);
    
    printf("Hello, World!\n");
    
    printf("%s",s);
    
    return 0;
}