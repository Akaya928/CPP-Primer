//在多态中，通常父类中的虚函数的实现时毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数

//纯虚函数语法:  virtual 返回值类型 函数名 (参数列表) = 0;
//当类中有了纯虚函数，这个类也被称为 抽象类

//抽象类的特点
//1.无法实例化对象
//2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类

//#include<iostream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
////纯虚函数和抽象类
//class Base
//{
//public:
//
//	//纯虚函数
//	//只要有一个纯虚函数，这个类就称为抽象类
//	//抽象类的特点:
//	//1.无法实例化对象
//	//2.抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//
//	virtual void func2() = 0;
//};
//
//class Son : public Base
//{
//public:
//
//	void func()
//	{
//		cout << "func的调用" << endl;
//	}
//
//	void func2()
//	{
//		cout << "func2的调用" << endl;
//	}
//};
//
//void doFunc2(Base& base)
//{
//	base.func2();
//}
//
//void test01()
//{
//	//base b1; 抽象类是无法实例化对象的
//	//new base; 抽象类是无法实例化对象的
//
//	Son s1;//子类必须要重写父类中的纯虚函数，否则也属于抽象类
//
//	//动态多态的使用方法:
//	//1.父类的指针指向子类对象
//	Base* base = new Son;
//	base->func();
//
//	//2.父类的引用指向子类对象
//	doFunc2(s1);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}