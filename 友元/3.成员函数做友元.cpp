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
//	void visit01();   //��visit01�������Է���Building�е�˽�г�Ա
//	void visit02();   //��visit02���������Է���Building�е�˽�г�Ա
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
//	m_BedRoom = "����";
//	m_LivngRoom = "����";
//}
//
//GoodGuy::GoodGuy()
//{
//	building = new Building;
//}
//
//void GoodGuy::visit01()
//{
//	cout << "�û������ڷ���" << building->m_LivngRoom << endl;
//	cout << "�û������ڷ���" << building->m_BedRoom << endl;
//}
//
//void GoodGuy::visit02()
//{
//	cout << "�û������ڷ���" << building->m_LivngRoom << endl;
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