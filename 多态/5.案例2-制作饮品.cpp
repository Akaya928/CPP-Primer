//��������
//������Ʒ�Ĵ�������Ϊ����ˮ-����-���뱭��-���븨��

//���ö�̬�ļ���ʵ�ֱ��������ṩ������Ʒ�ĳ�����࣬�ṩ�����������ȺͲ�ˮ

//��̬��̬��ʹ��:
//�����ָ��������� ָ���������   !��������

//#include<iostream>
//using namespace std;
//
//class Beverage_Base
//{
//public:
//
//	virtual void boilWater() = 0;
//
//	virtual void brew() = 0;
//
//	virtual void pourIntoCup() = 0;
//
//	virtual void addSeasonings() = 0;
//
//	virtual void finish() = 0;
//	
//	void makeDrink()
//	{
//		boilWater();
//		brew();
//		pourIntoCup();
//		addSeasonings();
//		finish();
//	}
//};
//
//class Coffee : public Beverage_Base
//{
//public:
//
//	void boilWater();
//
//	void brew();
//
//	void pourIntoCup();
//
//	void addSeasonings();
//
//	void finish();
//};
//
//void Coffee::boilWater()
//{
//	cout << "1.��ˮ�տ���86��-93��" << endl;
//}
//
//void Coffee::brew()
//{
//	cout << "2.���ݿ��ȶ�" << endl;
//}
//
//void Coffee::pourIntoCup()
//{
//	cout << "3.����3min����ֽ����" << endl;
//}
//
//void Coffee::addSeasonings()
//{
//	cout << "4.��\"��𡢽�֭��Ģ�������ơ����\"��ѡ����뱭��" << endl;
//}
//
//void Coffee::finish()
//{
//	cout << "\n\t�����������!" << endl;
//}
//
//class Tea : public Beverage_Base
//{
//public:
//
//	void boilWater();
//
//	void brew();
//
//	void pourIntoCup();
//
//	void addSeasonings();
//
//	void finish();
//};
//
//void Tea::boilWater()
//{
//	cout << "1.��ˮ�տ���80��-85��" << endl;
//}
//
//void Tea::brew()
//{
//	cout << "2.���ݲ�Ҷ" << endl;
//}
//
//void Tea::pourIntoCup()
//{
//	cout << "3.����5min����豭��" << endl;
//}
//
//void Tea::addSeasonings()
//{
//	cout << "4.��\"���ۡ���轡�ţ�̡���Ƥ\"��ѡ����뱭��" << endl;
//}
//
//void Tea::finish()
//{
//	cout << "\n\t��ˮ�������!" << endl;
//}
//
////������Ҳ���ԣ����ò����ֶ��ͷ��ڴ棬ָ�벻��ʵ�������󣬸�������
//void doWork(Beverage_Base* bB)//�����ڶ���new���Ķ���
//{
//	bB->makeDrink();
//
//	//new����Ҫ����Ա�ֶ��ͷſ��ٵĶ����ڴ�ռ䣬�����һֱ����������Żᱻ�������Զ��ͷŵ�
//	delete bB;
//}
//
//void test01()
//{
//	doWork(new Coffee);
//
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}