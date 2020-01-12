#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    for(int i=0;i<5;i++){
        s.push(i);
    }
    cout<<"size:"<<s.size()<<endl;
    cout<<"top:"<<s.top()<<endl;
    s.pop();
    cout<<"top after pop:"<<s.top()<<endl;
    cout<<"empty:"<<s.empty()<<endl;

    return 0;
}
