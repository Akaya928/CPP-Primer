//案例描述
//制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料

//利用多态的技术实现本案例，提供制作饮品的抽象基类，提供子类制作咖啡和茶水

//动态多态的使用:
//父类的指针或者引用 指向子类对象   !反复吟诵

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
//	cout << "1.把水烧开至86℃-93℃" << endl;
//}
//
//void Coffee::brew()
//{
//	cout << "2.冲泡咖啡豆" << endl;
//}
//
//void Coffee::pourIntoCup()
//{
//	cout << "3.静候3min后倒入纸杯中" << endl;
//}
//
//void Coffee::addSeasonings()
//{
//	cout << "4.从\"肉桂、姜汁、蘑菇、姜黄、麦加\"中选择加入杯中" << endl;
//}
//
//void Coffee::finish()
//{
//	cout << "\n\t咖啡制作完成!" << endl;
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
//	cout << "1.把水烧开至80℃-85℃" << endl;
//}
//
//void Tea::brew()
//{
//	cout << "2.冲泡茶叶" << endl;
//}
//
//void Tea::pourIntoCup()
//{
//	cout << "3.静候5min后倒入茶杯中" << endl;
//}
//
//void Tea::addSeasonings()
//{
//	cout << "4.从\"蜂蜜、枸杞、牛奶、陈皮\"中选择加入杯中" << endl;
//}
//
//void Tea::finish()
//{
//	cout << "\n\t茶水制作完成!" << endl;
//}
//
////用引用也可以，引用不用手动释放内存，指针不用实例化对象，各有优劣
//void doWork(Beverage_Base* bB)//接收在堆区new出的对象
//{
//	bB->makeDrink();
//
//	//new后，需要程序员手动释放开辟的堆区内存空间，否则会一直到程序结束才会被编译器自动释放掉
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