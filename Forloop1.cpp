#include<iostream>
using namespace std;

int main() {


    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    //cout << " printing count 1 to n" << endl;

    /* for( int i = 1; i <= n; i++) {
        cout << i << endl;
    } */

   /* int i = 1;
   for( ; ;) {
    if(i <= n) {
        cout << i << endl;
    }
    else {
        break;
    } 
    i++;
   } */


  /* for ( int a = 0, b = 1, c = 3; a>=0 && b>=1 && c>=3; a--,b--,c--){
    cout << a << " " << b << " " << c << endl;
  } */


 int sum = 0;
 for( int i=1; i<=n; i++){
    //sum = sum + i;
    sum += i;
 }
 cout << sum << endl;


    return 0;
}