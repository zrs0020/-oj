#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k,count[5]={0};
    int a[5]={0};
    for(int i=0;i<n;i++){
        cin>>k;
        if(k%10==0){
            a[0]+=k;
            count[0]++;
        }
        if(k%5==1){
            if(count[1]%2==0)
              a[1]+=k;
            else
              a[1]-=k;
            count[1]++;
        }
        if(k%5==2){
            a[2]++;
            count[2]++;
        }
        if(k%5==3){
            a[3]+=k;
            count[3]++;
        }
        if(k%5==4){
            if(k>a[4])a[4]=k;
            count[4]++;
        }
    }
    for(int i=0;i<5;i++){


      if(count[i]==0&&i!=4)
      cout<<"N ";
      else if(count[i]==0&&i==4)
      cout<<"N";
      else{
        if(i==3){
            double x=a[3];
            double y=count[3];
            printf("%.1f",x/y);
            cout<<' ';
            //cout<<x/y<<' ';
        }
        else if(i==4)
            cout<<a[i];
        else
            cout<<a[i]<<' ';
      }
    }

    return 0;
}
