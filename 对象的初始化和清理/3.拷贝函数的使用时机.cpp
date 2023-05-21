//拷贝函数的使用时机

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//	}
//	
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_age;
//};
//
////1.使用一个已经创建完毕的对象去初始化一个新对象
//void test01()
//{
//	Person p1(18);
//	Person p2(p1);
//
//	cout << p2.m_age << endl;
//}
//
////2.值传递的方式给函数参数传值
//void doWork(Person p)//值传递 会先拷贝一份数据
//{
//
//}
//
//void test02()
//{
//	Person p3;
//	doWork(p3);//实参传给形参
//}
//
////3.值方式返回局部对象
//Person doWork2()
//{
//	Person p4;
//	cout << &p4 << endl;
//
//	return p4;
//}
//
//void test03()
//{
//	Person p5 = doWork2();
//	cout << &p5 << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//
//	return 0;
//}