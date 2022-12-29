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
	float f1 = 3.1415926f;   //小数默认为double float 后加 f       7位有效数字 
	double d1 = 3.1415926;   //默认输出有效数字6位                 15~16位有效数字 
	
	const int month = 12;
	//const 修饰变量 变定量 
	cout << "Hello C++" << endl;
	cout << "a =" << a << endl;
	cout << "一周有 " << Day << " 天" << endl; 
	cout << "一年有 " << month << " 月" << endl; 
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	
	cout << "int 类型所占内存空间 " << sizeof(num2) << endl; 
	cout << "short 类型所占内存空间 " << sizeof(num1) << endl;
	cout << "long 类型所占内存空间 " << sizeof(num3) << endl; 
	cout << "long long 类型所占内存空间 " << sizeof(num4) << endl;
	
	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;
	cout << "float所占内存空间为 " << sizeof(float) << endl;  
	cout << "double所占内存空间为 " << sizeof(d1) << endl;  
	
	//科学计数法
	float f2 = 3e2; //3*10^2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; //3*0.1^2
	cout << "f3 = " << f3 << endl;
	
	char ch = 'A';
	cout << ch << endl;
	cout << "char 所占用的内存空间 " << sizeof(char) << endl; 
	cout << (int) ch << endl;    //强制类型转换  字符型 在计算机存储中位ASCII 编码 
	
	//转义字符  \n 
	cout << "ch\n"  ;
	//转义字符  \t 
	cout << "a\tddddddd" <<endl;      //a后跟7个空字符  tddddddd 
	cout << "asddd\tffffff" << endl;  //asddd 后跟 3个 空字符   总共 8 个字符 
	//转义字符  输出 '反斜杠\''\\'
	cout << "\\" << endl;  
	
	//字符串 C 语言
	char str[] = "Hello C++ !" ;
	cout << str <<endl; 
	// 字符串 C++
	string str1 = "Hello C++ !" ; 
	cout << str1 <<endl;
	
	// bool
	bool flag = true ;   //true 为真 false 为假 
	cout << flag <<endl;
	flag = false ;
	cout << flag <<endl;
	
	// 输入
	int q;
	cout << "请给q值" << endl;
	cin >> q;
	cout << "q = " << q << endl; 
	
	float f5;
	cout << "请给f5赋值" << endl;
	cin >> f5;
	cout << "f5 = " << f5 << endl; 
	return 0;
}




//问题   强制类型转换    （int） ch  还是   int (ch) 
