#include<iostream>
#include<string>
#include<math.h>
#include"two2ten.h"
#include"eight2ten.h"
#include"sixteen2ten.h"
#include"k2ten.h"
using namespace std;
int main()
{
	cout << "请输入要转换的进制：";
	int octal;
	cin >> octal;
	if (octal == 2)
	{
		two2ten t;
		t.push();
		int j = t.judge();
		if (j == -1)
		{
			t.fun_1();
		}
		else if (j == 1)
		{
			t.fun_2();
		}
	}

	//cout << "2";
	else if (octal == 8)
	{
		eight2ten e;
		e.push();
		int j = e.judge();
		if (j == -1)
		{
			e.fun_1();
		}
		else if (j == 1)
		{
			e.fun_2();
		}
	}


	//cout << "8";
	else if (octal == 16)
	{
		sixteen2ten s;
		s.push();
		int j = s.judge();
		if (j == -1)
		{
			s.fun_1();
		}
		else if (j == 1)
		{
			s.fun_2();
		}
	}

	//cout << "16";
	else
	{
		k2ten k;
		k.whole(octal);

	}
	


	return 0;
}