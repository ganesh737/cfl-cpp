#include <iostream>

using namespace std;

class Animal
{
public:
   void setName(string name)
   {
      this->name = name;
   }
   void speak () const
   {
      cout << "My name is " << this->name << endl;
   }
private:
   string name;
};

int main()
{
   const double PI = 3.1416;
   cout << PI << endl;

   Animal freddy;
   freddy.setName("freddy");
   freddy.speak();

   int val = 10;
   const int* pVal = &val;
   // below line is not possible since &val is not expected to be changed
   // *pVal = 20;
   val = 20;
   cout << val << endl;

   int val1 = 10;
   int* const pVal1 = &val1;
   // below line is not possible since pVal1 can only point val1
   // pVal1 = &val;
   *pVal1 = 30;
   cout << val1 << endl;

   int val2 = 10;
   const int* const pVal2 = &val2;
   // error: assignment of read-only variable ‘pVal2’
   // pVal2 = &val;
   // error: assignment of read-only location ‘*(const int*)pVal2’
   // *pVal2 = 30;
   cout << val2 << endl;

   return 0;
}