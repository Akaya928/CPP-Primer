//概念：
//两个派生类继承同一个基类
//又有某个类同时继承这两个派生类
//这种继承被称为菱形继承，或者钻石继承

//当菱形继承，两个父类拥有相同的成员时，需要加以作用域区分

//菱形继承带来的主要问题：
//子类继承两份相同的数据，导致资源浪费以及毫无意义

//解决方法：
//利用虚继承可以解决菱形的继承问题(继承之前，加上关键字 virtual 变为虚继承)

//#include<iostream>
//
//class Base
//{
//public:
//
//	int m_Age = 10;
//};
//
////利用虚继承 解决菱形继承的问题
////继承之前，加上关键字 virtual 变为虚继承
////Base类称为 虚基类
//class A : virtual public Base {};
//
//class B : virtual public Base {};
//
//class AB : public A, public B {};
//
//void test01()
//{
//	AB ab;
//	ab.A::m_Age = 20;
//	ab.B::m_Age = 30;
//	//当菱形继承时，两个父类拥有相同的成员时，需要加以作用域区分
//	std::cout << "ab-A:" << ab.A::m_Age << std::endl;
//	std::cout << "ab-B:" << ab.B::m_Age << std::endl;
//	std::cout << "ab-B:" << ab.m_Age << std::endl;
//
//	//这份数据 按需求只要有一份数据即可，菱形继承导致数据有两份，资源浪费
//}
//
//void test02()
//{
//	
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}