#include <iostream>
#include<string>
using namespace std;
struct student{
    string name;
    string id;
    int score;
}temp,smax,smin;
int main()
{
    int n;
    cin>>n;
    smax.score=-1;
    smin.score=101;
    for(int i=0;i<n;i++){
        cin>>temp.name>>temp.id>>temp.score;
        if(temp.score>smax.score){
            smax=temp;
        }
        if(temp.score<smin.score){
            smin=temp;
        }
    }
    cout<<smax.name<<' '<<smax.id<<endl;
    cout<<smin.name<<' '<<smin.id;
    return 0;
}
