#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>//string 风格的字符串

using namespace std;


int main(){

	/*

	//短整型
	short num1 = 10;

	//长整型
	long num2 = 10;
	//整型
	int num3 = 10;
	//长长整型
	long long num4 = 10;


	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	*/

	short n1 = 10;
	cout << "short的内存空间大小" << sizeof(n1) << endl;

	int n2 = 10;
	cout << "int的大小" << sizeof(n2) << endl;

	float c1 = 100;
	double c2 = 100;
	cout << "float的大小" << sizeof(c1) << endl;
	cout << "double的大小" << sizeof(c2) << endl;

	//科学计数法
	float f2 = 3e2;//3*10的二次
	float f3 = 3e-2; 
	cout << f2 << endl;


	//字符串变量对应的ascii 编码
	char ch = 'a';
	cout << (int)ch << endl;

	string str = "hahhah";
	cout << str << endl;
	system("pause");
	return 0;
}