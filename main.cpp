#include <iostream>
#include <conio.h>
#include <cstring>
#include <list>
#include<cmath>
#include"OurFactory.h"
using namespace std;

#define ITEM_MAX 100
#define SETMENU_MAX 30
#define MEMVER_MAX 10

class item{
	private:
		int no;//��ţ����ڱ�ʶ 
		string name;//���� 
		int price;//�۸�
	public:
		item(string name="",int price=0)
		{
			this->name=name;
			this->price=price;
		}
		string getName(){
			return this->name;
		}
		int getPrice(){
			return this->price;
		}
		void notify();//�۸����ʱ����ʹ���в˵����� 
		void display();//��ӡ��Ʒ��Ϣ 
		void addin(){
			cout<<"�ͻ���"<<this.no<<"."<<this.name<<"�����˶�����"<<endl;
		}
};
class setMenu{
	private:
		int no;
		std::list<item*> itemList; //�ǵ�Ʒ����ϣ����νṹ 
		string name;
		int price;
	public:
		setMenu();//��ʼ���ײ� 
		string getName(){
			return this->name;
		}
		int getPrice(){//����ʵ��Ҫ��ѯ������ 
			return this->price;
		}
		void add(item leaf);//��ӽ�һЩ��Ʒ
		void delete();//ɾ��һЩ��Ʒ 
		void display();//չʾ�ײ����� 
		void addin(){
			cout<<"�ͻ���"<<this.no<<"."<<this.name<<"�����˶�����"<<endl;
			//������ѯ���������item��addin 
		}
};
class orderForm{
	private:
		std::list<item*> itemList; //�ǵ�Ʒ����ϣ����νṹ 
		std::list<setMenu*> setMenuList; //�ǵ�Ʒ����ϣ����νṹ 
		int price;
	public:
		order(){
			itemList=new int[ITEM_MAX];
			setMenuList=new int[SETMENU_MAX];//����� 
		}
		void updatePrice();//ÿ����Ʒ�۸���¶����м۸����  
		void order();//�㵥 
		void display();//��ӡ����
		int getDiscount();//�����ۿ�
		void checkout();//���� 
		void shopping();//�������̣�������ӡ�����������ۿۣ����˵�ȫ���̡� 
};

class user{
	private:
		int no;//��� 
		int shoppingPoints;//���� 
	public:
		void realSpeak(){
			cout<<"�û�˵���㵥" <<end;//Ϊ��������ģʽ��� 
		}
		void debitPoints(int points);//�۳�����
		void recoverPoints();//�ָ����� 
};

class member:user{//��ž͹���ģʽ�ɿ��� 
	
}
class adapter:animal{
	private:
		user* baby;
	public:
		adapter(user *u){
			this->baby=u;
		}
		void speak(){
			baby->realSpeak();
		}
};
class animal{//Ϊ��������û�취���޿� 
	public:
		animal();
		~animal();
		virtual void speak();
};
class store{
	public:
		addmember();//�����»�Ա������ģʽ 
};

class menu{
	public:
		void addSetMenu();//�������ײͣ�����ģʽ 
		void addItem();//�����µ�Ʒ 
		void display();//չʾ��Ʒ 
};

int revenue;//��Ӫҵ�� 
int allItem;//�����ܵĵ�Ʒ���� 
int allSetMenu;//�����ܵ��ײ����� 

void business(){
	//�����ж������û�or��ǰ���û�
	
	//��ȡ�û���Ϣor�������û� 
	
	//��������
	
	//���ö����ĵ�ͺ��� 
	
	cout<<"��ɴ˴�Ӫҵ��"<<endl; 
}

void update(){
	//���²˵�������ѡ����ò˵��ڲ���ʵ�� 
} 

void purchase(){
	//�Ҳ�֪��զ�ɹ����Լ�д��hxy 
}
int main()
{
//	int choice='1';
//	while(choice!='0')
//	{
//		cout<<"��ѡ��1.��Ӫ���� 2.�ɹ� 3.���²˵� 0.����Ӫҵ"<<endl;
//		choice=getch();
//		switch(choice)
//		{
//			case '1':
//				cout<<"��ʼ��Ӫ��"<<endl;
//				break;
//			case '0':
//				break;
//			case '2':
//				cout<<"��ʼ�û��ɹ���"<<endl;
//				break;
//          case '3':
//				cout<<"��ʼ���²˵���"<<endl;
//				break;
//		}
//	}

	item *food=new item("coffee",10);
	cout<<food->getName()<<endl;
	return 0;
}
