#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    char Da,Db;
    int fa=0,fb=0,tempa=0,tempb=0;
    cin>>a>>Da>>b>>Db;
    int sizea=a.size();
    int sizeb=b.size();
    for(int i=0;i<sizea;i++){
        if(a[i]==Da)
            fa++;
    }
    for(int i=0;i<sizeb;i++){
        if(b[i]==Db)
            fb++;
    }
    int xa=int(Da-'0');
    int xb=int(Db-'0');
    //cout<<fa<<' '<<fb<<' '<<int(Da-'0')<<endl;
    while(fa--){
        tempa+=xa;
        xa=xa*10;
    }
    while(fb--){
        tempb+=xb;
        xb=xb*10;
    }
    cout<<tempa+tempb<<endl;

    return 0;
}
