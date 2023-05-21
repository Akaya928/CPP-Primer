//总结：
//1.子类对象可以直接访问到子类中的同名成员
//2.子类对象加作用域可以访问到父类中的同名函数
//3.当子类与父类拥有同名的成员函数，子类会隐蔽掉父类中的同名成员函数，加上作用域就可以访问到非类中的同名成员函数

//#include<iostream>
//
//class Base
//{
//public:
//
//	void Func()
//	{
//		std::cout << "Base-Func()" << std::endl;
//	}
//
//	void Func(int)
//	{
//		std::cout << "Base-Func(int)" << std::endl;
//	}
//
//	void setM_A()
//	{
//		std::cout << "Please enter an integer";
//		std::cin >> this->m_A;
//	}
//
//	int showM_A()
//	{
//		return this->m_A;
//	}
//
//	int m_B = 101;
//
//private:
//
//	int m_A = 100;
//};
//
//class Son : public Base
//{
//public:
//
//	void Func()
//	{
//		std::cout << "Son-Func()" << std::endl;
//	}
//
//	void setM_A()
//	{
//		std::cout << "Please enter an integer";
//		std::cin >> this->m_A;
//	}
//
//	int showM_A()
//	{
//		return this->m_A;
//	}
//
//	int m_B = 201;
//
//private:
//
//	int m_A = 200;
//};
//
////同名成员属性处理
//void test01()
//{
//	Son s1;
//
//	//直接调用 调用的是子类中的同名成员
//	std::cout << s1.m_B << std::endl;
//	//如果从子类对象 访问父类中同名成员，需要加作用域
//	std::cout << s1.Base::m_B << std::endl;
//}
//
////同名成员函数处理	同test01()
//void test02()
//{
//	Son s1;
//	s1.setM_A();
//	std::cout << s1.showM_A() << std::endl;
//	std::cout << s1.Base::showM_A() << std::endl;
//
//	s1.Base::setM_A();
//	std::cout << s1.showM_A() << std::endl;
//	std::cout << s1.Base::showM_A() << std::endl;
//
//}
//
////如果子类中出现和父类同名的函数，子类的同名函数会隐蔽掉父类中所有的同名函数(所有：代表了所有的重载的版本)
////如果想访问到父类中被隐蔽掉的同名函数 需要加上作用域
//void test03()
//{
//	Son s1;
//
//	s1.Base::Func();
//	s1.Base::Func(1);
//	s1.Func();
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