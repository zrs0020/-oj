#include <iostream>
#include<string>
#include<stack>
using namespace std;
int convert(string p,string::iterator& it){
    int result=0,t=1;
    int temp;
    stack<int> stk;


    //为什么第三个数字就停不了呢？？一直往stack里面push
    for(;it!=p.end()&&*it!='.';it++){
        stk.push(int(*it)-48);
    }
    while(!stk.empty()){
        temp=stk.top();
        stk.pop();
        result+=temp*t;
        t=t*10;
    }
    return result;
}
int main()
{
    string p,a;
    cin>>p>>a;
    string::iterator it=p.begin();
    int pg=convert(p,it);
    int ps=convert(p,++it);
    int pk=convert(p,++it);
    it=a.begin();
    int ag=convert(a,it);
    int as=convert(a,++it);
    int ak=convert(a,++it);
    cout<<pg<<' '<<ps<<' '<<pk;



    return 0;
}
