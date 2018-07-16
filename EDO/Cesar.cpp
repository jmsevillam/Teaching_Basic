#include<iostream>
#include<cmath>
int main (){
  double t=0, x=0, dt=0.01;
  for (int i=0; i<1000; i++)
    {x=x+dt*cos(t)*cos(t);
      t=t+dt;
      std::cout<<t<<" "<<x<<std::endl;}
  return 0;}
