#include <iostream>
int getnum(){
std::cout<<"Enter your number:  ";
int x;
std::cin>>x;
return x;
}
int main(){

int num1=getnum();
int num2=getnum();
int result= num1 + num2;
 
std::cout<<"The result is " <<result<<
std::endl;

for(int i=0; i<3;i++){


std::cout<<result<<
std::endl;

}
}

