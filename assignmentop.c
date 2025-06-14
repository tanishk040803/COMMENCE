// this program is about the assignment operators 

#include<stdio.h>
    int main(){
    int a = 1;
    int b = 4;
    int c = 4; 
    int d = 7;
    int x ;

    a = a + b ; // from this instruction a became 5 then
    a += b ; // from this when a became 5 it add the value of b so the output will be 9 
    c*= d;   //we can use any addition or abustraction also in this command , we can also use /= or %=


    printf("%d\n", c);
    printf("%d\n", a);


  
     printf(" enter a number :");
     scanf("%d" , &x);
     printf ("%d", x % 2 == 0 );
    return 0 ;
    }
