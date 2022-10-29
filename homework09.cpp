#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

#include<vector>//一个类模板，空容器可以理解为一个空数组
#define Max 9999
using namespace std;

vector<int> result; // 一种数据类型--用来保存并输出拓扑结果
int v, e;           //n 为顶点数， m 为边数
int G[Max][Max];
bool visited[Max];
int inDegree[Max];  //记录各个顶点的入度

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
			result.push_back(i);//在容器尾部添加一个元素
			visited[i] = true;
			for (int j = 0; j < v; ++j)
			{
				if (G[i][j] > 0)
				{
					inDegree[j]--;
				}
			}
			DAG();
			result.pop_back();//在容器移除一个元素
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
	cout << "输入顶点数：";
	cin >> v;
	cout << "输入边数：";
	cin >> e;
	//对一个容器的进行填充，用fill()函数
	fill(G[0], G[0] + Max * Max, 0);//初始化 
	fill(visited, visited + Max, false);
	fill(inDegree, inDegree + Max, 0);
	cout << "输入各条边的信息：";
	int u, v;  //u为边的出发点， v为边的终点
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
