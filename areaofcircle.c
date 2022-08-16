#include <stdio.h>
int main(){
    float pi=3.14;
    float radius;
    printf("Enter the value of radius?\n");
    scanf("%f",&radius);

    printf("The Area of circle is:%f",pi*radius*radius);
    return 0;
}