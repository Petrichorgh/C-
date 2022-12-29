//格式
/*
#include<iostream>
using namespace std;
int main()
{
	
	return 0;
 }
*/ 






// 4.程序流程结构
//大学 
/*
#include<iostream>
using namespace std;
int main ()
{
	int core;
	cout << "请输入您的成绩："  << endl; 
	cin >> core;
	if(core>=600)
	{
		if(core>700)
		{
			cout << "恭喜您考入清华大学！" << endl;
		}
		else if(core>650)
		{
			cout << "恭喜您考入人大！" << endl;
		 } 
		else
		cout << "恭喜您考入一本大学！" << endl; 
	}
	else if(core>=500)
	{
		cout << "恭喜您考入二本大学！" << endl; 
	}
	else if(core>=400)
	{
		cout << "恭喜您考入三本大学！" << endl;
	} 
	else
	{
		cout << "很遗憾" << endl;
	 } 
	return 0;
}
*/

//三只小猪称体重
/* 
#include<iostream>
using namespace std;
int main()
{
	double w1,w2,w3,w4; 
	cout << "请分别输入三只小猪的重量 ：" << endl;
	cin >> w1 >> w2 >> w3;
	//cin >> w2;  
	//cin >> w3;  
	if(w1>w2)
	{
		if(w1>w3)
		{
			cout << "第一只小猪最重 " << endl;
		}
		else
		{
			cout << "第三只小猪最重 " << endl;
		}	
	}
	else if(w1<w2)
	{
		if(w2>w3)
		{
			cout << "第二只小猪最重 " << endl;
		}
		else
		{
			cout << "第三只小猪最重 " << endl;
		}	
	}
	return 0;
} 
*/


//三目运算
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 2, b = 3,c;
	c = (a > b ? a : b);
	cout << "c 的值 " << c << endl; 
	(a > b ? a : b) = 100;
	cout << "a 的值 " << a << endl; 
	cout << "b 的值 " << b << endl; 
	return 0;
 }
*/ 

//switch语句
//1.switch() 括号内只能为整型或字符型
//2.要有  break  , 否则程序将会一直执行下去 
//3.缺点不能判断区间 ，多条件判断时比for语句效率高 
/* 
#include<iostream>
using namespace std;
int main()
{
	int core1;
	cout << "请输入您打的分数：" << endl;
	cin >> core1;
	switch(core1)
	{
		case(10): cout << "你认为电影精彩" << endl;
		break;
		case(9): cout << "你认为电影精彩" << endl;
		break;
		case(8): cout << "你认为电影良" << endl;
		break;
		case(7): cout << "你认为电影良" << endl;
		break;
		case(6): cout << "你认为电影一般" << endl;
		break;
		default:  cout << "你认为烂片" << endl;
		break; 
	}
	 
	return 0;
 }
*/
 
 
 
 
 
//While 语句

/*
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	return 0;
 }
*/

//While 语句猜数字 
/* 
#include<iostream>
#include<ctime>
#include<stdlib.h >
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int c;
	cout << "请输入你所猜的数字"<< endl;
	while(1)
	{
		cin >> c;
		if(c > num)
		{
			cout << "偏大" << endl; 
		}
		else if (c < num)
		{
			cout << "偏小"<< endl; 
		}
		else 
		{
			cout << "正确" << endl;
			break; 
		}
	 } 
	return 0;
 }
*/




//do while 语句
/*
#include<iostream>
using namespace std;
int main()
{
	int num;
	do
	{
		cout << num << endl;
		num++;
	} 
	while (num<10);
	return 0;
 } 
*/


//continue   输出单数 
/* 
#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10 ; i++)
	{
		if(i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
} 
*/





//Go to
/*
#include<iostream>
using namespace std;
int main()
{
	cout << "1" << endl;
	cout << "2" << endl;
	goto FLAG;
	cout << "3" << endl;
	cout << "4" << endl;
	cout << "5" << endl;
	FLAG:
	cout << "6" << endl;
	
	return 0; 
}
*/
