//�ṹ��
/* 
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	}s3;
int main()
{
	struct Student s1;
	s1.name = "����  "; 
	s1.age = 20   ;
	s1.score = 100  ; 
	cout << "����:" << s1.name  << "����:" << s1.age   << "  �ɼ���"  << s1.score  << endl;
	
	Student s2 = {"����  " , 18  , 90};  //struct ����ʡ�� 
	cout << "����:" << s2.name  << "����:" << s2.age   << "  �ɼ���"  << s2.score  << endl;
	
	
	s3.name = "����  "; 
	s3.age = 23   ;
	s3.score = 120  ;
	cout << "����:" << s3.name  << "����:" << s3.age   << "  �ɼ���"  << s3.score  << endl;
	return 0;
 } 
*/


//�ṹ������ 
/*
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	}s3;
int main()
{
	struct Student arrstu[3]
	{
		{"����" , 18 , 100},
		{"����" , 20 , 90},
		{"����" , 21 , 80}
	};
	for (int i = 0; i < 3; i++)
	{
			cout << "����:" << arrstu[i].name  
			<< "����:" << arrstu[i].age   
			<< "  �ɼ���"  << arrstu[i].score  << endl;
	}
	
	return 0;
 }  
*/



//�ṹ��ָ��
/*
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	}s3;
int main()
{
	struct Student s1 = {"����" , 18 , 100};
	

	struct Student * p = &s1;
	
	p -> name = "����" ; 
			cout << "����:" << p -> name  
			<< "����:" << p -> age   
			<< "  �ɼ���"  << p -> score  << endl;
	
	
	return 0;
}
*/


//�ṹ��Ƕ��
/*
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	};
	struct Teacher
	{
		int id;
		string name;
		int age;
		struct Student s1; 
	};
	  
int main()
{
	struct Teacher t = {12138, "����" , 58 , "С��" , 18 ,100};
	
	cout << "����:" << t.name  
		 << "����:" << t.age   
		 << "  ID��"  << t.id  
		 << "����ѧ�� ��" << t.s1.name
		 << "ѧ������" << t.s1.age
		 << "ѧ���ɼ�"  << t.s1.score
		 << endl;
	
	
	return 0;
}
*/


/*
//�ṹ������������
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	};
//ֵ���ݣ��Ӻ����ı���ֵ������������	
void printStudent(struct Student s)
	{
		s.age = 19;
		cout << "�Ӻ�������:" <<s.name  
		 << "����:" << s.age    
		 << "ѧ���ɼ�"  << s.score
		 << endl;
	}
	
//��ַ���ݣ��Ӻ����ı���ֵ��������Ҳ�ı� 
//void printStudent1(struct Student *p)
//	{
//		
//		p -> age = 66;
//		cout << "�Ӻ�������:" <<p -> name  
//		 << "����:" << p -> age    
//		 << "ѧ���ɼ�"  << p -> score
//		 << endl;
//	}

		  
int main()
{
	struct Student s = {"����" , 18 , 100};
	
	printStudent(s);
	//printStudent1(&s);
	cout << "����������:" <<s.name  
		 << "����:" << s.age    
		 << "ѧ���ɼ�"  << s.score
		 << endl;
	
	
	return 0;
}
*/



//�ṹ����const
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	};

	

void printStudent1(const Student *p)
	{
		
		
		cout << "�Ӻ�������:" <<p -> name  
		 << "����:" << p -> age    
		 << "ѧ���ɼ�"  << p -> score
		 << endl;
	}

		  
int main()
{
	struct Student s = {"����" , 18 , 100};
	
	printStudent1(&s);
	cout << "����������:" <<s.name  
		 << "����:" << s.age    
		 << "ѧ���ɼ�"  << s.score
		 << endl;
	
	
	return 0; 
}
