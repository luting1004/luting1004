#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//冒泡排序的实现

void BubbleSort(int arr[]){       //冒泡排序并且打印结果

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout <<"冒泡排序结果："<<endl;

	for (int j = 0; j<10; j++)
	{
		cout <<arr[j] << " ";
	}
 
}

//快速排序的实现

void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int x = q[(l + r + 1) / 2], i = l - 1, j = r + 1;
	while (i<j)
	{
		do i++; while (q[i]<x);
		do j--; while (q[j]>x);
		if (i<j)
			swap(q[i], q[j]);
	}
	quick_sort(q, l, i - 1);
	quick_sort(q, i, r);
}
 

int main(){
	int arr[50];//定义一个数组     
	int len = sizeof(arr) / sizeof(arr[0]);
                         
	cout << "请输入排序的序列："<<endl;
	for (int i = 0; i<10; i++)      //输入十个数字  
	{
		cin >> arr[i];
	}
	BubbleSort(arr);			//冒泡排序并打印
	quick_sort(arr,0,9);
	cout <<endl<< "快速排序的结果：" << endl;
	for (int i = 0; i < 10; i++) {
	 
		printf("%d ", arr[i]);
	}
		
	system("pause");            
}

 

