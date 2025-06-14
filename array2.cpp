#include<iostream>
using namespace std;
int main(){
    int nums[]= {2,5, 63, 27, -15,20};
    int size=6;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout<<"The smallest number in the array is: "<<smallest<<endl;
    cout<<"The largest number in the array is: "<<largest<<endl;


    
    for (int i = 0; i < size; i++) {
        if (nums[i] == 20) {
            cout << "The index of 20 in the array is: " << i << endl;
            break; // Exit the loop once the value is found
        }
    }

return 0;

}