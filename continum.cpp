//right angles triangle pattern with numbers not repeating once.
// In all the pattern solving problems spaces are most important.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"how many rows you want for the right angled triangle:";
    cin>>n;
   int num=1;

     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
            
    } 
       
     
     
    return 0;
}