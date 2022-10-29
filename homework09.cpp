#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

#include<vector>//һ����ģ�壬�������������Ϊһ��������
#define Max 9999
using namespace std;

vector<int> result; // һ����������--�������沢������˽��
int v, e;           //n Ϊ�������� m Ϊ����
int G[Max][Max];
bool visited[Max];
int inDegree[Max];  //��¼������������

void DAG()
{
	if (result.size() == v)
	{
		for (int i = 0; i < v; ++i)
		{
			cout << result[i] << " ";
		}
		cout << endl;
		return;
	}


	for (int i = 0; i < v; ++i)
	{
		if (!visited[i] && inDegree[i] == 0)
		{
			result.push_back(i);//������β�����һ��Ԫ��
			visited[i] = true;
			for (int j = 0; j < v; ++j)
			{
				if (G[i][j] > 0)
				{
					inDegree[j]--;
				}
			}
			DAG();
			result.pop_back();//�������Ƴ�һ��Ԫ��
			visited[i] = false;
			for (int j = 0; j < v; ++j)
			{
				if (G[i][j] > 0)
				{
					inDegree[j]++;
				}
			}
		}
	}
	return;
}

int main()
{
	cout << "���붥������";
	cin >> v;
	cout << "���������";
	cin >> e;
	//��һ�������Ľ�����䣬��fill()����
	fill(G[0], G[0] + Max * Max, 0);//��ʼ�� 
	fill(visited, visited + Max, false);
	fill(inDegree, inDegree + Max, 0);
	cout << "��������ߵ���Ϣ��";
	int u, v;  //uΪ�ߵĳ����㣬 vΪ�ߵ��յ�
	for (int i = 0; i < e; ++i)
	{
		cin >> u >> v;
		G[u][v]++;
		inDegree[v]++;
	}
	DAG();
	system("pause");
	return 0;
}
