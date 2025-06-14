// conditonal statements -> switch statement
#include<stdio.h>

int main (){
char day ; //  when use integer we use int and we use %d
printf("enter day (1-7):");
scanf("%s", &day);

switch ( day) {

    case  'm': printf (" monday \n");
    break;

    case 'w' : printf (" wednesday \n "); // cases can be in any order like we can write case 2 before case 1
    break;

    case 't' : printf (" tuesday\n ");
    break;

    case 'T' : printf (" thursday \n");
    break; 

    case 'f': printf (" friday \n");
    break;
     
    case 's' : printf (" saturday \n");
    break; 

     case 'S': printf (" sunday \n");
    break;

    default : printf(" not a valid day !");
}

return 0;
}   

 

 