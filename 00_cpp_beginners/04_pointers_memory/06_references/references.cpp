#include <iostream>

using namespace std;

void addTen(int& val)
{
   val += 10;
}

int main()
{
   int val1 = 10;
   int& val2 = val1;

   val2 = 20;
   cout << val1 << endl;

   addTen(val1);
   cout << val1 << endl;

   addTen(val2);
   cout << val1 << endl;

   return 0;
}