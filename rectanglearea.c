
//this is for the area of rectangle in which the sides are a and b


/*this is for my personal info that when we add any variable with int or any other format specifiers then 
we have to add that specific variable at the scanf line at the en with & function */


#include<stdio.h>
int main(){
   int a;
   int b;
    printf("a is");
    scanf("%d",&a);
    printf("b is");
    scanf("%d",&b);
    printf("area is : %d",a*b);
    return 0;
}