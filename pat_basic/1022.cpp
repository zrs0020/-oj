#include <iostream>
#include<stack>
using namespace std;
int main()
{
    int a,b,d;
    cin>>a>>b>>d;
    int sum=a+b;
    stack<int> result;
    while(sum/d){
        result.push(sum%d);
        sum=sum/d;
    }
    result.push(sum);
    while(!result.empty()){
        int temp=result.top();
        result.pop();
        cout<<temp;
    }
    return 0;
}
