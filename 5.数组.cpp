//����
/*
#include <iostream>
using namespace std;
int main()
{
	
	//���巽ʽ 
	
	//����������;
	//1.ͨ��������ͳ����������ռ���ڴ�Ĵ�С
	int arr[3] = {0,1,2}; 
	cout << "��������ռ���ڴ�ռ��С" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ��С" << sizeof(arr[0]) << endl;  
	cout << "����Ԫ�ظ���" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2.����ͨ���������鿴������׵�ַ
	cout << "�����׵�ַ" <<  arr << endl;
	cout << "�����һ��Ԫ�ص��׵�ַΪ" <<  &arr[0] << endl;
	cout << "����ڶ���Ԫ�ص��׵�ַΪ" <<  &arr[1] << endl;	
	
	
	return 0;
 
}
*/


//��ֻС�������
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
	cout << "���ص�С��������" << max << endl;
	
	return 0;
 
}
*/


//Ԫ������
/*
#include <iostream>
using namespace std;
int main()
{
	int a[5] = {1,2,3,4,5};
	cout << "����ǰ����" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	int start = 0;
	int end = sizeof(a) / sizeof(a[0]) -1;   //Ԫ�ظ�����һ ��Ϊ�������һ��Ԫ�ص��±� 
	int temp;
	while(start < end)
	{
		temp =  a[start];
		a[start] =a[end];
		a[end] = temp;
		start++;
		end--; 
	}
	cout << "���ú�����" << endl; 
	for (int i = 0; i<5; i++)
	{
	cout << a[i] << endl;
	}
	return 0;
 
} 
*/



//��ά����
#include <iostream>
using namespace std;
int main()
{
	int a[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//1.�ڴ�ռ�Ĵ�С
	cout << "��ά����ռ���ڴ�ռ�Ϊ" << sizeof(a) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ" << sizeof(a[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ�Ϊ" << sizeof(a[0][0]) << endl;
	cout << "��ά��������Ϊ" << sizeof(a) / sizeof(a[0]) << endl;
	cout << "��ά��������" << sizeof(a[0]) / sizeof(a[0][0]) << endl;  
	//2.�鿴��ά������׵�ַ
	cout << "��ά�����׵�ַΪ" << (long long int) a << endl; 
	cout << "��ά�����һ���׵�ַΪ" << (long long int) a[0] << endl; 
	cout << "��ά����ڶ����׵�ַΪ" << (long long int) a[1] << endl; 
	cout << "��ά�����һ��Ԫ���׵�ַΪ" << (long long int) &a[0][0] << endl; 
	cout << "��ά����ڶ���Ԫ���׵�ַΪ" << (long long int) &a[0][1] << endl; 
	return 0;
 
} 
