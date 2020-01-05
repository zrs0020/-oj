#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    int n;
    int jia=0,yi=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d;
        if(a+c==b&&a+c!=d)
            yi++;
        else if(a+c!=b&&a+c==d)
            jia++;
    }
    cout<<jia<<' '<<yi;
    return 0;
}
