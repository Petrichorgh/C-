//��������ȫ���� 
/* 
#include <iostream>
using namespace std;

//����ȫ�ֱ���
int g_a = 1;      //g = global ȫ�ֵ� 
int g_b = 1;

//const ���ε�ȫ�ֱ��� 
const int c_g_a = 1;
const int c_g_b = 1; 
int main()
{
	//ȫ����
	//����ȫ�ֱ�������̬����������
	
	//������ͨ�ľֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ��" << (long long int)&a << endl; 
	cout << "�ֲ�����b�ĵ�ַΪ��" << (long long int)&b << endl; 	
	
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (long long int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (long long int)&g_b << endl; 
	
	//��̬����������ͨ����ǰ���static,���ھ�̬����
	static int s_a = 0;
	static int s_b = 0;
	cout << "��̬����s_a�ĵ�ַΪ��" << (long long int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (long long int)&s_b << endl; 
	
	//��������1���ַ�����������2��const���εı���
	//(1)�ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << (long long int)&"hello world" << endl;
	
	//(2)const���εı��� 
	//��const���ε�ȫ�ֱ�������const���εľֲ����� 
	const int c_l_a = 1;
	const int c_l_b = 1;
	cout << "const���ε�ȫ�ֱ���c_g_a�ĵ�ַΪ��" << (long long int)&c_g_a << endl;
	cout << "const���ε�ȫ�ֱ���c_g_a�ĵ�ַΪ��" << (long long int)&c_g_a << endl;
	
	cout << "const���εľֲ�����c_l_a�ĵ�ַΪ��" << (long long int)&c_l_a << endl;
	cout << "const���εľֲ�����c_l_a�ĵ�ַΪ��" << (long long int)&c_l_a << endl;
	return 0;
}
*/



//ջ�� 
/* 
#include <iostream>
using namespace std;
int *fun()
{
	int a = 10;    //�ֲ����� �����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;     //���ؾֲ������ĵ�ַ	 
}
int main()
{
	int *p = fun();
	cout << *p << endl;  //��һ����ȷ�����������˱��� 
	cout << *p << endl;  //���ݲ��ٱ��� 
	return 0;	
} 
*/


//����
/*
#include <iostream>
using namespace std;
int *fun()
{
	//����new�ؼ���   ���Խ����ݿ��ٵ����� 
	int * p = new int(10); 
}
int main()
{
	int *p = fun();
	cout << *p << endl;  //��һ����ȷ�����������˱��� 
	cout << *p << endl;  //���ݲ��ٱ��� 
	return 0;	
} 
*/



//new �� delete
#include <iostream>
using namespace std;

//new�Ļ����﷨ 
int * fun01(){
	//�ڶ�ջ��������������
	//new���ظ����͵�ָ�� 
	int *p = new int(10);
	return p;
}

void test01(){
	int *p = fun01();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	cout << *p << endl;     //�ڴ����ͷţ��ٴη��ʾ��ǷǷ����� 
}

void test02(){
		int *arr = new int [10];
	for (int i = 0; i < 10; i++){
		arr[i] = i + 100;	
		}
	for(int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	delete [] arr;
	//�ͷŶ�ջ���� Ҫ��[] 
}

int main(){
	test02(); 
}
