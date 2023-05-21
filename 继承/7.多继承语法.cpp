//c++允许一个类继承多个类
//语法：class 子类 : 继承方式 父类1 , 继承方式 父类2 ...
//多继承可能会引发父类中有同名成员出现，需要加作用域区分
//c++开发中不建议使用多继承

//#include<iostream>
//
//class Base1
//{
//public:
//
//	int m_A = 1000;
//};
//
//class Base2
//{
//
//public:
//
//	int showA()
//	{
//		return m_A;
//	}
//
//	int showB()
//	{
//		return m_B;
//	}
//
//protected:
//
//	int m_A = 2000;
//
//	int m_B = 3000;
//};
//
//class Base3
//{
//public:
//
//	int showB()
//	{
//		return m_B;
//	}
//
//	int showC()
//	{
//		return m_C;
//	}
//
//private:
//
//	int m_B = 4000;
//
//	int m_C = 5000;
//};
//
//class Son1 : public Base1, public Base2
//{
//public:
//
//	int m_S1 = 100;
//};
//
//void test01()
//{
//	Son1 s1;
//	std::cout << "Son1-m_S1:" << s1.m_S1 << std::endl;
//	std::cout << "Son1-Base1-m_A:" << s1.Base1::m_A << std::endl;
//	std::cout << "Son1-Base2-m_A:" << s1.Base2::showA() << std::endl;
//}
//
//class Son2 : public Base2, public Base3
//{
//public:
//
//	int m_S2 = 200;
//};
//
//void test02()
//{
//	Son2 s2;
//	std::cout << "Son2-m_S2:" << s2.m_S2 << std::endl;
//	std::cout << "Son2-Base2-m_A:" << s2.showA() << std::endl;
//	std::cout << "Son2-Base2-m_B:" << s2.Base2::showB() << std::endl;
//	std::cout << "Son2-Base3-m_B:" << s2.Base3::showB() << std::endl;
//	std::cout << "Son2-Base3-m_C:" << s2.showC() << std::endl;
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	return 0;
//}