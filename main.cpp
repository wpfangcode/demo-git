#include <iostream>
using namespace std;
//1121119_2 
//#define __DEBUG

int main()
{
 
  int x=5;
       
  #ifdef __DEBUG
      cerr<<"x: "<<x<<endl;
      asm("int $3");  
  #endif
  #ifdef __ADD
       asm("add $1,%1" : "=r"(x) :"r"(x));
  #endif
   x+=6;
   cout<<x<<endl;S
    return 1;
}
