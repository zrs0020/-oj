// string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	/*string a;
	cin >> a;
	for (auto c : a)
		cout << c << endl;//对字符串逐字符分析
	cin >> a;
	for (auto &c : a)
		c = toupper(c);//变成大写，注意要用引用
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
	getline(cin, s);
	//cin >> s;//cin输入的字符串不能有空格，所以使用getline
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)//decltype类似于auto类型
		//这句话是使字符串空格前的字母都变成大写
		s[index] = toupper(s[index]);
	cout << s << endl;
	*/
	
	cout << "end" << endl;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
