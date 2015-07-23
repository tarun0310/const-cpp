#include<iostream>
int g =11;
//extern const int c4;
//extern const int c5;
int my_f(int c){
  int res = c*g;
  g = g*2;
  return res;
}

const int c1 = 1;
const int c2 = my_f(2);
const int c3 = my_f(3);
//extern const int c4;
extern int c4;


int main(){
std::cout<<"c1="<<c1<<"\n";
std::cout<<"c2="<<c2<<"\n";
std::cout<<"c3="<<c3<<"\n";
std::cout<<"c4="<<c4<<"\n";
return 0;
}
