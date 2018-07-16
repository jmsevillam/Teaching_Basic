#include <iostream>

int main(){
  double a=2;
  double b=3;
  double c;
  c=a/b;
  std::cout<<a/b<<std::endl;
  float a2=2;
  float b2=3;
  double c2;
  c2=a2/b2;
  std::cout<<a2/b2<<std::endl;
  
  if(c2>c){
    std::cout<<"c2 is greater than c"<<std::endl;
  }

   if(c2<c){
    std::cout<<"c is greater than c2"<<std::endl;
  }
  
  return 0;
}
