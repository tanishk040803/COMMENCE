/* this progeam is basically based on the logical operators that we use in c language and here we 
have to chaeck multiple conditions at the same time 

these are of three types that is AND(&&) ,  OR (||),  NOT (!) */


 // this program is for AND operator that shows when both or all the conditions are true it will give 1 as a output otherwise 0
 #include<stdio.h>
  int main(){
    printf("%d\n", 4>3 && 5>2);


     // now this is about the OR operator and in this case if one condition is true then all the conditions will be true and it will output as 1 otherwise 0

     printf("%d\n", 4>3 || 5>2);

     // this is about the NOT operator and it works as if something is true then it wil change its outcome and make it false meaning if the outcome is 0 it will change it to 1 

     printf("%d\n",! (4>3));
     printf("%d\n",! (4>3) && (3>4));

    return 0;

  }

  
// now we will learn about the operator precedence in logical operators

/*  1 .  !
    2 .  * , / , %
    3 .  < , <= , > , >= 
    5 .  ==, != 
    6 .  &&
    7 .  ||
    8 .  =

*/

