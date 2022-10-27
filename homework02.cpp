#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
using namespace std;

//�������Ľ��
typedef struct TreeNode{
	struct TreeNode *lchild;
	struct TreeNode *rchild;
	char Node;
}TreeNode, *BiTree;

//����һ�Ŷ�����
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
//��α���������
void levelOrder(TreeNode *root)
{
	TreeNode *p = root;
	queue<TreeNode*> Q;//��ʼ������
		Q.push(p);//��������
	while (!Q.empty())//�ӷǿ� ����ѭ��
	{
		p = Q.front();//���ӣ����ڵ�һ��Ԫ��
		Q.pop();//��Ԫ�س���
		cout << p->Node;//��ӡ
		if (p->lchild != NULL) Q.push(p->lchild);//�������
		if (p->rchild != NULL) Q.push(p->rchild);//�Һ������
	}
}
int main()
{
	BiTree T;
	cout << "�봴��һ�ö�������";
	CreateBiTree(T);
	cout << "������������ɣ�" << endl;
	cout << "------------------------" << endl;
	cout << "��������α���Ϊ";
	levelOrder(T);
	system("pause");
	return 0;
}

