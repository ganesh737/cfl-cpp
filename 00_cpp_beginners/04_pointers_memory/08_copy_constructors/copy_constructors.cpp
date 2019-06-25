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
   Animal ani1;
   ani1.setName("Freddy");

   Animal ani2 = ani1;
   ani2.speak();
   ani2.setName("Bob");

   ani1.speak();
   ani2.speak();

   Animal ani3(ani1);
   ani3.speak();

   return 0;
}