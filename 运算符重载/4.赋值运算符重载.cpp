//c++编译器至少给一个类添加4个函数
//1.默认构造函数(无参，函数体为零)
//2.默认析构函数(无参，函数体为零)
//3.默认拷贝构造函数，对属性进行值拷贝
//4.赋值运算符 operator= 对属性进行值拷贝

//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		m_Age = new int(age);//让指针m_Age去维护堆区的数据
//		
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	int showAge()
//	{
//		return *this->m_Age;
//	}
//
//	Person& operator=(Person& p);
//
//	~Person()
//	{
//		if (this->m_Age != NULL)
//		{
//			delete this->m_Age;
//			this->m_Age = NULL;
//		}
//		cout << "Person的析构函数的调用" << endl;
//	}
//
//private:
//
//	int* m_Age;//age的值需要开辟到堆区
//};
//
//Person& Person::operator=(Person& p)
//{
//	if (this->m_Age != NULL)
//	{
//		delete this->m_Age;
//		this->m_Age = NULL;
//	}
//	this->m_Age = new int(*p.m_Age);
//
//	return *this;
//}
//
//void test01()
//{
//	Person p1(19);
//	Person p2(20);
//	Person p3(30);
//	p2 = p1;//浅拷贝问题 会出现堆区内存被重复释放 所以需要进行赋值运算符的重载操作
//	p3 = p2 = p1;//链式编程 如:cout << ... << ... << ...	如果要链式调用，返回值就要作为下一个调用的参数，参数和返回值就必须要统一
//
//	cout << p1.showAge() << endl;
//	cout << p2.showAge() << endl;
//	cout << p3.showAge() << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}