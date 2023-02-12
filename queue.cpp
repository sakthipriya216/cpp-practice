using namespace std;
#include <queue>
#include <iostream>
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    cout<<"Displaying the front and rear elements\n";
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    // front() displayes the element at the front 
    // back() displayes the element at the rear end
    
    cout<<"Displaying the elements in the queue\n";
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
