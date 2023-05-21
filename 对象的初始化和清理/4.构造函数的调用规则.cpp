//构造函数的调用规则
//1创建一个类，c++编译器会给每个类都添加至少3个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝函数（只拷贝）
//2如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
//3如果我们写了拷贝构造函数，编译器就不再提供默认构造 以及 有参构造

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person默认构造函数的调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person有参构造函数的调用" << endl;
//		m_age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝函数的调用" << endl;
//		m_age = p.m_age;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//
//	int m_age;
//};
//
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << p2.m_age << endl;
//}
//
//void test02()//测试5.2 注释掉默认构造和拷贝构造
//{
//	Person p3;
//	Person p4(p3);
//}
//
//void test03()//测试5.3 注释掉默认构造和有参构造
//{
//	Person p5;
//	Person p6(20);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}