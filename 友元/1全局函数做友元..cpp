//��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա
//��Ԫ�ؼ��� friend

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building
//{
//	//goodGuyȫ�ֺ�����Building��friend�����Է���Building�е�˽�г�Ա
//	friend void goodGuy(Building* building);
//
//public:
//
//	Building()//���캯�� ���г�ʼ������   Ĭ�Ϲ���
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//	string m_SittingRoom; //����
//
//private:
//
//	string m_BedRoom;
//};
//
//void goodGuy(Building* building)
//{
//	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ���" << building->m_BedRoom << endl;
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