using namespace std;
#include<stack>
#include<iostream>
int main()
{
    stack<string> s1,s2;
    s1.push("abc");
    s1.push("hi");
    s1.push("the");
    
    s2.push("in");
    s2.push("go");
    s1.swap(s2);
    
    cout<<"Printing the elements in s1 stack:\n";
    while(s1.empty()!=1)
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
  
    cout<<"\n";
    cout<<"Printing the elements in s2 stack:\n";
    while(s2.empty()!=1)
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }
}
