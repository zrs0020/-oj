#include <iostream>

using namespace std;

int main()
{
    int n,row;
    cin>>n;
    char x;
    cin>>x;
    if(n%2==1)row=(n+1)/2;
    else row=n/2;
    for(int j=0;j<n;j++)
        cout<<x;
    cout<<endl;
    for(int i=0;i<row-2;i++){
        cout<<x;
        for(int j=0;j<n-2;j++)
            cout<<' ';
        cout<<x<<endl;
    }
    for(int j=0;j<n;j++)
        cout<<x;
    return 0;
}
