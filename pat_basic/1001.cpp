#include <iostream>

using namespace std;

int main()
{
    int a,b=0;
    cin>>a;

    while(a!=1){
        if(a%2==0)a=a/2;
        else a=(a*3+1)/2;
        b++;
    }
    cout<<b;
    return 0;
}
