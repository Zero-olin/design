#include<iostream>
#include<string>
#include<math.h>
#include"eight2ten.h"
using namespace std;
void eight2ten::push()
{
	cout << "请输入八进制数：";
	for (int i = 0;; i++)
	{
		cin >> p[i];

		if (p[i] > '8' && p[i] != 'm')
		{
			cout << "输入有误";
			break;
		}
		if (p[i] == 'm')
		{
			cout << "输入结束" << endl;
			break;
		}
		n++;//
	}
}
int eight2ten::judge()
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
int eight2ten::f()
{
	for (int i = 0; i < n; i++)
	{
		if (p[i] == '.')return i;
	}
}
void eight2ten::fun_1()
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result += (p[i] - '0') * pow(8, n - 1 - i);
	}
	cout << result;
}
void eight2ten::fun_2()
{
	double result = 0;
	int x = f();
	//cout << x << endl;
	for (int i = x - 1; i >= 0; i--)
	{
		result += (p[i] - '0') * pow(8, x - i - 1);
	}
	for (int i = x + 1; i < n; i++)
	{
		result += (p[i] - '0') * pow(8, -(i - x));
	}
	cout << result << endl;
}