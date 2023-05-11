// --> Get and Set data in different types 

#include <iostream>
using namespace std;

class complex{ 
    int real, imaginary;
    public:
          void getData(){
            cout <<"The value of real : " << real << endl;
            cout <<"The value of imaginary : " << imaginary <<"i" << endl;
          }

          void setData(int a, int b){
                real = a;
                imaginary = b;
         }
};

int main() {

// complex c ; //--> invoking the class using variable
// c.setData(2,4);
// c.getData();

// complex *ptr = &c;  //---> invoking the class using pointer
// (*ptr).setData(2,6);
// (*ptr).getData();

// complex *ptr = new complex; //----> invoking the class using New operator
// (*ptr).setData(2,6);
// (*ptr).getData();

//  complex *ptr = &c ; // this will not work;
//  ptr->setData(3,5);
//  ptr->getData();

complex *ptr = new complex[5]; //----> invoking the class using New operator
ptr->setData(3,5);
ptr->getData();


return 0;
}