#include <iostream>
#include <string>
using namespace std;

//����ַ�����������ַ���
int main1()
{
	//�������ַ���str
	string str;
	cin >> str;

	//������ʱ����ַ���tmp���Լ�����ַ������M_str
	string tmp;
	string M_str;

	int M_length = 0;//�������ַ�������

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