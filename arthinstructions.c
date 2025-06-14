
/*this program shows the diffrent diffrent arthmetic operators that are used in c language  we can use math function when doing any math instruction*/
#include<stdio.h>
#include<math.h>
int main(){
    int b, c;
    b=c=3;
    int a = b + c;
    int power=pow(b,c);
    printf("%d\n",power);

    printf("%d\n",16%10);
    
    printf("%F\n",3.0*2);
    /*this last part shows the type conversion that when we do int operator float it always gives out float data type*/ 
int x= (int)1.9999;
printf("%d\n",x);
// this shows that when float value are converted to int then it removes all the decimal part.
 
int y= 4 + 9*10 ;
printf("%d",y);

// this shows the operator precedence in c language and arthmetic operations
 
    return 0;
} 
