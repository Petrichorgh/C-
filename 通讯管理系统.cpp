#include <iostream>
#include <string>
#define Max 1000 
using namespace std;

//通讯录人员结构体
struct Person
{
	
	string P_name;          //姓名 
	int P_age;              //年龄 
	int P_sex;              //1 为男，2为女
	string P_number;        //电话
	string P_address;       //住址	
	
}; 


//通讯录结构体
struct  Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[Max]; 
	//通讯录当前的人员个数
	int size; 
};
 
//菜单界面
void showMenu()
{
	
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "--------------------------" << endl;
} 

//添加联系人函数
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否已满
	if (abs -> size == Max)
	{
		cout << "通讯录已满, 无法添加" << endl; 
	}
	else 
	{
		//添加联系人
		//void showMenu();	
		//姓名
		string name;
		cout << "请输入新建联系人的姓名：" << endl; 
		cin >> name;
		abs -> personArray[abs -> size].P_name = name;
		
		//年龄
		int age;
		cout << "请输入新建联系人的年龄：" << endl;
		cin >> age;
		abs -> personArray[abs -> size].P_age = age;
		
		//性别
		int sex;
		cout << "请输入新建联系人性别：（1->男，2->女）" << endl;
		
		while(true)
		{
			//如果输入1或2可以退出循环
			//如果输入有误，重新输入
			cin >> sex;
			if(sex == 1 || sex == 2)
			{
				abs ->  personArray[abs -> size].P_sex = sex;
				break;
			 } 
			cout << "输入有误，请重新输入" << endl;
		 } 
		//电话
		string number;
		cout << "请输入新建联系人的电话：" << endl;
		cin >> number;
		abs -> personArray[abs -> size].P_number = number;
		
		//地址 
		string address;
		cout << "请输入新建联系人的地址：" << endl;
		cin >> address;
		abs -> personArray[abs -> size].P_address = address;
		
		
		//更新通讯录人数
		abs -> size++; 
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");
	} 
}



//显示通讯录
void showPerson(Addressbooks *abs)
{
	if(abs -> size == 0)
	{
		cout << "通讯录里联系人为空" << endl;
	}
	else
	{
		for(int i = 0; i < abs -> size; i++)
		{
			cout << "姓名：" << abs -> personArray[i].P_name << "\t";
			cout << "年龄：" << abs -> personArray[i].P_age <<"\t";
			cout << "性别：" << (abs -> personArray[i].P_sex == 1 ? "男" : "女") <<"\t";
			cout << "电话：" << abs -> personArray[i].P_number <<"\t"; 
			cout << "地址：" << abs -> personArray[i].P_address << endl;  
		}
			
	}
	system("pause");
	system("cls");	
}


//判断联系人是否存在 

int  isExist(Addressbooks *abs, string name)
{
	for(int i = 0; i < abs -> size; i++)
	{
		//找到用户名
		if(abs -> personArray[i].P_name == name)
		return i; 
	}
	return -1;
}

//删除联系人
void deletPerson(Addressbooks *abs) 
{
	cout << "请输入要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret != -1)
	{
		//数据前移 
		for (int i = ret;i < abs -> size; i++)
		{
			abs -> personArray[i] = abs -> personArray[i+1];
		}
	
		abs -> size--; 
		cout << "删除成功" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls"); 
	}
}

//查找联系人
void findPerson(Addressbooks * abs) 
 {
 	cout << "请输入查找联系人的姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if(ret != -1)
	{
		cout << "查找人姓名:" << abs -> personArray[ret].P_name << "\t";
		cout << "查找人年龄:" << abs -> personArray[ret].P_age << "\t";
		cout << "查找人性别:" << (abs -> personArray[ret].P_sex == 1 ? "男" : "女") << "\t";
		cout << "查找人电话:" << abs -> personArray[ret].P_number << "\t";
		cout << "查找人住址:" << abs -> personArray[ret].P_address << endl; 
	}
	else 
	{
		cout << "查无此人" << endl; 
	}
	system("pause");
	system("cls");
 }
 
 //修改联系人信息
 void modifyPerson(Addressbooks *abs)
{
	cout << "请输入需要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if(ret != -1)
	{
		//修改姓名 
		cout << "请输入修改后的姓名：" << endl;
		string name;
		cin >> name;
		abs -> personArray[ret].P_name = name;
		//修改年龄
		cout << "请输入修改后的年龄：" << endl;
		int age;
		cin >> age;
		abs -> personArray[ret].P_age = age; 
		//修改性别
		cout << "请输入修改后的性别：（1->男，2->女）" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if(sex == 1 || sex ==2)
			{
				abs -> personArray[ret].P_sex = sex;
				break; 
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}
		//修改电话
		cout << "请输入修改后的电话：" << endl;
		string number;
		cin >> number;
		abs -> personArray[ret].P_number = number;
		//修改住址 
		cout << "请输入修改后的住址：" << endl;
		string address;
		cin >> address;
		abs -> personArray[ret].P_address = address;
		
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
} 
 
//清空联系人
void clearPerson(Addressbooks *abs)
{
	cout << "请您再次确认是否清空通讯录！！！" << endl;
	cout << "确认输入 1，取消输入 2" << endl;
	int num;
	while(true)
	{
		cin >> num;
		if(num == 1 || num ==2)
		{
			if(num == 1)
			{
				abs -> size = 0;
				cout << "清空成功！" << endl;
				break; 
			}
			if(num == 2)
			{
				cout << "取消成功" << endl;
				break;
			}
			}
		else
		{
			cout << "输入错误请重新输入"  << endl;
		}
	}
	system("pause");
	system("cls"); 	
} 
 
int main()
{
	//创建一个 通讯录
	struct Addressbooks abs;
	abs.size = 0;	
	int select = 0;
	while (true)
	{
		//调用菜单函数 
		showMenu();
		cin >> select;
		if(select < 7 && select >= 0)
			{
				switch (select)
					{
						case 1 :                //1.添加联系人
					  	 	addPerson(&abs);
						 	break;
						case 2 :                //2.显示联系人
				       		showPerson(&abs);
							break;
						case 3 :                //3.删除联系人
							deletPerson(&abs); 
							break;		
						case 4 :                //4.查找联系人
						    findPerson(&abs); 
							break;
						case 5 :                //5.修改联系人
							modifyPerson(&abs);
							break;
						case 6 :                //6.清空联系人
							clearPerson(&abs);
							break;
						case 0 :                //0.退出通讯录
							cout << "欢迎下次使用" << endl;
							system("pause");
							system("cls");
							return 0; 
							break;
					}
			}
		else
		{
			cout << "输入有误，请重新输入" << endl;
			system("pause");
			system("cls"); 
		}
	}
		system("pause");
		system("cls");
	return 0;
} 
