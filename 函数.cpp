#include<iostream>
using namespace std;
int add(int num1,int num2)
{
	int sum =  num1 +  num2;
	cout << sum << endl;
	return sum;
}
int main()
{
	int a = 2, b = 3;
	add(a,b);
	 
	return 0;
}
