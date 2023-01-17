//代码区和全局区 
/* 
#include <iostream>
using namespace std;

//创建全局变量
int g_a = 1;      //g = global 全局的 
int g_b = 1;

//const 修饰的全局变量 
const int c_g_a = 1;
const int c_g_b = 1; 
int main()
{
	//全局区
	//包含全局变量、静态变量、常量
	
	//创建普通的局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为：" << (long long int)&a << endl; 
	cout << "局部变量b的地址为：" << (long long int)&b << endl; 	
	
	cout << "全局变量g_a的地址为：" << (long long int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (long long int)&g_b << endl; 
	
	//静态变量，在普通变量前面加static,属于静态变量
	static int s_a = 0;
	static int s_b = 0;
	cout << "静态变量s_a的地址为：" << (long long int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (long long int)&s_b << endl; 
	
	//常量：（1）字符串常量；（2）const修饰的变量
	//(1)字符串常量
	cout << "字符串常量的地址为：" << (long long int)&"hello world" << endl;
	
	//(2)const修饰的变量 
	//①const修饰的全局变量；②const修饰的局部变量 
	const int c_l_a = 1;
	const int c_l_b = 1;
	cout << "const修饰的全局变量c_g_a的地址为：" << (long long int)&c_g_a << endl;
	cout << "const修饰的全局变量c_g_a的地址为：" << (long long int)&c_g_a << endl;
	
	cout << "const修饰的局部变量c_l_a的地址为：" << (long long int)&c_l_a << endl;
	cout << "const修饰的局部变量c_l_a的地址为：" << (long long int)&c_l_a << endl;
	return 0;
}
*/



//栈区 
/* 
#include <iostream>
using namespace std;
int *fun()
{
	int a = 10;    //局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;     //返回局部变量的地址	 
}
int main()
{
	int *p = fun();
	cout << *p << endl;  //第一次正确，编译器做了保留 
	cout << *p << endl;  //数据不再保留 
	return 0;	
} 
*/


//堆区
/*
#include <iostream>
using namespace std;
int *fun()
{
	//利用new关键字   可以将数据开辟到堆区 
	int * p = new int(10); 
}
int main()
{
	int *p = fun();
	cout << *p << endl;  //第一次正确，编译器做了保留 
	cout << *p << endl;  //数据不再保留 
	return 0;	
} 
*/



//new 与 delete
#include <iostream>
using namespace std;

//new的基本语法 
int * fun01(){
	//在堆栈区创建整型数据
	//new返回该类型的指针 
	int *p = new int(10);
	return p;
}

void test01(){
	int *p = fun01();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	cout << *p << endl;     //内存已释放，再次访问就是非法操作 
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
	//释放堆栈数组 要加[] 
}

int main(){
	test02(); 
}
