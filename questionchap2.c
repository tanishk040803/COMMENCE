// if its sunday and its snowing -> true 
// if its monday or its raining  -> true 
// if a number is greater than 9 and less than 100 -> true 


#include<stdio.h>


int main(){
    int issunday = 1 ;
    int issnowing = 1 ;
    int ismonday = 0; 
    int israining = 1 ;
    int x;
    printf("%d\n",issunday&& issnowing );

    printf("%d\n", ismonday|| israining );

    printf("enter a number :");
   scanf(" %d",&x);
    printf ("%d\n", x> 9 && x < 100) ;
    

    return 0;
}
