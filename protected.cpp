#include <iostream>
using namespace std;
class base
{
protected:   // It means that the value is private but it can be inherited by different class .
    int a;

private:
    int b;
};


/*
For a protected member
                                      public derivation         private  derivation          protected derivation
         1. Private members             not inherited               not inherited             not inherited 
         2. protected members           protected                   private                   protected 
         3. public members               public                     private                   protected
                                           
*/

 
class derived:protected base{
      
};

int main(){
   base c;
   derived d;
  // cout<<d.a;  will not work since a is protected in both class

}
                             