#include<iostream>
using namespace std;
int main(){
    int n;
    long long fact=1;    // for factorial of big numbers
    
    cout<< " enter the number for its factorial:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    } 
    cout<<"the factorial of number is:"<<fact<<endl;
}


