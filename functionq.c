  
  #include<stdio.h>

 void printhello(); // declaration/ prototype
 void printgoodbye();
 
int main()
{
    printhello(); // function call
    printgoodbye();
    return 0;
}
 //function definition
 void printhello(){
    printf("helllo babygirl!\n");
 }
   void printgoodbye(){
    printf(" goodbye !");
   }