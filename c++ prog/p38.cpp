// 1) we can use pointer to print the values this type
/*
#include<iostream>
using namespace std;

int main(){

    int p1 = 30;
    int* ptr = &p1;
    float *p = new float(40.78);
    cout << "The value at address p1 is " << *(ptr) << endl;
    cout << "The value at address p is " << *(p) << endl;
    
return 0;
}

*/

// 2) we can use array and also use delete 
// /*
#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];
    arr[0] = 3;
    arr[1] = 4;
    arr[2] = 6;
    arr[3] = 8;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
   
return 0;
}
// */