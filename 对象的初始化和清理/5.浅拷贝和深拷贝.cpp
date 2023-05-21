//浅拷贝和深拷贝
//如果用编译器提供的拷贝构造函数，会做浅拷贝操作
//浅拷贝带来的问题是堆区的内存重复释放
//浅拷贝的问题要利用深拷贝进行解决
//如果属性有在堆区开辟的，需要自己实现拷贝构造函数 避免浅拷贝带来的问题

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
//	Person(int age, int height)
//	{
//		cout << "Person有参构造函数的调用" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;//编译器默认实现的就是这行代码
//		//深拷贝操作
//		m_height = new int(*p.m_height);
//	}
//
//	~Person()//析构代码，将堆区开辟的数据做释放操作
//	{
//		cout << "Person析构函数的调用" << endl;
//		//将堆区开辟的数据做释放操作
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//	}
//
//	int m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	Person p1(20,160);
//	Person p2(p1);
//
//	cout << p1.m_age << "\t" << *p1.m_height << endl;
//	cout << p2.m_age << "\t" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}