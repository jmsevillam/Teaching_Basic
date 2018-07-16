#include<iostream>

int main(){
  double a=2.;
  double b=3.;
  double c=4.;
  double d;
  d=(a+b*c)*2*(c+1)/20;
  std::cout<<d<<std::endl;
  int e=d/2;
  std::cout<<e<<std::endl;
  
  return 0;
}
