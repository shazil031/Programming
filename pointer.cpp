#include<iostream>
using namespace std;

int main() {
    
    //pointer to int is created, and pointing to some garbage address
    //int *p;
    
    //cout << *p << endl;

    int i = 5;
    //int *p = &i;

    int *p = 0;
    p = &i;
    



    return 0;
}