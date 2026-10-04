#include <stdio.h>
#include<stdlib.h>

// int main()
// {

//     int a = 98;
//     printf("%d\n", a);

//     int *ptr=NULL; // variable which store address of other vraiable 
//     if (!ptr){
//         printf(" Pointer is not null ");
//     }
//     ptr = &a;
//     *ptr = 988;  // jo bhi hai value hai uss variable ki jisko pointer point kr rha hai usko 988 kr do 
//     printf("%d", a);

//     return 0;
// }

// int main(){
    // int myAge=43;
    // printf("%d\n",myAge);
    // printf("%p",&myAge);

    // int myAge=43;
    // int* ptr=&myAge;
    // printf("%d\n",myAge);
    // printf("%p\n",&myAge);
    // printf("%p\n",ptr);

    // int myAge=43;
    // int* ptr=&myAge;
    // printf("%p\n",ptr);
    // printf("%d\n",*ptr);

    // int myNumbers[4]={25,50,75,100};
    // int i;
    // for(int i=0;i<4;i++){
    //     printf("%p\n",&myNumbers[i]);
    // }

    // int myInt;
    // printf("%d",sizeof(myInt));

    // int mynumbers[4]={25,50,75,100};
    // printf("%p\n",mynumbers);
    // printf("%p\n",&mynumbers[0]);

    // printf("%d\n",*mynumbers);

    // printf("%d",*(mynumbers + 1));

    // int myNumbers[4]={25,50,75,100};
    // int *ptr=myNumbers;
    // int i;
    // for(i=0;i<4;i++){
    //     printf("%d\n",*(ptr+i));
    // }

    // *myNumbers=13;

    // *(myNumbers+1)=17;
    
    // printf("%d\n",*myNumbers);
    
    // printf("%d\n",*(myNumbers+1));

    // int myNumbers[4]={25,50,75,100};

    // int *p=myNumbers;

    // printf("%d\n",*p);
    // printf("%d\n",*(p+1));
    // printf("%d\n",*(p+2));
    // printf("%d\n",*(p+3));

    // int myNumbers[3]={10,20,30};
    // int *p=myNumbers;

    // printf("%d\n",*p);
    // p++;
    // printf("%d\n",*p);
    // p--;
    // printf("%d\n",*p);

    // p+=2;
    // printf("%d\n",*p);

    // int myNumbers[5]={10,20,30,40,50};

    // // int* start=&myNumbers[1];
    // // int* end=&myNumbers[4];

    // int *start=&myNumbers[1];
    // int *end=&myNumbers[4];

    // printf("%ld\n",end-start);

    // int myNumbers[2]={1,2};
    // char letters[]="Hi";

    // int *pi=myNumbers;
    // char *pc=letters;

    // printf("%p\n",(void*)pi);

    // printf("%p\n",(void*)(pi+1));
    // printf("%p\n",(void*)(pi+2));

    // printf("%p\n",(void*)pc);
    // printf("%p\n",(void*)(pc+1));
    
    // int myNumbers[4]={25,50,75,100};

    // int *p=myNumbers;

    // for(int i=0;i<4;i++){
    //     printf("%d\n",*p);
    //     p++;
    // }

    // int myNum=10;
    // int *ptr=&myNum;
    // int **pptr=&ptr;

    // printf(" My num = %d\n",myNum);
    // printf(" *ptr %d\n",*ptr);
    // printf("**ptr = %d\n",**pptr);

    // int myNum=5;
    // int *ptr=&myNum;
    // int **pptr=&ptr;

    // **pptr=20;

    // printf(" myNum = %d\n",myNum);

    // int x=10;
    // int *ptr=&x;

    // printf("%d\n",*ptr);

    // returntype (*pointerName)(parameterType1,2...);
    // int (*ptr)(int , int )

    



//     return 0;
// }


// int add(int a,int b){
//         return a+b;
//     }

// int main(){

//     int (*ptr)(int,int)=add;
//     int result=ptr(5,3);
//     printf(" Result : %d\n",result);
//     return 0;
// }

// void greetMorning() {
//     printf("Good morning \n");
// }

// void greetEvening(){
//     printf("Good Evening !\n");
// }

// void greet(void (*func())){
//     func();
// }

// int main(){
//     greet(greetMorning);
//     greet(greetEvening);
//     return 0;
// }

// void add(){
//     printf("Add\n");
// }

// void subtract(){
//     printf("Subtract\n");
// }

// void multiply(){
//     printf(" Multiply \n");
// }

// int main(){
//     void (*operations[3])()={add,subtract,multiply};
//     for(int i=0;i<3;i++){
//         operations[i]();
//     }
//     return 0;
// }

// void add(int a, int b){
//     printf(" Result %d\n",a+b);
// }

// void subtract(int a,int b){
//     printf(" Result %d\n",a-b);
// }

// void multiply(int a,int b){
//     printf(" Result 5d\n",a*b);
// }

// int main(){

//     int choice , x=10,y=5;

//     void (*operations[3])(int , int)={add,subtract,multiply};

//     printf(" x %d\n , y %d\n ",x,y);

//     printf(" Choose an operation : \n");
//     printf(" 0: Add \n 1: Subtract \n 2: Multiply \n");
//     scanf("%d",&choice);

//     if(choice>=0 && choice<3){
//         operations[choice](x,y);
//     }
//     else 
//     {
//         printf(" INvalid");
//     }

//     return 0;
    
// }

// void sayHello(){
//     printf(" Hello from the callback \n");
// }

// void runCallback(void (*callback())){
//     printf(" Before calling callback \n");
//     callback();
//     printf(" After calling callback \n");
// }

// int main(){
//     runCallback(sayHello);
//     return 0;
// }

// void addNumbers(int a , int b){
//     printf(" Sum is %d\n",a+b);
// }

// void calculate(void (*callback)(int , int),int x , int y){
//     callback(x,y);
// }

// int main(){
//     calculate(addNumbers,5,3);
//     return 0;
// }

int compare( const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

int main(){
    int numbers[]={5,2,9,1,7};
    int size=sizeof(numbers)/sizeof(numbers[0]);

    qsort(numbers,size,sizeof(int),compare);

    for(int i=0;i<size;i++){
        printf("%d",numbers[i]);
    }
    return 0;
}