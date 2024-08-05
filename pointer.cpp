#include<iostream>
using namespace std;

int main() {
    
    //pointer to int is created, and pointing to some garbage address
    //int *p;
    
    //cout << *p << endl;

    /*int i = 5;
    
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;


    int *p = &num;
    cout << "before " << *p << endl;
    (*p)++;
    cout << "after " << *p << endl;

    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;



    return 0;
}