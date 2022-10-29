#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100;
struct Edge
{
	int v;
	int u;
	int w;
}e[N];
int father[N];
bool cmp(Edge a, Edge b)
{
	return a.w < b.w;
}

void Init(int n)
{
	for (int i = 1; i <= n; i++)
		father[i] = i;
}
int FindFather(int i)
{
	if (i == father[i])
		return i;
	else
	{
		int f = FindFather(father[i]);
		father[i] = f;
		return f;
	}
}

int Kruskal(int n, int m)
{
	int sum = 0;
	for (int i = 1; i <= m; i++)
	{
		int fv = FindFather(e[i].v);
		int fu = FindFather(e[i].u);
		if (fu != fv)
		{
			sum += e[i].w;
			father[fv] = fu;
			n--;
			if (n == 1)
				return sum;
		}
	}
	return 0;
}

int main()
{
	int n, m;
	cout << "输入结点数n和边数m：";
	cin >> n >> m;
	cout << "输入结点数u，v和边值w：" << endl;
	for (int i = 1; i <= m; i++)
	{
		cin >> e[i].v >> e[i].u >> e[i].w;
	}
	sort(e + 1, e + m + 1, cmp);
	Init(n);
	cout << "最小花费是：" << Kruskal(n, m) << endl;
	system("pause");
	return 0;
}
