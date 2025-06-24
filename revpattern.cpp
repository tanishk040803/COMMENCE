// Reverse right angles triangle pattern.

#include <iostream>
using namespace std;

int main() {
     
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    
     for(int i=n;i>=1;i--) // the rows are decreasing 
     {
        for(int j=1;j<=i;j++){ // the coulmns are based on the rows so j<=i
            cout<<'*'; // we dont have to define the symbol before 
        }

        cout<<endl;
            
    }
       
     
     
    return 0;
}