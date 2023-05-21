//静态成员和非静态成员出现同名，两者的处理方式相同
//访问子类的同名成员，直接访问即可
//访问父类的同名成员，需要加上作用域

//静态成员出现同名时，有两种访问方式(1.通过对象访问  2.通过类名访问)

//#include<iostream>
//
//class Base
//{
//public:
//
//	static void func()
//	{
//		std::cin >> m_A;
//	}
//
//	static void func(int A)
//	{
//		m_A = A;
//	}
//
//	void func(double)
//	{
//		std::cout << "同名成员函数" << std::endl;
//	}
//
//	static int m_A;  //类内声明
//};
//
//int Base::m_A = 10;  //类外初始化
//
//class Son : public Base
//{
//public:
//
//	static void func()
//	{
//		std::cin >> m_A;
//	}
//
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
////I.同名静态成员变量的处理方式
//void test01()
//{
//	//1.通过对象访问
//	Son s1;
//	std::cout << "Son-m_A:" << s1.m_A << std::endl;
//	std::cout << "Base-m_A:" << s1.Base::m_A << std::endl;
//}
//
//void test02()
//{
//	//2.通过类名访问
//	Son s1;
//	std::cout << "Son-m_A:" << Son::m_A << std::endl;
//	//第一个::代表通过类名方式访问，第二个::代表访问父类作用域下
//	std::cout << "Base-m_A:" << Son::Base::m_A << std::endl;
//}
//
////II.同名静态成员函数的处理方式
////子类中出现和父类同名静态成员函数，也会隐藏掉父类中的所用同名成员函数(包括 静态和非静态的成员函数，以及重载函数)
////如果想访问父类中被隐藏的同名成员函数，需要加上作用域
//void test03()
//{
//	Son s1;
//	s1.func();
//	std::cout << "Son-func-m_A:" << s1.m_A << std::endl;
//
//	s1.Base::func();
//	std::cout << "Base-func()-m_A:" << s1.Base::m_A << std::endl;
//
//	Base::func(100);
//	std::cout << "Base-func(int)-m_A:" << Base::m_A << std::endl;
//
//	s1.Base::func(0.1);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	return 0;
//}