//3. 函数提高 
//3.1函数默认参数
/*
#include <iostream>
using namespace std;
 
//函数默认参数

//如果我们自己传入数据，就用自己的，否则就用默认值

//语法：返回值类型  函数名 （形参 = 默认值）{} 
int fun(int a = 1, int b = 2, int c = 3){
	return a + b + c;
}

int main(){
	fun();
	cout << fun(2,5,6) << endl;
	return 0;
}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//  int fun1(int a = 1, int b, int c){
//  	return a + b + c;
//  }


//2.如果函数声明有默认参数，函数实现就不能有默认参数
//	int fun2(int a = 1, int b = 2, int c = 3);
//
//	int fun2(int a, int b, int c){
//		return a + b + c;
//	}
//或 
//	int fun2(int a, int b, int c);
//	int fun2(int a = 1, int b = 2, int c = 3){
//		return a + b + c;
//	}

//错误示范
//	int fun2(int a = 1, int b = 2, int c = 3)； 
//	int fun2(int a = 1, int b = 2, int c = 3){
//		return a + b + c;
//	} 
*/


//3.2函数占位参数
/* 
#include <iostream>
using namespace std;
//占位参数
//返回值类型  函数名（数据类型）{}
//占位参数还可以有默认参数 
void fun(int a , int b){
	cout << "1" << endl;
}

int main(){
	fun(10,10);
	return 0;
} 
*/




//3.3函数重载
/* 
#include <iostream>
using namespace std;
//函数重载
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1.同一个作用域下
//2.函数名称相同 
//3.函数参数类型、个数、顺序 不同 
void fun(){
	cout << "fun的调用" << endl; 
}

void fun(int a){
	cout << "fun(int a)的调用" << endl; 
}

void fun(double a){
	cout << "fun(double a)的调用" << endl; 
}

void fun(double a, int b){
	cout << "fun(double a, int b)" << endl; 
}

void fun( int b,double a){
	cout << "fun(int b,double a)" << endl; 
}

//注意事项
//函数的返回值不可以作为函数重载的条件
// int fun();   与void fun() 产生歧义 

int main(){
	fun();
	fun(1);
	fun(3.14);
	fun(3.14,10);
	fun(10,3.14); 
}
*/



//3.3.2函数重载注意事项
#include <iostream>
using namespace std;

//1.引用作为重载的条件
void fun(int &a){
	cout << "fun(int &a)调用" << endl;     // int &a = 10  语法错误 
}

void fun(const int &a){
	cout << "fun(const int &a)调用" << endl;   //  const int &a = 10 相当于  temp = 10 , const int &a = temp  语法正确 
}

//2.函数重载碰到默认参数 
void fun1(int a, int b = 10){
	cout << "fun1(int a, int b)调用" << endl;   //  const int &a = 10 相当于  temp = 10 , const int &a = temp  语法正确 
}

void fun1(int a){
	cout << "fun1(int a)调用" << endl;   //  const int &a = 10 相当于  temp = 10 , const int &a = temp  语法正确 
}


int main(){
	//1 
	int a = 10;
	fun(a);   //fun(int &a)调用
	fun(10);  //fun(const int &a)调用 
	
	//2
	fun1(10);    //第一个 a = 10, b = 10    第二个 a =10 都可以调用  
	//所以建议不用函数默认值 
} 
