// conditonal statements -> nested-if 
#include<stdio.h>

int main (){
int marks ;
printf("enter the marks ( 0-100) :");
scanf("%d", &marks);


if(marks >= 0 && marks <= 30){
    printf("failed \n");
}
    else if ( marks > 30 && marks <= 100) {
        printf("passed\n");
    }
    else { 
        printf(" wrong marks");
    }
    
 // FOR TERNARY
  // marks <= 30 ? printf (" fail \n " ) : printf ( " pass \n") ;
 
 return 0;
} 

