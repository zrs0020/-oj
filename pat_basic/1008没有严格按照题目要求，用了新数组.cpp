#include<iostream>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[(i+v)%n]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i];
        if(i!=n-1)
            cout<<' ';
    }
    return 0;
}
