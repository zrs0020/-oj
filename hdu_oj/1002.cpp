#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    string a,b;
    int num,sum[1000];//���龡������㣬��Ȼ������Խ�磡
    cin>>num;
    for(int l=0;l<num;l++)
    {
        cin>>a>>b;
        int m=0,n=0,temp=0,i,k;
        int q=0;//���ڼ�¼sum����ĳ��ȣ���
        i=a.length();
        k=b.length();
        i=i-1;
        k=k-1;
        while(i>=0 && k>=0)//���������ӣ���һֱ�ӵ�һ��������
        {
            m=a[i]-'0';
            n=b[k]-'0';
            sum[q++]=(temp+m+n)%10;
            temp=(temp+m+n)/10;//tempȡ��λ�����Ҽӵ���һ�εļӷ���
            i--;
            k--;
        }
        //����Ҫ����һ�����ȵ����⣬�ж��ĸ������ĸ��̣�
      if(i>k)//a���Ƚϴ�ȷ�е�˵�ǱȽϳ���
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
