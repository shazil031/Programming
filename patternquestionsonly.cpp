#include<iostream>
using namespace std;

int main() {


   /* int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;
        while(j <= i){
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }*/

   /*int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;
        while(j <= i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }*/


   /*int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while(i <= n) {

        int j = 1;
        while(j <= i){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }*/


   /* int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;
        int value = i; 
        while(j <= i){
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    } */

   /* int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;
        while(j <= i){
            cout << (i-j+1) << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

   /* int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;
        while(j <= n){
            char ch = 'A'+i-1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    } */

   /* int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;
        while(j <= n){
            char ch = 'A'+j-1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    } */

    /* int n;
    cin >> n;

    int i = 1;
    char start = 'A';
    while(i <= n) {

        int j = 1;
        while(j <= n){
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    } */

    /* int n;
    cin >> n;

    int i = 1;
    
    while(i <= n) {

        int j = 1;
        while(j <= n){
            char start = 'A'+i+j-2;
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    } */

    /* int n;
    cin >> n;

    int i = 1;
    
    while(i <= n) {

        int j = 1;
        while(j <= i){
            char start = 'A'+i-1;
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    } */


   int n;
    cin >> n;

    int i = 1;
    
    while(i <= n) {

        int space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }
        
        int j=1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}