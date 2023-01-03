#include <iostream>
#include <string>
#define Max 1000 
using namespace std;

//ͨѶ¼��Ա�ṹ��
struct Person
{
	
	string P_name;          //���� 
	int P_age;              //���� 
	int P_sex;              //1 Ϊ�У�2ΪŮ
	string P_number;        //�绰
	string P_address;       //סַ	
	
}; 


//ͨѶ¼�ṹ��
struct  Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[Max]; 
	//ͨѶ¼��ǰ����Ա����
	int size; 
};
 
//�˵�����
void showMenu()
{
	
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "--------------------------" << endl;
} 

//�����ϵ�˺���
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs -> size == Max)
	{
		cout << "ͨѶ¼����, �޷����" << endl; 
	}
	else 
	{
		//�����ϵ��
		//void showMenu();	
		//����
		string name;
		cout << "�������½���ϵ�˵�������" << endl; 
		cin >> name;
		abs -> personArray[abs -> size].P_name = name;
		
		//����
		int age;
		cout << "�������½���ϵ�˵����䣺" << endl;
		cin >> age;
		abs -> personArray[abs -> size].P_age = age;
		
		//�Ա�
		int sex;
		cout << "�������½���ϵ���Ա𣺣�1->�У�2->Ů��" << endl;
		
		while(true)
		{
			//�������1��2�����˳�ѭ��
			//�������������������
			cin >> sex;
			if(sex == 1 || sex == 2)
			{
				abs ->  personArray[abs -> size].P_sex = sex;
				break;
			 } 
			cout << "������������������" << endl;
		 } 
		//�绰
		string number;
		cout << "�������½���ϵ�˵ĵ绰��" << endl;
		cin >> number;
		abs -> personArray[abs -> size].P_number = number;
		
		//��ַ 
		string address;
		cout << "�������½���ϵ�˵ĵ�ַ��" << endl;
		cin >> address;
		abs -> personArray[abs -> size].P_address = address;
		
		
		//����ͨѶ¼����
		abs -> size++; 
		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");
	} 
}



//��ʾͨѶ¼
void showPerson(Addressbooks *abs)
{
	if(abs -> size == 0)
	{
		cout << "ͨѶ¼����ϵ��Ϊ��" << endl;
	}
	else
	{
		for(int i = 0; i < abs -> size; i++)
		{
			cout << "������" << abs -> personArray[i].P_name << "\t";
			cout << "���䣺" << abs -> personArray[i].P_age <<"\t";
			cout << "�Ա�" << (abs -> personArray[i].P_sex == 1 ? "��" : "Ů") <<"\t";
			cout << "�绰��" << abs -> personArray[i].P_number <<"\t"; 
			cout << "��ַ��" << abs -> personArray[i].P_address << endl;  
		}
			
	}
	system("pause");
	system("cls");	
}


//�ж���ϵ���Ƿ���� 

int  isExist(Addressbooks *abs, string name)
{
	for(int i = 0; i < abs -> size; i++)
	{
		//�ҵ��û���
		if(abs -> personArray[i].P_name == name)
		return i; 
	}
	return -1;
}

//ɾ����ϵ��
void deletPerson(Addressbooks *abs) 
{
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret != -1)
	{
		//����ǰ�� 
		for (int i = ret;i < abs -> size; i++)
		{
			abs -> personArray[i] = abs -> personArray[i+1];
		}
	
		abs -> size--; 
		cout << "ɾ���ɹ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls"); 
	}
}

//������ϵ��
void findPerson(Addressbooks * abs) 
 {
 	cout << "�����������ϵ�˵�������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if(ret != -1)
	{
		cout << "����������:" << abs -> personArray[ret].P_name << "\t";
		cout << "����������:" << abs -> personArray[ret].P_age << "\t";
		cout << "�������Ա�:" << (abs -> personArray[ret].P_sex == 1 ? "��" : "Ů") << "\t";
		cout << "�����˵绰:" << abs -> personArray[ret].P_number << "\t";
		cout << "������סַ:" << abs -> personArray[ret].P_address << endl; 
	}
	else 
	{
		cout << "���޴���" << endl; 
	}
	system("pause");
	system("cls");
 }
 
 //�޸���ϵ����Ϣ
 void modifyPerson(Addressbooks *abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if(ret != -1)
	{
		//�޸����� 
		cout << "�������޸ĺ��������" << endl;
		string name;
		cin >> name;
		abs -> personArray[ret].P_name = name;
		//�޸�����
		cout << "�������޸ĺ�����䣺" << endl;
		int age;
		cin >> age;
		abs -> personArray[ret].P_age = age; 
		//�޸��Ա�
		cout << "�������޸ĺ���Ա𣺣�1->�У�2->Ů��" << endl;
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
				cout << "������������������" << endl;
			}
		}
		//�޸ĵ绰
		cout << "�������޸ĺ�ĵ绰��" << endl;
		string number;
		cin >> number;
		abs -> personArray[ret].P_number = number;
		//�޸�סַ 
		cout << "�������޸ĺ��סַ��" << endl;
		string address;
		cin >> address;
		abs -> personArray[ret].P_address = address;
		
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
} 
 
//�����ϵ��
void clearPerson(Addressbooks *abs)
{
	cout << "�����ٴ�ȷ���Ƿ����ͨѶ¼������" << endl;
	cout << "ȷ������ 1��ȡ������ 2" << endl;
	int num;
	while(true)
	{
		cin >> num;
		if(num == 1 || num ==2)
		{
			if(num == 1)
			{
				abs -> size = 0;
				cout << "��ճɹ���" << endl;
				break; 
			}
			if(num == 2)
			{
				cout << "ȡ���ɹ�" << endl;
				break;
			}
			}
		else
		{
			cout << "�����������������"  << endl;
		}
	}
	system("pause");
	system("cls"); 	
} 
 
int main()
{
	//����һ�� ͨѶ¼
	struct Addressbooks abs;
	abs.size = 0;	
	int select = 0;
	while (true)
	{
		//���ò˵����� 
		showMenu();
		cin >> select;
		if(select < 7 && select >= 0)
			{
				switch (select)
					{
						case 1 :                //1.�����ϵ��
					  	 	addPerson(&abs);
						 	break;
						case 2 :                //2.��ʾ��ϵ��
				       		showPerson(&abs);
							break;
						case 3 :                //3.ɾ����ϵ��
							deletPerson(&abs); 
							break;		
						case 4 :                //4.������ϵ��
						    findPerson(&abs); 
							break;
						case 5 :                //5.�޸���ϵ��
							modifyPerson(&abs);
							break;
						case 6 :                //6.�����ϵ��
							clearPerson(&abs);
							break;
						case 0 :                //0.�˳�ͨѶ¼
							cout << "��ӭ�´�ʹ��" << endl;
							system("pause");
							system("cls");
							return 0; 
							break;
					}
			}
		else
		{
			cout << "������������������" << endl;
			system("pause");
			system("cls"); 
		}
	}
		system("pause");
		system("cls");
	return 0;
} 
