#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int temp;
    while(cin>>temp){
        a.push_back(temp);
    }
    vector<int>::iterator it,mid;//
    for(it= a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    mid=a.begin()+a.size()/2;
    cout<<*mid<<endl;
    cout<<a.size()<<endl;
    cout<<""<<endl;
    a.insert(it,-2);
    for(it= a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    cout<<"删除任意迭代器处元素"<<endl;
    a.erase(a.begin());
    for(it= a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    cout<<"删除区间内元素"<<endl;
    a.erase(a.begin(),a.begin()+3);
    for(it= a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    cout<<"清空所有元素后的vector.size()"<<endl;
    a.clear();
    cout<<a.size()<<endl;
    return 0;
}
