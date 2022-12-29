//结构体
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
	s1.name = "张三  "; 
	s1.age = 20   ;
	s1.score = 100  ; 
	cout << "姓名:" << s1.name  << "年龄:" << s1.age   << "  成绩："  << s1.score  << endl;
	
	Student s2 = {"李四  " , 18  , 90};  //struct 可以省略 
	cout << "姓名:" << s2.name  << "年龄:" << s2.age   << "  成绩："  << s2.score  << endl;
	
	
	s3.name = "王五  "; 
	s3.age = 23   ;
	s3.score = 120  ;
	cout << "姓名:" << s3.name  << "年龄:" << s3.age   << "  成绩："  << s3.score  << endl;
	return 0;
 } 
*/


//结构体数组 
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
		{"张三" , 18 , 100},
		{"李四" , 20 , 90},
		{"王五" , 21 , 80}
	};
	for (int i = 0; i < 3; i++)
	{
			cout << "姓名:" << arrstu[i].name  
			<< "年龄:" << arrstu[i].age   
			<< "  成绩："  << arrstu[i].score  << endl;
	}
	
	return 0;
 }  
*/



//结构体指针
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
	struct Student s1 = {"张三" , 18 , 100};
	

	struct Student * p = &s1;
	
	p -> name = "李四" ; 
			cout << "姓名:" << p -> name  
			<< "年龄:" << p -> age   
			<< "  成绩："  << p -> score  << endl;
	
	
	return 0;
}
*/


//结构体嵌套
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
	struct Teacher t = {12138, "老张" , 58 , "小李" , 18 ,100};
	
	cout << "姓名:" << t.name  
		 << "年龄:" << t.age   
		 << "  ID："  << t.id  
		 << "他的学生 ：" << t.s1.name
		 << "学生年龄" << t.s1.age
		 << "学生成绩"  << t.s1.score
		 << endl;
	
	
	return 0;
}
*/


/*
//结构体做函数参数
#include <iostream>
#include <string> 
using namespace std;
	struct Student
	{
		string name;
		int age;
		int score;
	};
//值传递，子函数改变数值，主函数不变	
void printStudent(struct Student s)
	{
		s.age = 19;
		cout << "子函数姓名:" <<s.name  
		 << "年龄:" << s.age    
		 << "学生成绩"  << s.score
		 << endl;
	}
	
//地址传递，子函数改变数值，主函数也改变 
//void printStudent1(struct Student *p)
//	{
//		
//		p -> age = 66;
//		cout << "子函数姓名:" <<p -> name  
//		 << "年龄:" << p -> age    
//		 << "学生成绩"  << p -> score
//		 << endl;
//	}

		  
int main()
{
	struct Student s = {"张三" , 18 , 100};
	
	printStudent(s);
	//printStudent1(&s);
	cout << "主函数姓名:" <<s.name  
		 << "年龄:" << s.age    
		 << "学生成绩"  << s.score
		 << endl;
	
	
	return 0;
}
*/



//结构体中const
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
		
		
		cout << "子函数姓名:" <<p -> name  
		 << "年龄:" << p -> age    
		 << "学生成绩"  << p -> score
		 << endl;
	}

		  
int main()
{
	struct Student s = {"张三" , 18 , 100};
	
	printStudent1(&s);
	cout << "主函数姓名:" <<s.name  
		 << "年龄:" << s.age    
		 << "学生成绩"  << s.score
		 << endl;
	
	
	return 0; 
}
