#include<iostream>
using namespace std;

int main() {

    int num = 5;

    cout << num << endl;

    // address of operator - &

    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "value is : " << *ptr << endl;
    cout << "Address is : " << ptr << endl;

    double d = 3.14;
    double *p2 = &d;

    cout << "value is : " << *p2 << endl;
    cout << "Address is : " << p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;


    return 0;
}