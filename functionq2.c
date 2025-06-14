 // program to print namaste if user is indian and bonjour if the user is french 
  #include<stdio.h>

 void  namaste();// declaration/ prototype
 void  Bonjour();
 
int main()
{
   printf(" enter F if you are french and I if indian:\n");
   char ch;
   scanf("%c", &ch);
   if ( ch== 'I'){
    //  function call 
    namaste();
   }
   else{
    Bonjour();
   }
    return 0;
}
 //function definition
 void  namaste(){
    printf("Namaste!\n");
 }
   void Bonjour(){
    printf("Bonjour!");
   }