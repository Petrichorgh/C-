//ָ��
#include <iostream>
using namespace std;
int main()
{
/* 
	int a = 10;
	int *p = &a;
	cout << "a�ĵ�ַ" << &a << endl;
	cout << "a�ĵ�ַ" << p << endl;
	*p = 20;
	cout << "a�ı���ֵΪ" << a << endl;
	
	//ռ�ÿռ�
	//32λ����ϵͳ��ָ����ռ��4���ֽڿռ��С��������ʲô����
	//64λ����ϵͳ��ָ����ռ��8���ֽڿռ��С��������ʲô����	 
	cout << "sizeof(int * = )" << sizeof(p) << endl;
	cout << "sizeof(double * = )" << sizeof(p) << endl; 
	cout << "sizeof(float * = )" << sizeof(p) << endl;
	cout << "sizeof(char * = )" << sizeof(p) << endl;
	
	
	//��ָ��
	int * p = NULL;
	//��ָ���ǲ����Խ��з��ʵ�
	//0~255֮����ڴ�����ϵͳռ�õģ���˲����Է���
	//*p = 5; 
*/	
	//Ұָ��
	//int  *p = (int *)0x1100;
	//cout << *p << endl;
	//Ұָ��Ϳ�ָ�붼������������Ŀռ䣬��˲�Ҫ���� 
	
	
	//const ����ָ��
//	int a = 10;
//	int b = 20;
//	const int *p = &a;
//	//*p = 20; ���� 
//	p = &b;   //��ȷ
//	
//	
//	//ָ�볣��
//	int * const p1 = &a;
//	*p1 = 20;  //��ȷ 
//	 //p = &b;   ����  
	
	//ָ��������
	int arr[5] = {1,2,3,4,5}; 
	int *p3 =  arr;
	for (int i = 0; i < 5; i++)
	{
		cout << *p3 << endl;
		p3++;
	} 
	
	return 0;
}
