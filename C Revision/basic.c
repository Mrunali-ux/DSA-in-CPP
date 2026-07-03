#include<stdio.h>

int main(){

    //  Single line comments = compiler will ignore this line 
    /*
    This is a multi line comments 
    */
//    int, float , char
// memory=RAm me load     
   int a1=7;// 2 to 4 bytes 
   float b1=8.0;// 4 bytes -  6 decimal places
   char c1='t';// 1 bytes
   
   unsigned char d1='t';
   unsigned int integer6=8; // 2 bytes only positive value
   short integer2=9;// 2 bytes
   long integer1=10;// 4 bytes 
   double myfloat=7.45;// 15 decimal places - 8 bytes
   long double myfloat1=65432.8765; // 19 decimal places precision -  10 bytes

   // kitna size exactly le rha hai yeh architecture memory me 
   printf(" the size taken by int is %d\n",sizeof(int));
   printf(" the size taken by unsigned  int is %d\n",sizeof(unsigned int));
   printf(" the size taken by float is %d\n",sizeof(float));
   printf(" the size taken by double is %d\n",sizeof(double));
   printf(" the size taken by long double is %d\n",sizeof(long double));

   printf(" the size taken by character is %c\n",sizeof(char));
   printf(" the size taken by unsigned character is %c\n",sizeof(unsigned char));
   printf(" the size taken by short int is %d\n",sizeof(short int));


    printf("hello %d,%f,%c",a1,b1,c1);

    printf("****\n Rules for creating variables ***\n");
    // variable storage area ko diya gya naam hota hai taaki program usko manipulate kr ske C me woh ek type ka hota hai jo ki uska size layout determine kr ske 
    int harryName ; // this is variable declaration 
    harryName=76; // variable initialization

    char five='5';// this is variable declaration and initialization 

    const int i=9;
   //  i=10;
   harryName = 98;

   printf(" ****\n Types of operator in C ****\n");
   
   /*
    Arithmetic operator
    relational operator
    logical operator
    bitwise operator 
    assignment operator 
    miscellaneous operator
   */
  // Arithmetic operator
  int a=60,b=7,c=8;
  printf(" The sum of a and b is %d\n",a+b);
  printf(" subtract is %d\n ",a-b);
  printf(" multiply is %d\n",a*b);
  printf(" Division is %d\n",a/b);
  printf(" modulo is %d\n",a%b);//  kitna remainder  aayenga by division 
  printf(" Increment is %d\n",++a);
  printf(" decrement is %d\n,a--",--b);

  // Relationl operators
  int harry=9 , rohan=45;
  printf("%d\n",harry==rohan);
  printf("%d\n",harry!=rohan);
  printf("%d\n",harry>rohan);
  printf("%d\n",harry<rohan);

  // Logocal operators
  int h=0,j=1;
  printf(" logical operator returned %d\n", h &&j);
  printf(" logical operator returned %d\n", h ||j);
  printf("  logical operatr returned %d\n", !j);
  printf(" logical operator returned %d\n", !h);

  // bitwise operator - work bit by bit
  //  A=60 B=13
  //A = 00111100
  // B = 00001101
  // r = 00001100 = 12
  int A=60 , B=14;
  printf(" bitwise operator returned %d\n", A&B);
  printf(" bitwise operator returned %d\n", A|B);
  printf(" bitwise operator returned %d\n", A*B);
  printf(" bitwise operator returned %d\n", A<<B);
  printf(" bitwise operator returned %d\n", A>>B);

  // Assignment operators 
  // =,+=,-=,*= 
  int ha=9;
  ha+=9;
  printf(" ha is %d\n");

 // Misc operators - &,*,?:

 printf(" ** Taking input from user in C **");

 int harryinput;
 printf("\n Please enter the value of of harryinput ");
 scanf("%d",&harryinput);
 printf("\n you enter %d  the value of of harryinput ",harryinput);

 printf("\n you enter %f  the value of of harryinput ",(float)harryinput);

 int num1 , num2 ;
 scanf("%d",&num1);
 scanf("%d",&num2);
 printf("\n num1/num2 is %f",(float) num1/num2);




    return 0;

}