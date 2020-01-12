// string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include<string>
using namespace std;
int main()
{
	string::iterator it;
	string a;
	cin >> a;
	for (it=a.begin();it!=a.end();it++)
		cout << *it << endl;//对字符串逐字符分析
	cin >> a;
	for (it=a.begin();it!=a.end();it++)
		*it = toupper(*it);//变成大写，注意要用引用
	cout << a << endl;

	while (cin >> a)
		cout << a.size() << endl;
	cin.clear();     //在while(cin>>a)后如果要继续执行，需要使用cin.clear();

	if (!a.empty())//在使用下标对字符串操作时，一定要先判断是否为空
	{
		cout << a << endl;
		a[0] = toupper(a[0]);//使用下标对字符串操作时，返回的是引用
		cout << a << endl;
	}

	string s;
	cout<<"输入一个字符串，可以带着空格"<<endl;
	getline(cin, s);
	//cin >> s;//cin输入的字符串不能有空格，所以使用getline
	for (it=s.begin();it!=s.end()&&*it!=' ';it++){
		*it=toupper(*it);
	}
		//这句话是使字符串空格前的字母都变成大写
	//可是为什么不变成大写呢？？？
	cout << s << endl;


	cout << "end" << endl;
	return 0;
}
