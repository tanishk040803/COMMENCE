#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<" enter a number:";
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
cout<<"the sum :"<<sum<<endl;
    return 0;
}