#include<iostream>
using namespace std;
int main()
{
    int c1,c2,s;
    cin>>c1>>c2;
    s=c2-c1;
    if(s%100>=50)
        s=s/100+1;
    else
        s=s/100;
    if(s/3600<10)
      cout<<"0";
      cout<<s/3600<<":";
    if(s%3600/60<10)
      cout<<"0";
      cout<<s%3600/60<<":";
    if(s%60<10)
    cout<<"0";
    cout<<s%60;
    return 0;
}
