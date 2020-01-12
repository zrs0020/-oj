#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    cout<<q.front()<<' '<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;

    //queue stack都没有迭代器
    /*for(auto a=q.begin();a!=q.end();a++){
        cout<<*a<<' ';
    }
    cout<<endl;*/

    queue<int> p;
    //在使用front(),pop()之前一定要先使用empty()进行判空
    cout<<p.front()<<endl;
    return 0;
}
