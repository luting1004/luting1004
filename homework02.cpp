#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
using namespace std;

//定义树的结点
typedef struct TreeNode{
	struct TreeNode *lchild;
	struct TreeNode *rchild;
	char Node;
}TreeNode, *BiTree;

//创建一颗二叉树
void CreateBiTree(BiTree &T)
{
	char ch;
	cin >> ch;
	if (ch == '#') T = NULL;
	else{
		T = new TreeNode;
		T->Node = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
//层次遍历二叉树
void levelOrder(TreeNode *root)
{
	TreeNode *p = root;
	queue<TreeNode*> Q;//初始化队列
		Q.push(p);//根结点入队
	while (!Q.empty())//队非空 进行循环
	{
		p = Q.front();//出队，队内第一个元素
		Q.pop();//首元素出队
		cout << p->Node;//打印
		if (p->lchild != NULL) Q.push(p->lchild);//左孩子入队
		if (p->rchild != NULL) Q.push(p->rchild);//右孩子入队
	}
}
int main()
{
	BiTree T;
	cout << "请创建一棵二叉树：";
	CreateBiTree(T);
	cout << "二叉树创建完成！" << endl;
	cout << "------------------------" << endl;
	cout << "二叉树层次遍历为";
	levelOrder(T);
	system("pause");
	return 0;
}

