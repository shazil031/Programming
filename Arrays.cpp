#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << " printing the array " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<< " printing Done " << endl;
}

int main() {
    
    int second[3] = {2,4,8};
    
    //printArray(second, 3);
        
    int third[15] = {4,5};
    
    int n = 15;
    //printArray(third, 15);

    int fourth[10] = {0};

    n = 10;
    //printArray(fourth, 10);
    
    int fifth[10] = {1};
    
    n = 10;
    //printArray(fifth, 10);

    char ch[5] = {'a', 'c', 'e', 'd', 'p'};
    cout << ch[4] << endl;

    cout << " printing the array " << endl;
    //printing the array
    for(int i=0; i<8; i++){
        cout << ch[i] << " ";
    }
    cout << " printing the array " << endl;

    return 0;
}