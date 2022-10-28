#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


int Bsearch(int arr[],int key){
	int len = sizeof(arr) / sizeof(arr[0]);
	int low = 0;
	int high = 10;
	int mid;
	while (low<=high)
	{
		mid =  (low + high) / 2;
		if (key == arr[mid])
		
			return mid;
		
		else if (key < arr[mid])
		 
			high = mid - 1;

		else
		
			low = mid + 1;
		
	}
 
	return -1;

}


int main(){
	int arr[50];
	 
	int key = -1;
	cout << "输入一组有序数字（个数为11）" << endl;
	for (int i = 0; i < 11; i++)
	{
		cin >> arr[i];
	}
	cout << "输入你想要找的元素:" ;

	cin >> key;

	int re = Bsearch(arr, key);
	if (re==-1)
	{
		cout << "没有在数组找到"<<key<<endl;
	}
	else
	{
		cout<<key<<"元素的数组下标为： " << re << endl;
	}
	
	system("pause");
		return 0;
}