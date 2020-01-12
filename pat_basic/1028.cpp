#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
struct person{
    string name;
    string date;
}temp,oldest,youngest;
int main()
{
    youngest.date="1814/09/06";
    oldest.date="2014/09/06";
    int n,num=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp.name>>temp.date;
        if(temp.date<="2014/09/06"&&temp.date>="1814/09/06"){
            num++;
            if(temp.date>youngest.date){
                youngest=temp;
            }
            else if(temp.date<oldest.date)
                oldest=temp;
        }
    }
    if(num==0)cout<<'0';
    else
        cout<<num<<' '<<oldest.name<<' '<<youngest.name;
    return 0;
}
