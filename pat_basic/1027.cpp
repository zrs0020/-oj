#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    int sum,rem,k=0;
    while(1+4*k+2*k*k<=n)
        k++;
    k--;
    for(int i=0;i<k;i++){
        for(int j=0;j<i;j++){
            cout<<' ';
        }
        for(int j=0;j<2*k+1-2*i;j++){
            cout<<c;
        }
        cout<<endl;
    }
    for(int i=0;i<k;i++)
        cout<<' ';
    cout<<c<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<k-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i+3;j++){
            cout<<c;
        }
        cout<<endl;
    }
    cout<<n-1-4*k-2*k*k;

    return 0;
}
