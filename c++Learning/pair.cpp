#include<iostream>
#include<utility>
#include<map>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    pair<string,int>p("hh",1);
    pair<string,int>q;
    q.first="haha";
    q.second=10;
    if(p<q)mp.insert(p);
    else mp.insert(q);
    for(it=mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<' '<<it->second<<endl;
    }


    return 0;
}
