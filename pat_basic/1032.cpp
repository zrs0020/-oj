#include<iostream>
using namespace std;
int main()
{
    int max=100000;
    int school[max]={0};
    int N;
    cin>>N;
    int ID,score;
    int theHighestScore=0;
    int theHighestScoreSchool=0;
    for(int i=0;i<N;i++)
    {
        cin>>ID>>score;
        school[ID]+=score;
        if(school[ID]>theHighestScore){
            theHighestScore=school[ID];
            theHighestScoreSchool=ID;
        }
    }
    cout<<theHighestScoreSchool<<' '<<theHighestScore;
    return 0;
}
