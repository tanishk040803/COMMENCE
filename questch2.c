// print the smallest number 
#include<stdio.h>

int main (){
int num1 , num2;
int x;
printf("enter the first number :");
scanf("%d", &num1);

printf("enter the second number :");
scanf("%d", &num2);

if(num1 < num2 ){
    printf("the smallest number is : %d \n", num1);

}
else{
    printf("the smallest number is : %d \n", num2);

}
// this part to check if the given character is digit or not 
printf("enter a number :");
scanf("%d",&x);
printf("%d", x <= 9 );
// if the output gives 1 then it is true and if it gives 0 then its false 


 return 0;
} 