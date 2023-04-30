#include <iostream>
using namespace std;

// REUSABILITY IS VERY IMP. FEATURE OF C++ (SUPPORTED BY INHERITANCE)
// IN C++ WE CAN USE A CLASS AND ADD FEATURES TO IT
// WE CAN USE THE PROPERTIES OF CLASS BY INHERITING THEM
// THE EXISTING CLASS IS BASE CLASS
// THE NEW CLASS WHICH IS INHERITED IS DERIVED CLASS

// SINGLE INHERITANCE - A DERIVED CLASS WITH ONLY ONE BASE CLASS
// MULTIPLE - A DERIVED CLASS WITH MORE THAN ONE BASE CLASS
// HEIRARCHICAL - MANY DERIVED CLASS FORM ONE BASE CLASS
// MULTI LEVEL - A DERIVING CLASS FROM ALREADY A DERIVED CLASS
// HYBRID - IT IS A COMBINATION OF MULTIPLE AND MULTI LEVEL INHERITANCE
          // A CLASS IS DERIVDE FROM TWO CLASSES AS IN MULTIPLE
          
          // HOWEVER, ONE OF THE PARENT CLASS IS NOT A BASE CLASS

// base class
class employee
{ 
public:
    int id;
    float salary;
    employee(int a)
    {
        id = a;
        salary = 69.0;
    }
    employee(){}

};

// derived class syntax
/*
 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}

note :- 1. DEFAULT VISIBILTY MODE IS PRIVATE
2.  PUBLIC VISIBILITY MODE - PUBLIC MEMBERS OF THE BASE CLASS BECOMES PUBLIC MEMBERS OF THE DERIVED CLASS
3.  PRIVATE VISIBILITY MODE - PUBLIC MEMBERS OF THE BASE CLASS BECOMES PRIVATE MEMBERS OF THE DERIVED CLASS
4.  PRIVATE MEMBERS ARE NEVER INHERITED 
*/

class programmer : employee {
 public:
    programmer(int n){
        id=n;
    }    
    void getdata(){
        cout<<id<<endl;
    }

};


int main(){
    employee s(12);
    cout<<s.id<<endl;
    programmer z(35);
    z.getdata();
    // z.salary;   yeh error isliye dega kyuki apn ne private visibilty mode me rkha h isko 

    return 0;

}

// jab derived class ko banate  h toh automatically base class ka default constructor call ho jata h isliye agr usme default nhi h toh banana chahiye