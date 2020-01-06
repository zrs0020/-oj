// vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"

#include <vector>
#include <iostream>
int main()
{
	using namespace std;
	vector<int> v1, v2, v3;
	vector<int>::iterator iter;


	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);


	cout << "v1 = ";
	for (iter = v1.begin(); iter != v1.end(); iter++)
		cout << *iter << " ";
	cout << endl;


	v2.assign(v1.begin(), v1.end());
	cout << "v2 = ";
	for (iter = v2.begin(); iter != v2.end(); iter++)
		cout << *iter << " ";
	cout << endl;


	v3.assign(7, 4);
	cout << "v3 = ";
	for (iter = v3.begin(); iter != v3.end(); iter++)
		cout << *iter << " ";
	cout << endl;
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
