////成员变量 和 成员函数 分开存储
//
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	int m_A;//非静态成员变量   属于类的对象上
//
//	static int m_B;//静态成员变量   不属于类的对象上
//
//	void func();//非静态成员函数   不属于类的对象上
//
//	static void func1();//静态成员函数   不属于类的对象上
//};
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为: 1
//	//c++编译器会给每个空对象也分配一个字节的空间,是为了区分空对象在占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p1;
//	cout << sizeof(p1) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}