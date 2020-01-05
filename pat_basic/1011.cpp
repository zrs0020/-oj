#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int results[n];
    long long a,b,c;
    //注意所给整数范围，int已经表示不了了
    //int a,b,c;
    for(int i=0;i<n;i++){    //while(n--){更加简洁

             cin>>a>>b>>c;
        if(a+b>c)
            results[i]=0;
        else
            results[i]=1;
    }
    for(int i=0;i<n;i++){
        if(results[i]==0)
            cout<<"Case #"<<i+1<<": true"<<endl;
        else
            cout<<"Case #"<<i+1<<": false"<<endl;
    }
    return 0;
}
