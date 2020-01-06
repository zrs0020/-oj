#include <iostream>
using namespace std;
int main()
{
    char bcj[3]={'B','C','J'};
    int n;
    char j,y;
    int a=0,b=0;
    int ka=0,kb=0;
    //results数组里存甲赢，平，输
    int results[3]={0};
    int jia[3]={0};
    int yi[3]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>j>>y;
        if(j=='B'&&y=='C'){
            results[0]++;
            jia[0]++;
        }
        else if(j=='C'&&y=='J'){
            results[0]++;
            jia[1]++;
        }
        else if(j=='J'&&y=='B'){
            results[0]++;
            jia[2]++;
        }
        else if(j=='C'&&y=='B'){
            results[2]++;
            yi[0]++;
        }
        else if(j=='J'&&y=='C'){
            results[2]++;
            yi[1]++;
        }
        else if(j=='B'&&y=='J'){
            results[2]++;
            yi[2]++;
        }
        else{
            results[1]++;
        }
    }
    for(int i=0;i<3;i++){
        cout<<results[i];
        if(i!=2)cout<<' ';
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<results[2-i];
        if(i!=2)cout<<' ';
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        if(jia[i]>a){
            a=jia[i];
            ka=i;
        }
        if(yi[i]>b){
            b=jia[i];
            kb=i;
        }
    }
    cout<<bcj[ka]<<' '<<bcj[kb];
    return 0;
}
