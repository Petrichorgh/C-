#include<iostream>
#include<string>
#define Day 7
using namespace std;
int main()
{
	int a = 1;
	short num1 = 32768;
	int num2 = 32768;
	long num3 = 32768;
	long long num4 =32768;
	float f1 = 3.1415926f;   //С��Ĭ��Ϊdouble float ��� f       7λ��Ч���� 
	double d1 = 3.1415926;   //Ĭ�������Ч����6λ                 15~16λ��Ч���� 
	
	const int month = 12;
	//const ���α��� �䶨�� 
	cout << "Hello C++" << endl;
	cout << "a =" << a << endl;
	cout << "һ���� " << Day << " ��" << endl; 
	cout << "һ���� " << month << " ��" << endl; 
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	
	cout << "int ������ռ�ڴ�ռ� " << sizeof(num2) << endl; 
	cout << "short ������ռ�ڴ�ռ� " << sizeof(num1) << endl;
	cout << "long ������ռ�ڴ�ռ� " << sizeof(num3) << endl; 
	cout << "long long ������ռ�ڴ�ռ� " << sizeof(num4) << endl;
	
	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;
	cout << "float��ռ�ڴ�ռ�Ϊ " << sizeof(float) << endl;  
	cout << "double��ռ�ڴ�ռ�Ϊ " << sizeof(d1) << endl;  
	
	//��ѧ������
	float f2 = 3e2; //3*10^2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; //3*0.1^2
	cout << "f3 = " << f3 << endl;
	
	char ch = 'A';
	cout << ch << endl;
	cout << "char ��ռ�õ��ڴ�ռ� " << sizeof(char) << endl; 
	cout << (int) ch << endl;    //ǿ������ת��  �ַ��� �ڼ�����洢��λASCII ���� 
	
	//ת���ַ�  \n 
	cout << "ch\n"  ;
	//ת���ַ�  \t 
	cout << "a\tddddddd" <<endl;      //a���7�����ַ�  tddddddd 
	cout << "asddd\tffffff" << endl;  //asddd ��� 3�� ���ַ�   �ܹ� 8 ���ַ� 
	//ת���ַ�  ��� '��б��\''\\'
	cout << "\\" << endl;  
	
	//�ַ��� C ����
	char str[] = "Hello C++ !" ;
	cout << str <<endl; 
	// �ַ��� C++
	string str1 = "Hello C++ !" ; 
	cout << str1 <<endl;
	
	// bool
	bool flag = true ;   //true Ϊ�� false Ϊ�� 
	cout << flag <<endl;
	flag = false ;
	cout << flag <<endl;
	
	// ����
	int q;
	cout << "���qֵ" << endl;
	cin >> q;
	cout << "q = " << q << endl; 
	
	float f5;
	cout << "���f5��ֵ" << endl;
	cin >> f5;
	cout << "f5 = " << f5 << endl; 
	return 0;
}




//����   ǿ������ת��    ��int�� ch  ����   int (ch) 
