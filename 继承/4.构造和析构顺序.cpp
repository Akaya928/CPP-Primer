//继承中的构造和析构顺序如下：
//先构造父类，在构造子类，析构的顺序与构造的顺序(栈，先进后出)相反

//#include<iostream>
//
//class Base
//{
//public:
//
//	Base()
//	{
//		std::cout << "Base构造函数的调用" << std::endl;
//	}
//
//	~Base()
//	{
//		std::cout << "Base析构函数的调用" << std::endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		std::cout << "Son构造函数的调用" << std::endl;
//	}
//
//	~Son()
//	{
//		std::cout << "Son析构函数的调用" << std::endl;
//	}
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}