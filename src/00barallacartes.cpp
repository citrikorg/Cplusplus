#include <iostream>
using namespace std;

class Carta
{
  int numero = 0;
  char pal = ' ';
  public:
    Carta(){};
    Carta(char num, int palo) : numero(num), pal(palo) {}
};

int main()
{
  int n = 1;
  char p = 'A';
  Carta(n,p);
}
