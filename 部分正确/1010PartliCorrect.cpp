#include<iostream>
using namespace std;
int main()
{
    int xs[1000];//系数
    int zs[1000];//指数
    int k=0,c=0;
    while(cin>>xs[k]>>zs[k]){
        k++;
    }
    for(int i=0;i<k;i++){

        if(i!=k-1){
            if(zs[i]!=0){
                xs[i]=xs[i]*zs[i];
                zs[i]--;
                cout<<xs[i]<<' '<<zs[i]<<' ';
                c++;
            }
        }
        else{
            if(zs[i]!=0){
                xs[i]=xs[i]*zs[i];
                zs[i]--;
                cout<<xs[i]<<' '<<zs[i];
                c++;
             }
        }
    }
    if(c==0)cout<<"0 0";
    return 0;
}
