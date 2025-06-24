#include <iostream>
using namespace std;

int main() {
    
    int sum=0;
    cout << "Enter a number: ";
   
    int n;
    cin>>n;
    

    for(int i=1; i<=n; i++){
        if(i%2==0){
    sum+=i;
        }

}

cout<<"the sum of even numbers is:"<<sum<<endl;
    return 0;
}