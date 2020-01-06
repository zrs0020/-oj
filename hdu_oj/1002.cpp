#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    string a,b;
    int num,sum[1000];//数组尽量开大点，不然很容易越界！
    cin>>num;
    for(int l=0;l<num;l++)
    {
        cin>>a>>b;
        int m=0,n=0,temp=0,i,k;
        int q=0;//用于记录sum数组的长度！！
        i=a.length();
        k=b.length();
        i=i-1;
        k=k-1;
        while(i>=0 && k>=0)//像是这样加，会一直加到一个数加完
        {
            m=a[i]-'0';
            n=b[k]-'0';
            sum[q++]=(temp+m+n)%10;
            temp=(temp+m+n)/10;//temp取进位，并且加到下一次的加法中
            i--;
            k--;
        }
        //还需要处理一个长度的问题，判断哪个长，哪个短！
      if(i>k)//a数比较大，确切的说是比较长！
      {//cout<<"I am 1"<<endl;
          while(i>=0)
          {

             m=a[i]-'0';
             sum[q++]=(temp+m)%10;
             temp=(temp+m)/10;

             i--;
          }
      }
      if(k>i)
      {
         while(k>=0)
          {
             m=b[k]-'0';
             sum[q++]=(temp+m)%10;
             temp=(temp+m)/10;
             k--;
          }
      }
      sum[q]=temp;
      cout<<"Case "<<l+1<<":"<<endl;
     cout<<a<<" + "<<b<<" = ";
      if(sum[q]!=0) cout<<sum[q];
          for(--q;q>=0;q--)
          cout<<sum[q];
     cout<<endl;
     if(l<num-1) cout<<endl;

    }
 return 0;
}
