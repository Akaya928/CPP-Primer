//友元的目的就是让一个函数或者类 访问另一个类中私有成员
//友元关键字 friend

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building
//{
//	//goodGuy全局函数是Building的friend，可以访问Building中的私有成员
//	friend void goodGuy(Building* building);
//
//public:
//
//	Building()//构造函数 进行初始化操作   默认构造
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//	string m_SittingRoom; //客厅
//
//private:
//
//	string m_BedRoom;
//};
//
//void goodGuy(Building* building)
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodGuy(&building);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}