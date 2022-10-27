#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

void findmax(double a, double b, double c){
	double  max = 0;
	if (a>b&&a>c)
	{
		max = a;
	}
	else if (b>a& b>c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	cout << "三个数中最大的数max=" << max << endl;
	// fixed << setprecision(3)
}


int main(){
	double a, b, c;
	cout << "请输入想要比较的三个数" << endl;
	//input(a, b, c);
	cin >> a >> b >> c;

	findmax(a, b, c);
	system("pause");
	return 0;
}

 

 