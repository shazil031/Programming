#include<iostream>
#include<vector>

using namespace std;
int main() {

    vector<int> v;

    vector<int> a(5, 1); //5 ints with value 1

    vector<int> last(a); //copy of a

     cout << "print last" << endl;
    for(int i:a) {
        cout << i << " ";
    }cout << endl;

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    
    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "Element at 2nd Index-> " << v.at(2) << endl;

    cout << "First Element-> " << v.front() << endl;
    cout << "Last Element-> " << v.back() << endl;

    cout << "before pop" << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for(int i:v) {
        cout << i << " ";
    }

    cout << "before clear size" <<v.size() << endl;
    v.clear();
    cout << "after clear size" <<v.size() << endl;
}