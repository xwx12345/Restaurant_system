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
		int no;//编号，用于辨识 
		string name;//名称 
		int price;//价格
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
		void notify();//价格更新时调用使所有菜单更新 
		void display();//打印商品信息 
		void addin(){
			cout<<"客户将"<<this.no<<"."<<this.name<<"加入了订单！"<<endl;
		}
};
class setMenu{
	private:
		int no;
		std::list<item*> itemList; //是单品的组合，树形结构 
		string name;
		int price;
	public:
		setMenu();//初始化套餐 
		string getName(){
			return this->name;
		}
		int getPrice(){//可能实际要轮询计算下 
			return this->price;
		}
		void add(item leaf);//添加进一些单品
		void delete();//删除一些单品 
		void display();//展示套餐内容 
		void addin(){
			cout<<"客户将"<<this.no<<"."<<this.name<<"加入了订单！"<<endl;
			//树形轮询输出，调用item的addin 
		}
};
class orderForm{
	private:
		std::list<item*> itemList; //是单品的组合，树形结构 
		std::list<setMenu*> setMenuList; //是单品的组合，树形结构 
		int price;
	public:
		order(){
			itemList=new int[ITEM_MAX];
			setMenuList=new int[SETMENU_MAX];//待完成 
		}
		void updatePrice();//每次商品价格更新都进行价格更新  
		void order();//点单 
		void display();//打印订单
		int getDiscount();//计算折扣
		void checkout();//结账 
		void shopping();//完整过程，包括打印订单，计算折扣，结账的全过程。 
};

class user{
	private:
		int no;//编号 
		int shoppingPoints;//积分 
	public:
		void realSpeak(){
			cout<<"用户说话点单" <<end;//为了适配器模式编的 
		}
		void debitPoints(int points);//扣除积分
		void recoverPoints();//恢复积分 
};

class member:user{//大概就工厂模式吧看看 
	
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
class animal{//为了适配器没办法，哭哭 
	public:
		animal();
		~animal();
		virtual void speak();
};
class store{
	public:
		addmember();//创建新会员，工厂模式 
};

class menu{
	public:
		void addSetMenu();//创建新套餐，工厂模式 
		void addItem();//创建新单品 
		void display();//展示菜品 
};

int revenue;//总营业额 
int allItem;//现在总的单品数量 
int allSetMenu;//现在总的套餐数量 

void business(){
	//首先判断是新用户or以前的用户
	
	//获取用户信息or创建新用户 
	
	//创建订单
	
	//调用订单的点餐函数 
	
	cout<<"完成此次营业！"<<endl; 
}

void update(){
	//更新菜单，根据选项调用菜单内部的实现 
} 

void purchase(){
	//我不知道咋采购，自己写吧hxy 
}
int main()
{
//	int choice='1';
//	while(choice!='0')
//	{
//		cout<<"请选择：1.运营餐厅 2.采购 3.更新菜单 0.结束营业"<<endl;
//		choice=getch();
//		switch(choice)
//		{
//			case '1':
//				cout<<"开始运营！"<<endl;
//				break;
//			case '0':
//				break;
//			case '2':
//				cout<<"开始用户采购！"<<endl;
//				break;
//          case '3':
//				cout<<"开始更新菜单！"<<endl;
//				break;
//		}
//	}

	item *food=new item("coffee",10);
	cout<<food->getName()<<endl;
	return 0;
}
