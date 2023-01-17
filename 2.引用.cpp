//2.1引用的基本注意事项
/* 
#include <iostream>
using namespace std;
int main(){
	//引用的基本语法
	//数据结构类型  &别名   =  原名
	int a = 10;
	int &b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;	 
} 
*/


//2.2引用的基本注意事项
/*
#include <iostream>
using namespace std;
int main(){
	int a = 10;
	//1.引用必须初始化
	//   int &b;  未初始化 
	int &b = a; 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2.一旦引用后不能改变 
	int c = 1;
	// 不可改变int &c = a;
	b = c;   //赋值操作 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;	 
} 
*/



//2.3引用做函数参数
/* 
#include <iostream>
using namespace std;
void swap1(int a, int b){
	//2.3.1.值传递
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void swap2(int *a, int *b){
	//2.3.2地址传递
	int temp = *a;
	*a = *b;
	*b = temp; 
}

void swap3(int &a, int &b){
	//2.3.3.引用传递 
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



//2.4引用做函数返回值
/* 
#include <iostream>
using namespace std;
//2.4.1返回局部变量引用
int& test1(){
	int a = 10;  //局部变量  存放在栈区 
	return a; 
}


//2.4.2函数的调用可以作为左值
int& test2(){
	static int a =2;     //静态变量，存放在全局区，在全局区的数据在程序结束后系统释放 
	return a;
} 
int main(){
	//不能将局部变量引用
//	int& ref = test1();
//	cout << "ref = " << ref << endl;    //第一次结果正确，编译器做了保留 
//	cout << "ref = " << ref << endl;    //第二次错误，因为a内存已经释放 

	int& ref = test2();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	test2() = 1000;
	cout << "ref = " << ref << endl;	
} 
*/



//2.5引用的本质
/*
#include <iostream>
using namespace std;
void fun(int& ref){
	ref = 100;
}
 
int main(){
	int a = 2;
	
	//自动转化为 int *const ref = &a; 指针常量是指针指向不可改变，也说明为什么引用不可更改 
	int& ref = a;
	ref = 5;         //自动转化为 *ref = 5
	cout << "a = " << a << endl; 
	cout << "ref = " << ref << endl;
	fun(a);
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl; 
	return 0;
}
*/



//2.6常量引用 
#include <iostream>
using namespace std;
//引用使用的场景，通常用来修饰形参
void showValue(const int& v){
	//  v = 20;   只读，不可修改 
	cout << "v = " << v << endl;
} 

int main(){
	//int & ref = 10;    //不可以直接赋值，引用本身需要一个合法的空间
	//加入const就可以，编译器会优化 
	const int& ref = 10;   //优化：int temp = 10; const int& ref = temp; 
	
	//ref = 100;  //加入const后不可以修改变量
	cout << ref << endl;
	
	//函数中利用常量引用用于放置操作修改实参
	int a = 10;
	showValue(a); 
} 
