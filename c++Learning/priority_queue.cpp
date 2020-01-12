#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
    struct fruit{
        string name;
        int price;
        //也可以不使用friend，使用另一种操作符重载，并用struct包装
        friend bool operator < (fruit f1,fruit f2){
            return f1.price>f2.price;
        }
    }f1,f2,f3;


struct computer{
    string brand;
    int price;
}c1,c2,c3;
struct cmp{
    bool operator()(computer c1,computer c2){
        return c1.price<c2.price;
    }
};

int main()
{

    priority_queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    cout<<q.top()<<endl;
    q.pop();

    cout<<q.top()<<endl;


    //数字大的优先是less<int>，不过不需要专门写，默认就是这样
    //普通的优先级设置，默认是数字大的优先级高，改成数字小的优先级高
    priority_queue<int,vector<int>,greater<int>> a;
    for(int i=0;i<5;i++){
        a.push(i);
    }
    cout<<a.top()<<endl;





    priority_queue<fruit> sg;
    f1.name="桃子";
    f2.name="香蕉";
    f3.name="苹果";
    f1.price=5;
    f2.price=9;
    f3.price=6;
    sg.push(f1);
    sg.push(f2);
    sg.push(f3);
    cout<<sg.top().name<<' '<<sg.top().price<<endl;


    priority_queue<computer,vector<computer>,cmp> c;
    c1.brand="联想";
    c2.brand="Apple";
    c3.brand="戴尔";
    c1.price=2;
    c2.price=5;
    c3.price=3;
    c.push(c1);
    c.push(c2);
    c.push(c3);
    cout<<c.top().brand<<' '<<c.top().price<<endl;

    return 0;
}
