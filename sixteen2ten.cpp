#include<iostream>
#include<string>
#include<math.h>
#include"sixteen2ten.h"
using namespace std;
void sixteen2ten::push()
{
	cout << "������ʮ����������";
	for (int i = 0;; i++)
	{
		cin >> p[i];
		if (p[i] > 'G' && p[i] != 'm')
		{
			cout << "��������";
		}
		if (p[i] == 'm')
		{
			cout << "�������" << endl;
			break;
		}
		n++;//
	}

}
int sixteen2ten::judge()
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
int sixteen2ten::f()
{
	for (int i = 0; i < n; i++)
	{
		if (p[i] == '.')return i;
	}
}
void sixteen2ten::fun_1()
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] >= '0' && p[i] <= '9')
			result += (p[i] - '0') * pow(16, n - 1 - i);
		else if (p[i] >= 'A' && p[i] <= 'Z')
			result += (p[i] - 55) * pow(16, n - 1 - i);
	}
	cout << result;
}
void sixteen2ten::fun_2()
{
	double result = 0;
	int x = f();
	//cout << x << endl;
	//С����ǰ
	for (int i = x - 1; i >= 0; i--)
	{
		if (p[i] >= '0' && p[i] <= '9')
			result += (p[i] - '0') * pow(16, x - i - 1);
		else if (p[i] >= 'A' && p[i] <= 'Z')
			result += (p[i] - 55) * pow(16, x - 1 - i);
	}
	//С�����
	for (int i = x + 1; i < n; i++)
	{
		if (p[i] >= '0' && p[i] <= '9')
			result += (p[i] - '0') * pow(16, -(i - x));
		else if (p[i] >= 'A' && p[i] <= 'Z')
			result += (p[i] - 55) * pow(16, -(i - x));
	}
	cout << result << endl;

}