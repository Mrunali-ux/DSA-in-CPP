#include <stdio.h>
#include <string.h>

// struct Books
// {
//     char  name[50];
//     char author[50];
//     int price;

// }book;

// void printStruct(struct Books bk){

//     printf(" Author name is %s\n",bk.name);
//     printf(" Book name is %s\n",bk.author);
//     printf(" Book price is %d\n",bk.price);

// }
// int main(){
//     // structures
//   // ek hi variable me naam , number store krna ho toh then
//   // it allows krta hai ek se alg alg data type ka ek samahaar banana

//   struct Books bk1,bk2;

//   strcpy(bk1.name,"C,Programming ");
//   strcpy(bk1.author,"Dennis ");
//   bk1.price=78;

//   printStruct(bk1);

//     return 0;
// }

// struct myStructure
// {

//     int myNum;
//     char myLetter;
//     char myString[26];
// };

// int main()
// {

//     struct myStructure s1;
//     struct myStructure s2;
//     struct myStructure s3;

//     s1.myNum = 13;
//     s1.myLetter = 'M';

//     s2.myNum = 14;
//     s2.myLetter = 'R';

//     struct myStructure s4={8,'U',"Dhopte"};
    

//     strcpy(s3.myString,"Mrunali");

//     printf(" My numbers %d\n", s1.myNum);
//     printf(" My Letter is : %c\n", s1.myLetter);

//     printf(" My numbers %d\n", s2.myNum);
//     printf(" My Letter is : %c\n", s2.myLetter);

//     printf(" My String is : %s\n",s3.myString);

//     printf(" In Single line is : %d, %c , %s",s4.myNum,s4.myLetter,s4.myString);

//     struct myStructure s5;
//     s5=s4;


//     return 0;
// }

// struct myStructure{
//     int myNum;
//     char myLetter;
//     char myString[26];
// };

// int main(){

//     struct myStructure s1={8,'M',"Mrunali"};

//     struct myStructure s2;

//     s2=s1;

//     s2.myNum=90;
//     s2.myLetter='D';
//     strcpy(s2.myString,"Dhopte");

//     printf("%d , %c , %s\n",s1.myNum,s1.myLetter,s1.myString);
//     printf("%d %c %s\n",s2.myNum,s2.myLetter,s2.myString);

//     return 0;
// }

// struct myCar{

//     char brand[26];
//     char model[26];
//     int year;
// };

// int main(){

//     struct myCar c1={"BMW","X5",1999};
//     struct myCar c2={"Ford","Mustang",1969};
//     struct myCar c3={"Toyota","Corolla",2011};

//     printf("%s %s %d\n",c1.brand,c1.model,c1.year);
//     printf("%s %s %d\n",c2.brand,c2.model,c2.year);
//     printf("%s %s %d\n",c3.brand,c3.model,c3.year);
//     return 0;
// }

// struct person{
//     int age;
// };

// int main(){
//     struct person p;
//     p.age=25;
//     printf("Age is : %d\n",p.age);
//     return 0;
// }

// struct Owner {
//     char fName[30];
//     char lName[30];
// };

// struct car {
//     char brand[30];
//     int year;
//     struct Owner owner;
// };

// int main(){
//     struct Owner person={"JOhn","Doe"};
//     struct car c1={"Toyota",2010,person};

//     printf(" Car : %s %d\n",c1.brand,c1.year);
//     printf(" Owner :%s %s\n",c1.owner.fName,c1.owner.lName);

//     return 0;
// }

// struct car{
//     char brand[30];
//     int year;

// };

// int main(){

//     struct car c1={"Toyota",2020};
    
//     struct car *ptr=&c1;

//     printf(" Brand : %s\n",ptr->brand);
//     printf(" Year %d\n",ptr->year);

//     return 0;
    
// }

struct Car{
    char brand[30];
    int year;
};

void updateYear(struct Car *c){
    c->year=2025;
}

int main(){

    struct Car myCar={"Toyota",2020};

    updateYear(&myCar);

    printf(" Brand %s\n",myCar.brand);
    printf(" Year %d\n",myCar.year);

    return 0;
}

// -> it is pointer member 