#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

//结构体的cmp函数定义
struct node{
    int x,y;
}ssd[10];
bool cmp1(node a,node b){
    if(a.x!=b.x)return a.x>b.x;
    else return a.y>b.y;
}
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    vector<int> a={0,1,3,2,7,5,5};
    vector<int>::iterator it;
    cout<<"a中元素：";
    for(auto c:a)
        cout<<c<<' ';
    cout<<endl;
    cout<<"sort排序后：";
    sort(a.begin(),a.end());
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    cout<<"sort排序后(从小到大)：";
    sort(a.begin(),a.end(),cmp);
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;

    reverse(a.begin()+1,a.end());
    cout<<"将a中的第二个元素到最后一个元素反转：";
    for(auto c:a)
        cout<<c<<' ';
    cout<<endl;
    cout<<"a中前四个元素的全排列："<<endl;
    do{
        cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<' '<<a[3]<<endl;
    }while(next_permutation(it=a.begin(),it+4));


    //好像只有在本来就是顺序的情况下，next_permutation才能把全排列都输出
    int q[]={2,1,3};
    do{
        cout<<q[0]<<' '<<q[1]<<' '<<q[2]<<endl;
    }while(next_permutation(q,q+3));

    /*int t[5];
    memset(t,1,sizeof(t));
    for(auto c:t)
        cout<<c<<' ';*/
    //memset要使用string.h头文件，而且只能赋值0和-1，不过速度快一点

    cout<<"fill函数示例"<<endl;
    vector<int> k;
    for(int i=0;i<5;i++)
        k.push_back(i);
    fill(k.begin(),k.begin()+3,233);
    for(auto c:k)
        cout<<c<<' ';
    cout<<endl;
    ssd[0].x=1;
    ssd[0].y=1;
    ssd[1].x=2;
    ssd[1].y=0;
    ssd[2].x=0;
    ssd[2].y=2;
    sort(ssd,ssd+3,cmp1);
    for(int i=0;i<3;i++){
        cout<<ssd[i].x<<' '<<ssd[i].y<<endl;
    }
    cout<<endl;
    return 0;
}
