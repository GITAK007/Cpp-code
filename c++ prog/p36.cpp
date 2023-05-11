/* Use of Constructor in Inheritance
  -> First, all Constructors of Base Class is print 
  -> Constructors are print as Order of Execution
  -> Then, the values of class 
*/
#include <iostream>
using namespace std;

class Base1{
    int data1;
    public:
            Base1(int i){
            data1 = i;
            cout << "Base1 class Constructor called" << endl;
         }

           void printDataBase1(void){
           cout << "The value of data is : " << data1<< endl;
     }
};

class Base2{
      int data2;
      public:
            Base2(int i){
            data2 = i;
            cout << "Base2 class Constructor called" << endl;
         }

           void printDataBase2(void){
           cout << "The value of data2 is : " << data2<< endl;

    }
 };
    
class Derived : public Base1, public Base2{
    int derived1;
    public:
    Derived(int a,int b,int c) : Base1(a), Base2(b){
        derived1 = c;
        cout << "Derived class Constructor called" << endl;
      }

      void printDataDerived(void){
      cout << "The value of Derived class is : " << derived1 << endl;
  }
};

int main() {
 Derived Ak(3,4,5);
Ak.printDataBase1();
Ak.printDataBase2();
Ak.printDataDerived();

return 0;
}