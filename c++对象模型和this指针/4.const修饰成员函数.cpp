//1.常函数
//成员函数后加 const 即为常函数
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依然可以修改

//2.常对象
//声明对象前加const即称该对象为常对象
//常对象只能调用常函数


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	
//	//this指针的本质 是指针常量  指针指向是不可以修改的 相当于 Person * const this;
//	//1.常函数
//	//在成员函数后加const，修饰的是this指针，让指针指向的值也不可以修改
//	void showPerson() const
//	{
//		//this->m_Age = 100;
//		this->m_ID = 10010;
//	}
//
//	void func()
//	{
//		m_Age = 100;
//	}
//
//	int m_Age;
//	mutable int m_ID;//特殊变量，即使在常函数中，也可以修改这个值，需加上关键字 mutable
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
////2.常对象
//void test02()
//{
//	const Person p;//在对象前加const，变为常对象
//	//p.m_Age = 100;
//	p.m_ID = 10010;//m_ID是特殊值，在常对象下也可以修改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();//常对象不能调用普通成员函数，因为普通成员函数可以修改属性
//}
//
//int main()
//{
//
//
//	return 0;
//}