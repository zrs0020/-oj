#include <iostream>
#include<map>
#include<string>
#include<unordered_map>
using namespace std;
struct student{
    string id;//准考证号
    int seat;//考试座位
};
int main()
{
    unordered_map<int,student> s;
    int n;
    cin>>n;
    int test;//试机座位
    string temp_id;
    int temp_seat,temp_test;
    for(int i=0;i<n;i++){
        cin>>temp_id>>temp_test>>temp_seat;
        s[temp_test].id=temp_id;
        s[temp_test].seat=temp_seat;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp_test;
        cout<<s[temp_test].id<<' '<<s[temp_test].seat<<endl;
    }
    return 0;
}
