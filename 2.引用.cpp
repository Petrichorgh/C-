//2.1���õĻ���ע������
/* 
#include <iostream>
using namespace std;
int main(){
	//���õĻ����﷨
	//���ݽṹ����  &����   =  ԭ��
	int a = 10;
	int &b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;	 
} 
*/


//2.2���õĻ���ע������
/*
#include <iostream>
using namespace std;
int main(){
	int a = 10;
	//1.���ñ����ʼ��
	//   int &b;  δ��ʼ�� 
	int &b = a; 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2.һ�����ú��ܸı� 
	int c = 1;
	// ���ɸı�int &c = a;
	b = c;   //��ֵ���� 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;	 
} 
*/



//2.3��������������
/* 
#include <iostream>
using namespace std;
void swap1(int a, int b){
	//2.3.1.ֵ����
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void swap2(int *a, int *b){
	//2.3.2��ַ����
	int temp = *a;
	*a = *b;
	*b = temp; 
}

void swap3(int &a, int &b){
	//2.3.3.���ô��� 
	int temp = a;
	a = b;
	b = temp;
} 
int main()
{
	int a = 1, b = 2;
	//swap1(a,b);
	//swap2(&a,&b);
	swap3(a,b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl; 
}
*/



//2.4��������������ֵ
/* 
#include <iostream>
using namespace std;
//2.4.1���ؾֲ���������
int& test1(){
	int a = 10;  //�ֲ�����  �����ջ�� 
	return a; 
}


//2.4.2�����ĵ��ÿ�����Ϊ��ֵ
int& test2(){
	static int a =2;     //��̬�����������ȫ��������ȫ�����������ڳ��������ϵͳ�ͷ� 
	return a;
} 
int main(){
	//���ܽ��ֲ���������
//	int& ref = test1();
//	cout << "ref = " << ref << endl;    //��һ�ν����ȷ�����������˱��� 
//	cout << "ref = " << ref << endl;    //�ڶ��δ�����Ϊa�ڴ��Ѿ��ͷ� 

	int& ref = test2();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	test2() = 1000;
	cout << "ref = " << ref << endl;	
} 
*/



//2.5���õı���
/*
#include <iostream>
using namespace std;
void fun(int& ref){
	ref = 100;
}
 
int main(){
	int a = 2;
	
	//�Զ�ת��Ϊ int *const ref = &a; ָ�볣����ָ��ָ�򲻿ɸı䣬Ҳ˵��Ϊʲô���ò��ɸ��� 
	int& ref = a;
	ref = 5;         //�Զ�ת��Ϊ *ref = 5
	cout << "a = " << a << endl; 
	cout << "ref = " << ref << endl;
	fun(a);
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl; 
	return 0;
}
*/



//2.6�������� 
#include <iostream>
using namespace std;
//����ʹ�õĳ�����ͨ�����������β�
void showValue(const int& v){
	//  v = 20;   ֻ���������޸� 
	cout << "v = " << v << endl;
} 

int main(){
	//int & ref = 10;    //������ֱ�Ӹ�ֵ�����ñ�����Ҫһ���Ϸ��Ŀռ�
	//����const�Ϳ��ԣ����������Ż� 
	const int& ref = 10;   //�Ż���int temp = 10; const int& ref = temp; 
	
	//ref = 100;  //����const�󲻿����޸ı���
	cout << ref << endl;
	
	//���������ó����������ڷ��ò����޸�ʵ��
	int a = 10;
	showValue(a); 
} 
