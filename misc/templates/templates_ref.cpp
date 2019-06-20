#include <iostream>

using namespace std;

class Arithmetic
{
   private:
      int a;
      int b;

   public:
      Arithmetic(int a, int b);
      int sum();
      int add(int c);
};

Arithmetic::Arithmetic(int a, int b)
{
   this->a = a;
   this->b = b;
}

int Arithmetic::add(int c)
{
   return (a+b+c);
}

int Arithmetic::sum()
{
   return (a+b);
}