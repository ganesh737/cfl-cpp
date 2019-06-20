#include <iostream>

using namespace std;

template <class T>
class Arithmetic
{
   private:
      T a;
      T b;

   public:
      Arithmetic(T a, T b);
      T sum();
      T add(T c);
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
   this->a = a;
   this->b = b;
}

template <class T>
T Arithmetic<T>::add(T c)
{
   return (a+b+c);
}

template <class T>
T Arithmetic<T>::sum()
{
   return (a+b);
}

int main()
{
   Arithmetic<int> a(10, 5);
   Arithmetic<float> b(1.1, 5.1);

   cout << a.sum() << endl;
   cout << b.add(1.2) << endl;
}