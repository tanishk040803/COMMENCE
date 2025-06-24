//right angles triangle pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"how many rows you want for the right angled triangle:";
    cin>>n;
    char symbol='*';

     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++){
            cout<<symbol;
        }

        cout<<endl;
            
    }
       
     
     
    return 0;
}