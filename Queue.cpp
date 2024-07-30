#include<iostream>
#include<queue>

using namespace std;
int main() {

    queue<string> q;
    
    q.push("love");
    q.push("babbar");
    q.push("kumar");
    
    cout << "Size before pop " << q.size() << endl;
    cout << "Frist element: " << q.front() << endl;
    q.pop();
    
    cout << "Frist element: " << q.front() << endl;
    cout << "Size after pop " << q.size() << endl;

    return 0;

}