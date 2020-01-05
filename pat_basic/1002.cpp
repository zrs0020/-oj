#include<iostream>

#include<string>

#include<stack>

using namespace std;
int main(void){
    //输入字符1时，转化为int变成了49
    /*char x;
    cin>>x;
    cout<<int(x)<<endl;*/

	string str;

	cin>>str;
	int sum=0;
	int size=str.size();
	if(!str.empty()){
        for(int i=0;i<str.size();i++)
            sum+=(int(str[i])-48);
	}
	//cout<<sum<<endl;

	stack<int> s;
	while(sum){
        s.push(sum%10);
        sum/=10;
	}
	while(!s.empty()){
            //如果这里写int n=s.pop();，就会报错，返回的是void类型，不能给int赋值
        int n=s.top();
        s.pop();
        switch(n){
            case 0:
                cout<<"ling";
                break;
            case 1:
                cout<<"yi";
                break;
            case 2:
                cout<<"er";
                break;
            case 3:
                cout<<"san";
                break;
            case 4:
				cout<<"si";
				break;
			case 5:
				cout<<"wu";
				break;
			case 6:
				cout<<"liu";
				break;
			case 7:
				cout<<"qi";
				break;
			case 8:
				cout<<"ba";
				break;
			case 9:
				cout<<"jiu";
				break;
			default:
				break;
		}
		if(!s.empty())
            cout<<" ";
        }
	}


/*
	int count = 0;

	for(int i=0; i<str.length(); i++){

		count += int(str[i] - '0');

	}



	stack<int> stk;

	while(count){

		stk.push(count%10);

		count = int(count/10);

	}



	while(!stk.empty()){

		int n = stk.top();

		switch(n){

			case 0:

				cout<<"ling";

				break;

			case 1:

				cout<<"yi";

				break;

			case 2:

				cout<<"er";

				break;

			case 3:

				cout<<"san";

				break;

			case 4:

				cout<<"si";

				break;

			case 5:

				cout<<"wu";

				break;

			case 6:

				cout<<"liu";

				break;

			case 7:

				cout<<"qi";

				break;

			case 8:

				cout<<"ba";

				break;

			case 9:

				cout<<"jiu";

				break;

			default:

				break;

		}



		stk.pop();

		if(!stk.empty()){

			cout<<" ";

		}

	}

	cout<<endl;

}*/
