//3.运算符
#include <iostream>
using namespace std;
int main ()
{
	//加减乘除
	double a = 1.2;
	double b = 0.3;
	cout << a/b << endl;
	cout << a*b << endl;
	cout << a+b << endl;
	cout << b-a << endl; 
	
	//取模运算
	//    取模运算只能为整数    cout << a%b << endl;
	int c=5 , d=2;
	cout << c%d << endl;  
	
	//前置运算与后置运算
	int a1 = 2;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl;    // 3
	cout << "b1 = " << b1 << endl;    // 30
	
	int a2 = 2;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << endl;    //3
	cout << "b2 = " << b2 << endl;    //20 
	
	// 比较运算   带括号 
	int a3 = 10 , b3 =20;
	cout << (a3 != b3) << endl;  
	
	
	//逻辑运算   带括号
	int a4 = 10, b4 = -10;   //为0才为假 
	cout << (a4&&b4) << endl;   //同真为真，其余为假 
	 a4 = 10, b4 = 0;           //同假为假，其余为真 
	cout << (a4&&b4) << endl;
	cout << (a4||b4) << endl;
	return 0;
 } 
