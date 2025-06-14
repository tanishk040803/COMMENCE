#include<iostream>

namespace first{ // this is for using same entity but with diffrent namespace
   int x=9;

}
namespace second{
    int x=10;
}

int main(){
    const double PI=3.14159;
    double radius=10;
    double area=PI*radius*radius;
    std::cout<<"the area of the circle is:"<<area<<"cm^2"<<std::endl;
    using namespace first;   // for namespace output

    std::cout<<x<<std::endl;
    
    return 0;

}