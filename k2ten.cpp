#include<iostream>
#include<string>
#include<math.h>
#include"k2ten.h"
using namespace std;
void k2ten::whole(int octal)
{
	k = octal;
	cout << "������" << k << "��������";

	for (int i = 0;; i++)
	{
		cin >> p[i];

		if (p[i] == 'm')
		{
			cout << "�������" << endl;
			break;
		}
		if (k > 0 && k <= 10 && (p[i] - '0') >= k && p[i] != '.' && p[i] != 'm')
		{
			cout << "��������";
			n += 1;
			break;
		}
		else if (k > 10 && (p[i] - 'A') >= (k - 10) && p[i] != '.' && p[i] != 'm')
		{
			cout << "��������";
			n += 1;
			break;
		}
	}
	if (n == 0)
	{
		double result = strtol(p, NULL, k);
		cout << "ת��Ϊʮ���ƣ�" << result << endl;
	}

}