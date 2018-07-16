#include<iostream>
#include<cmath>


int main(){
  double Dx=0.1;
  double x=0.;
  double y=1.;
  for(int i=0;i<100;i++){
    y=y+Dx*cos(x);
    x=x+Dx;
    std::cout<<x<<' '<<y<<std::endl;
  }
  return 0;
}
