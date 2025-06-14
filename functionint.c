 #include<stdio.h>
 // we can also use int as a function 

 int sum (int a ,int b);
 // int functiin can be used before int main 
int main()

{
    // function call is done here  
    int a,b;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d",&b);



    int s = sum(a,b);
    printf( "sum is %d \n", s);



return 0;

} // function definition 
int sum(int a, int b){
    return a+b;
}