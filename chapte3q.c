 // program to give grades 
// marks < 30 is C , 30 <= marks < 70 is B , 90 <= MARKS < 100 IS A+// conditonal statements -> nested-if 
#include<stdio.h>

int main (){
in ;
printf("enter the marks ( 0-100) :");
scanf("%d", &marks);


if(marks >= 0 && marks < 30){
    printf(" c \n");

     }else if ( marks >=30 && marks <= 70) {
        printf("B\n");
    }
    else if ( marks >= 90 && marks<=100){
        printf( "A+\n");
    }

    else { 
        printf (" wrong marks");
    }


 return 0;
} 

