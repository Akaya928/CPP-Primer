//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building;
//
//class GoodGuy
//{
//public:
//
//	GoodGuy();
//
//	void visit01();   //让visit01函数可以访问Building中的私有成员
//	void visit02();   //让visit02函数不可以访问Building中的私有成员
//
//	Building* building;
//};
//
//class Building
//{
//
//	friend void GoodGuy::visit01();
//
//public:
//
//	Building();
//
//	string m_LivngRoom;
//
//private:
//
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	m_BedRoom = "卧室";
//	m_LivngRoom = "客厅";
//}
//
//GoodGuy::GoodGuy()
//{
//	building = new Building;
//}
//
//void GoodGuy::visit01()
//{
//	cout << "好基友正在访问" << building->m_LivngRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void GoodGuy::visit02()
//{
//	cout << "好基友正在访问" << building->m_LivngRoom << endl;
//}
//
//void test01()
//{
//	GoodGuy g;
//	g.visit02();
//}
//
//void test02()
//{
//	GoodGuy g;
//	g.visit01();
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}