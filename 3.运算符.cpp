//3.�����
#include <iostream>
using namespace std;
int main ()
{
	//�Ӽ��˳�
	double a = 1.2;
	double b = 0.3;
	cout << a/b << endl;
	cout << a*b << endl;
	cout << a+b << endl;
	cout << b-a << endl; 
	
	//ȡģ����
	//    ȡģ����ֻ��Ϊ����    cout << a%b << endl;
	int c=5 , d=2;
	cout << c%d << endl;  
	
	//ǰ���������������
	int a1 = 2;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl;    // 3
	cout << "b1 = " << b1 << endl;    // 30
	
	int a2 = 2;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << endl;    //3
	cout << "b2 = " << b2 << endl;    //20 
	
	// �Ƚ�����   ������ 
	int a3 = 10 , b3 =20;
	cout << (a3 != b3) << endl;  
	
	
	//�߼�����   ������
	int a4 = 10, b4 = -10;   //Ϊ0��Ϊ�� 
	cout << (a4&&b4) << endl;   //ͬ��Ϊ�棬����Ϊ�� 
	 a4 = 10, b4 = 0;           //ͬ��Ϊ�٣�����Ϊ�� 
	cout << (a4&&b4) << endl;
	cout << (a4||b4) << endl;
	return 0;
 } 
