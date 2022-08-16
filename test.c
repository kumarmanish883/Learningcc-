#include<stdio.h>
struct student{
    char name[500];
    int age;
    int roll_no;
    float marks;
};

void print(char name[],int age,int roll,float marks){
    printf("%s %d %d %.2f",name,age,roll,marks);
}



int main(){
    struct student s1={"Manish",16,50,72.5};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
    // int a;
    // printf("Enter a number?");
    // scanf("%d",&a);
    // printf("The number is %d",a);
    // return 0;
}