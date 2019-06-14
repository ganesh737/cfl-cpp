#include <iostream>

using namespace std;

int main()
{
   char text[] = "hello";
   char text1[] = {'h', 'e', 'l', 'l', 'o', '\0'};

   cout << text << endl;
   cout << text1 << endl;

   for (size_t i = 0; i < sizeof(text); i++)
   {
      cout << i << ":" << text[i] << endl;
   }


   return 0;
}