//静态成员就是在成员变量和成员函数前加上关键字 static 称为静态成员

//静态成员分为:
//I.静态成员变量
//1.所有对象共享同一份数据
//2.在编译阶段分配内存
//3.类内声明，类外初始化




//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配空间   全局区
//	//3。类内声明，类外初始化操作
//	static int m_A;//类内声明
//
//	//静态成员变量也是有访问权限的
//private:
//
//	static int m_B;//类内声明
//};
//
//int Person::m_A = 100;//类外初始化
//int Person::m_B = 200;//类外初始化
//
////void test01()
////{
////	Person p;
////	cout << p.m_A << endl;
////
////	Person p1;
////	p1.m_A = 200;
////	cout << p.m_A;
////}
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员有两种访问方式
//
//	//1.通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//	//2.通过类名进行访问
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; 类外访问不到私有的静态成员变量
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}
 
//II.静态成员函数
//1.所有对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
//静态static成员函数它只属于类本身不属于每一个对象实例，独立存在(在编译阶段就分配了内存)。
//非静态成员，仅当实例化对象之后才存在。静态成员函数产生在前，非静态成员函数产生在后，静态函数无法访问一个不存在的东西。
//如果静态成员函数要访问非静态成员变量可以通过传入一个Person类

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//
//	static void func()
//	{
//		//静态成员函数只能访问静态成员变量
//		m_A = 100;
//		//m_B = 200; 静态成员函数不能访问非静态成员变量,无法区分到底是哪个对象的m_B属性
//		cout << "static void func()的调用" << endl;
//	}
//
//	static int m_A;//类内声明
//
//	int m_B;
//
//	//静态成员函数也是有访问权限的
//private:
//
//	static void func2()
//	{
//		cout << "static void func2的调用" << endl;
//	}
//};
//
//int Person::m_A = 300;//类外初始化
//
//void test03()
//{
//	//1.通过对象访问
//	Person p;
//	p.func();
//
//	//2.通过类名访问
//	Person::func();
//}
//
//void test04()
//{
//	//Person::func2(); 类外访问不到私有的静态成员函数
//}
//
//int main()
//{
//	test03();
//
//	return 0;
//}