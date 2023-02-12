using namespace std;
#include <stack>
#include <iostream>
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    // s.empty returns 1 if s is empty else it returns 0
}
