#include<iostream>
#include<map>
#include<set>
#include<string>

using namespace std;
int main()
{
    //map类似于set，也会自动排序，
   map<string,int>m={{"a",1}};//c++11可以这样写，之前的版本不支持
   map<string,int>::iterator it;
   set<string> exclude;//={"hello","ok"};//利用set，不统计一些简单词汇
   exclude.insert("ok");
   exclude.insert("hello");
   string word;
   while(cin>>word){
    if(exclude.find(word)==exclude.end())
    m[word]++;
   }
   for(it=m.begin();it!=m.end();it++){
    cout<<it->first<<"出现了"<<it->second<<"次"<<endl;
}
    return 0;
}
