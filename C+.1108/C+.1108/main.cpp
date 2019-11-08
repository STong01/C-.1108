#include <iostream>
#include <string>
using namespace std;

//求解字符串中最长数字字符串
int main1()
{
	//定义存放字符串str
	string str;
	cin >> str;

	//定义临时存放字符串tmp，以及最大字符串存放M_str
	string tmp;
	string M_str;

	int M_length = 0;//存放最大字符串长度

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				tmp += str[i++];
			}

			if (M_length < tmp.length())
			{
				M_str = tmp;
				M_length = tmp.length();
			}
		}
		tmp.clear();
	}
	cout << M_str << endl;

	system("pause");
	return 0;
}