#include <iostream>

using namespace std;

class Animal
{
   private:
      string name;

   public:
      Animal()
      {
         cout << "Ctor" << endl;
      }
      Animal(const Animal& animal):name(animal.name)
      {
         // cannot call non const methods of Animal
         // can access private fields within constructors
         cout << "Animal created with copy ctor" << endl;
      }
      ~Animal()
      {
         cout << "destructor called" << endl;
      }
      void setName(string name)
      {
         this->name = name;
      }
      void speak() const
      {
         cout << "My name is " << name << endl;
      }
};

int main()
{
   Animal *pCat1 = new Animal();
   pCat1->setName("Freddy");
   pCat1->speak();
   delete pCat1;

   cout << sizeof(pCat1) << endl;

   return 0;
}