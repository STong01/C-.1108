#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//输入数组长度
	int n;
	cin >> n;

	//定义数组内容
	vector<int> m;
	m.resize(n);

	for (int i = 0; i < n; i++)
		cin >> m[i];

	//进行数组排序
	int i, j;
	for (i = 0; i < m.size(); i++)
	{
		for (j = 0; j < m.size() - i - 1; j++)
		{
			if (m[j] > m[j + 1])
			{
				int tmp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = tmp;
			}
		}
	}

	//确定数组中位数，即为出现次数超过数组长度一半数字
	int mid = m.size() / 2;
	int count = 0;
	int size = m.size();
	for (int i = 0; i < size; i++)
	{
		if (m[mid] == m[i])
			count++;
		if (count > size / 2)
		{
			cout << m[mid] << endl;
			break;
		}
	}

	system("pause");
	return 0;
}

