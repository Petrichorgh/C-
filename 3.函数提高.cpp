//3. ������� 
//3.1����Ĭ�ϲ���
/*
#include <iostream>
using namespace std;
 
//����Ĭ�ϲ���

//��������Լ��������ݣ������Լ��ģ��������Ĭ��ֵ

//�﷨������ֵ����  ������ ���β� = Ĭ��ֵ��{} 
int fun(int a = 1, int b = 2, int c = 3){
	return a + b + c;
}

int main(){
	fun();
	cout << fun(2,5,6) << endl;
	return 0;
}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//  int fun1(int a = 1, int b, int c){
//  	return a + b + c;
//  }


//2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//	int fun2(int a = 1, int b = 2, int c = 3);
//
//	int fun2(int a, int b, int c){
//		return a + b + c;
//	}
//�� 
//	int fun2(int a, int b, int c);
//	int fun2(int a = 1, int b = 2, int c = 3){
//		return a + b + c;
//	}

//����ʾ��
//	int fun2(int a = 1, int b = 2, int c = 3)�� 
//	int fun2(int a = 1, int b = 2, int c = 3){
//		return a + b + c;
//	} 
*/


//3.2����ռλ����
/* 
#include <iostream>
using namespace std;
//ռλ����
//����ֵ����  ���������������ͣ�{}
//ռλ������������Ĭ�ϲ��� 
void fun(int a , int b){
	cout << "1" << endl;
}

int main(){
	fun(10,10);
	return 0;
} 
*/




//3.3��������
/* 
#include <iostream>
using namespace std;
//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1.ͬһ����������
//2.����������ͬ 
//3.�����������͡�������˳�� ��ͬ 
void fun(){
	cout << "fun�ĵ���" << endl; 
}

void fun(int a){
	cout << "fun(int a)�ĵ���" << endl; 
}

void fun(double a){
	cout << "fun(double a)�ĵ���" << endl; 
}

void fun(double a, int b){
	cout << "fun(double a, int b)" << endl; 
}

void fun( int b,double a){
	cout << "fun(int b,double a)" << endl; 
}

//ע������
//�����ķ���ֵ��������Ϊ�������ص�����
// int fun();   ��void fun() �������� 

int main(){
	fun();
	fun(1);
	fun(3.14);
	fun(3.14,10);
	fun(10,3.14); 
}
*/



//3.3.2��������ע������
#include <iostream>
using namespace std;

//1.������Ϊ���ص�����
void fun(int &a){
	cout << "fun(int &a)����" << endl;     // int &a = 10  �﷨���� 
}

void fun(const int &a){
	cout << "fun(const int &a)����" << endl;   //  const int &a = 10 �൱��  temp = 10 , const int &a = temp  �﷨��ȷ 
}

//2.������������Ĭ�ϲ��� 
void fun1(int a, int b = 10){
	cout << "fun1(int a, int b)����" << endl;   //  const int &a = 10 �൱��  temp = 10 , const int &a = temp  �﷨��ȷ 
}

void fun1(int a){
	cout << "fun1(int a)����" << endl;   //  const int &a = 10 �൱��  temp = 10 , const int &a = temp  �﷨��ȷ 
}


int main(){
	//1 
	int a = 10;
	fun(a);   //fun(int &a)����
	fun(10);  //fun(const int &a)���� 
	
	//2
	fun1(10);    //��һ�� a = 10, b = 10    �ڶ��� a =10 �����Ե���  
	//���Խ��鲻�ú���Ĭ��ֵ 
} 
