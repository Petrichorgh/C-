//数组
/*
#include <iostream>
using namespace std;
int main()
{
	
	//定义方式 
	
	//数组名的用途
	//1.通过数组名统计整个数组占用内存的大小
	int arr[3] = {0,1,2}; 
	cout << "整个数组占用内存空间大小" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间大小" << sizeof(arr[0]) << endl;  
	cout << "数组元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2.可以通过数组名查看数组的首地址
	cout << "数组首地址" <<  arr << endl;
	cout << "数组第一个元素的首地址为" <<  &arr[0] << endl;
	cout << "数组第二个元素的首地址为" <<  &arr[1] << endl;	
	
	
	return 0;
 
}
*/


//五只小猪称体重
/*
#include <iostream>
using namespace std;
int main()
{
	int a[5] = {300, 350, 500, 400, 250};
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if(a[i] > max)
		max = a[i];
	}
	cout << "最重的小猪体重是" << max << endl;
	
	return 0;
 
}
*/


//元素逆置
/*
#include <iostream>
using namespace std;
int main()
{
	int a[5] = {1,2,3,4,5};
	cout << "逆置前数组" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	int start = 0;
	int end = sizeof(a) / sizeof(a[0]) -1;   //元素个数减一 ，为数组最后一个元素的下标 
	int temp;
	while(start < end)
	{
		temp =  a[start];
		a[start] =a[end];
		a[end] = temp;
		start++;
		end--; 
	}
	cout << "逆置后数组" << endl; 
	for (int i = 0; i<5; i++)
	{
	cout << a[i] << endl;
	}
	return 0;
 
} 
*/



//二维数组
#include <iostream>
using namespace std;
int main()
{
	int a[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//1.内存空间的大小
	cout << "二维数组占用内存空间为" << sizeof(a) << endl;
	cout << "二维数组第一行占用内存空间为" << sizeof(a[0]) << endl;
	cout << "二维数组第一个元素占用内存空间为" << sizeof(a[0][0]) << endl;
	cout << "二维数组行数为" << sizeof(a) / sizeof(a[0]) << endl;
	cout << "二维数组列数" << sizeof(a[0]) / sizeof(a[0][0]) << endl;  
	//2.查看二维数组的首地址
	cout << "二维数组首地址为" << (long long int) a << endl; 
	cout << "二维数组第一行首地址为" << (long long int) a[0] << endl; 
	cout << "二维数组第二行首地址为" << (long long int) a[1] << endl; 
	cout << "二维数组第一个元素首地址为" << (long long int) &a[0][0] << endl; 
	cout << "二维数组第二个元素首地址为" << (long long int) &a[0][1] << endl; 
	return 0;
 
} 
