#include <iostream>
using namespace std;

int main() {
     int rows;
     int coulmns;
     char symbol;
     cout<<"how many rows you want:";
     cin>>rows;

     cout<<"How many coulmns you want:";
     cin>>coulmns;

     cout<<"The symbol you want:";
     cin>>symbol;
    
    
    
     for(int i=1;i<=rows;i++)
     {
        for(int j=1;j<=coulmns;j++){
            cout<<symbol;
        }

        cout<<endl;
            
    }
       
     
     
    return 0;
}