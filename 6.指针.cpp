//指针
#include <iostream>
using namespace std;
int main()
{
/* 
	int a = 10;
	int *p = &a;
	cout << "a的地址" << &a << endl;
	cout << "a的地址" << p << endl;
	*p = 20;
	cout << "a改变后的值为" << a << endl;
	
	//占用空间
	//32位操作系统，指针是占用4个字节空间大小，不管是什么类型
	//64位操作系统，指针是占用8个字节空间大小，不管是什么类型	 
	cout << "sizeof(int * = )" << sizeof(p) << endl;
	cout << "sizeof(double * = )" << sizeof(p) << endl; 
	cout << "sizeof(float * = )" << sizeof(p) << endl;
	cout << "sizeof(char * = )" << sizeof(p) << endl;
	
	
	//空指针
	int * p = NULL;
	//空指针是不可以进行访问的
	//0~255之间的内存编号是系统占用的，因此不可以访问
	//*p = 5; 
*/	
	//野指针
	//int  *p = (int *)0x1100;
	//cout << *p << endl;
	//野指针和空指针都不是我们申请的空间，因此不要访问 
	
	
	//const 修饰指针
//	int a = 10;
//	int b = 20;
//	const int *p = &a;
//	//*p = 20; 错误 
//	p = &b;   //正确
//	
//	
//	//指针常量
//	int * const p1 = &a;
//	*p1 = 20;  //正确 
//	 //p = &b;   错误  
	
	//指针与数组
	int arr[5] = {1,2,3,4,5}; 
	int *p3 =  arr;
	for (int i = 0; i < 5; i++)
	{
		cout << *p3 << endl;
		p3++;
	} 
	
	return 0;
}
