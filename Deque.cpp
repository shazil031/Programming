#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    
    for(auto i : d) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}