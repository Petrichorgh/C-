//��ʽ
/*
#include<iostream>
using namespace std;
int main()
{
	
	return 0;
 }
*/ 






// 4.�������̽ṹ
//��ѧ 
/*
#include<iostream>
using namespace std;
int main ()
{
	int core;
	cout << "���������ĳɼ���"  << endl; 
	cin >> core;
	if(core>=600)
	{
		if(core>700)
		{
			cout << "��ϲ�������廪��ѧ��" << endl;
		}
		else if(core>650)
		{
			cout << "��ϲ�������˴�" << endl;
		 } 
		else
		cout << "��ϲ������һ����ѧ��" << endl; 
	}
	else if(core>=500)
	{
		cout << "��ϲ�����������ѧ��" << endl; 
	}
	else if(core>=400)
	{
		cout << "��ϲ������������ѧ��" << endl;
	} 
	else
	{
		cout << "���ź�" << endl;
	 } 
	return 0;
}
*/

//��ֻС�������
/* 
#include<iostream>
using namespace std;
int main()
{
	double w1,w2,w3,w4; 
	cout << "��ֱ�������ֻС������� ��" << endl;
	cin >> w1 >> w2 >> w3;
	//cin >> w2;  
	//cin >> w3;  
	if(w1>w2)
	{
		if(w1>w3)
		{
			cout << "��һֻС������ " << endl;
		}
		else
		{
			cout << "����ֻС������ " << endl;
		}	
	}
	else if(w1<w2)
	{
		if(w2>w3)
		{
			cout << "�ڶ�ֻС������ " << endl;
		}
		else
		{
			cout << "����ֻС������ " << endl;
		}	
	}
	return 0;
} 
*/


//��Ŀ����
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 2, b = 3,c;
	c = (a > b ? a : b);
	cout << "c ��ֵ " << c << endl; 
	(a > b ? a : b) = 100;
	cout << "a ��ֵ " << a << endl; 
	cout << "b ��ֵ " << b << endl; 
	return 0;
 }
*/ 

//switch���
//1.switch() ������ֻ��Ϊ���ͻ��ַ���
//2.Ҫ��  break  , ������򽫻�һֱִ����ȥ 
//3.ȱ�㲻���ж����� ���������ж�ʱ��for���Ч�ʸ� 
/* 
#include<iostream>
using namespace std;
int main()
{
	int core1;
	cout << "����������ķ�����" << endl;
	cin >> core1;
	switch(core1)
	{
		case(10): cout << "����Ϊ��Ӱ����" << endl;
		break;
		case(9): cout << "����Ϊ��Ӱ����" << endl;
		break;
		case(8): cout << "����Ϊ��Ӱ��" << endl;
		break;
		case(7): cout << "����Ϊ��Ӱ��" << endl;
		break;
		case(6): cout << "����Ϊ��Ӱһ��" << endl;
		break;
		default:  cout << "����Ϊ��Ƭ" << endl;
		break; 
	}
	 
	return 0;
 }
*/
 
 
 
 
 
//While ���

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

//While �������� 
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
	cout << "�����������µ�����"<< endl;
	while(1)
	{
		cin >> c;
		if(c > num)
		{
			cout << "ƫ��" << endl; 
		}
		else if (c < num)
		{
			cout << "ƫС"<< endl; 
		}
		else 
		{
			cout << "��ȷ" << endl;
			break; 
		}
	 } 
	return 0;
 }
*/




//do while ���
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


//continue   ������� 
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
