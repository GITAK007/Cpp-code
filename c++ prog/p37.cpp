#include <iostream>
using namespace std;

class Test{
    int a, b;

    public:
        //   Test(int i, int j) : a(i), b(j)
        //   Test(int i, int j) : a(i), b(a*j+1)
             Test(int i, int j) : a(i), b(j-i)
        {

            cout << " Constructor is called : "<< endl;
            cout << " Value of a is : " << a <<endl;
            cout << " Value of b is : " << b <<endl;
          }

};

int main() {
Test t(2,6);

return 0;
}