#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>//string �����ַ���

using namespace std;


int main(){

	/*

	//������
	short num1 = 10;

	//������
	long num2 = 10;
	//����
	int num3 = 10;
	//��������
	long long num4 = 10;


	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	*/

	short n1 = 10;
	cout << "short���ڴ�ռ��С" << sizeof(n1) << endl;

	int n2 = 10;
	cout << "int�Ĵ�С" << sizeof(n2) << endl;

	float c1 = 100;
	double c2 = 100;
	cout << "float�Ĵ�С" << sizeof(c1) << endl;
	cout << "double�Ĵ�С" << sizeof(c2) << endl;

	//��ѧ������
	float f2 = 3e2;//3*10�Ķ���
	float f3 = 3e-2; 
	cout << f2 << endl;


	//�ַ���������Ӧ��ascii ����
	char ch = 'a';
	cout << (int)ch << endl;

	string str = "hahhah";
	cout << str << endl;
	system("pause");
	return 0;
}