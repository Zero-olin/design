#include<iostream>
#include<string>
#include<math.h>
#include"two2ten.h"
using namespace std;
void two2ten::push()
{
	cout << "请输入二进制数：";
	for (int i = 0;; i++)
	{
		cin >> p[i];

		if (p[i] >= '2' && p[i] != 'm')
		{
			cout << "输入数据有误" << endl;
			break;
		}
		if (p[i] == 'm')
		{
			cout << "输入结束" << endl;
			break;
		}
		n++;
	}
}
int two2ten::judge()
{
	for (int i = 0; i < n; i++)
	{
		if (p[i] == '.')
		{
			return 1;
		}
	}
	return -1;
}
int two2ten::f()
{
	for (int i = 0; i < n; i++)
	{
		if (p[i] == '.')return i;
	}

}
void two2ten::fun_1()
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result += (p[i] - '0') * pow(2, n - 1 - i);
	}
	cout << result;
}
void two2ten::fun_2()
{
	double result = 0;
	int x = f();
	//cout << x << endl;
	for (int i = x - 1; i >= 0; i--)
	{
		result += (p[i] - '0') * pow(2, x - i - 1);
	}
	for (int i = x + 1; i < n; i++)
	{
		result += (p[i] - '0') * pow(2, -(i - x));
	}
	cout << result << endl;

}