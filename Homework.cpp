#include<iostream>
using namespace std;

/* void update(int a) {
    a = a / 2;
} */

/*int update(int a) {
    a -= 5;
    return a;

} */

int update(int a) {
    int ans = a * a;
    return ans;

}

int main() {


    /* for(int i = 0; i <= 5; i++) {
        cout << i << " ";
        i++;
    } */


    /* for(int i = 0; i <= 5; i--) {
        cout << i << " ";
        i++;
    } */


    /* for(int i = 0; i <= 15; i += 2) {
        cout << i << " ";

        if( i&1 ) {
            continue;

        }

        i++;
    } */
    

    /* for(int i = 0; i < 5; i++) {
        for(int j=1;j<=5;j++) {
            cout << i << " " << j << endl;
        }
    } */

    
    /* for(int i = 0; i < 5; i++) {
        for(int j=1;j<=5;j++) {
            if(i+j == 10){
                break;
            }
            cout << i << " " << j << endl;
        }
    } */


    /*int a = 10;
    update(a);
    cout << a << endl; */

    /* int a = 15;
    update(a);
    cout << a << endl; */

    int a = 14;
    update(a);
    cout << a << endl;


    return 0;

}