#include <iostream>
using namespace std;

//Per a compilar hem d especificar -std=c++11
int main() 
{

  int foo = 0;
  auto bar = foo; // the same as: int bar = foo;
  
  //Ho podem fer amb la funcio decltype
  int foo2 = 0;
  decltype(foo2) bar2;  // the same as: int bar2;

}
