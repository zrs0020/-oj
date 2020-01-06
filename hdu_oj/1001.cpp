
#include "iostream"



int main()

{
    using namespace std;
    int a,i,sum=0;
    while(cin>>a){
        for(i=0;i<=a;i++)
            sum+=i;
        cout<<sum<<endl<<endl;
        sum=0;
    }
    return 0;
}
