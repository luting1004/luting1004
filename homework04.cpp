#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//ð�������ʵ��

void BubbleSort(int arr[]){       //ð�������Ҵ�ӡ���

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

	cout <<"ð����������"<<endl;

	for (int j = 0; j<10; j++)
	{
		cout <<arr[j] << " ";
	}
 
}

//���������ʵ��

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
	int arr[50];//����һ������     
	int len = sizeof(arr) / sizeof(arr[0]);
                         
	cout << "��������������У�"<<endl;
	for (int i = 0; i<10; i++)      //����ʮ������  
	{
		cin >> arr[i];
	}
	BubbleSort(arr);			//ð�����򲢴�ӡ
	quick_sort(arr,0,9);
	cout <<endl<< "��������Ľ����" << endl;
	for (int i = 0; i < 10; i++) {
	 
		printf("%d ", arr[i]);
	}
		
	system("pause");            
}

 

