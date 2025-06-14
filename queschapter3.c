// conditonal statements -> nested-if 
#include<stdio.h>

int main (){
char ch ;
printf("enter the charcter :");
scanf("%c", &ch);


if(ch >= 'A' && ch <= 'z'){
    printf("Upper case \n");
}
    else if ( ch >= 'a' && ch <= 'z') {
        printf("lower case\n");
    }
    else { 
        printf(" not english letter \n");
    }
    

 return 0;
} 

