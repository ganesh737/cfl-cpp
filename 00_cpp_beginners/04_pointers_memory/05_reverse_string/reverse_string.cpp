#include <iostream>

using namespace std;

int main()
{
   char text[] = "Hello";
   char* pStart = text;
   // -2 because of below reasons -
   // 1. sizeof gives size so -1 to start from 0
   // 2. arr size - 1 refers to '\0'
   char* pEnd = text + sizeof(text) - 2;

   while (pStart < pEnd)
   {
      char save = *pStart;
      *pStart = *pEnd;
      *pEnd = save;

      pStart++;
      pEnd--;
   }

   cout << text << endl;

   return 0;
}