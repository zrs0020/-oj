#include<iostream>
#include<set>
using namespace std;
int main()
{
    //set可以自动排序，并且去除重复元素
    set<int> a;//定义一个set
    set<int>::iterator it,find;//定义一个set迭代器
    int temp;
    while(cin>>temp){
        a.insert(temp);
    }
    cin.clear();
    cin.ignore();
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    find=a.find(8);
    cout<<*find<<endl;
    a.erase(a.begin());
    cout<<"删除set首元素"<<endl;
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    a.erase(100);
    //a.erase(a.find(100));
    cout<<"删除值为100的元素"<<endl;
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    a.erase(a.begin(),a.end());
    cout<<a.size()<<endl;

    cout<<"请输入点什么"<<endl;
    while(cin>>temp){
        a.insert(temp);
    }
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    a.clear();
    cout<<a.size()<<endl;
    return 0;
}
