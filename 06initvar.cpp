// operating with variables
#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b(3);
  int c{2}; //Only on C++11
  int result;

  int foo = 0;
  //No funciona
  //auto bar = foo;
  //Tampoc funciona
  //decltype(foo) bar;

  a = a + b;
  result = a - c;
  cout << result;

  return 0;
}
