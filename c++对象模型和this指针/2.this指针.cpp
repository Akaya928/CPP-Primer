//前提：this 只能用于非静态成员函数内部

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//this指针指向 被调用的成员函数的所属对象
//		this->age = age;//解决名称冲突
//	}
//
//	//this指向p2的指针   *this指向p2本身
//	Person PersonAddPerson01(Person& p)//值传递 拷贝一份p2的原始值进行返回
//	{
//		this->age += p.age;
//
//		return *this;
//	}
//
//	Person& PersonAddPerson02(Person& p)//不拷贝,直接返回的是执行完语句的p2
//	{
//		this->age += p.age;
//
//		return *this;
//	}
//
//	int age;
//};
//
////1.解决名称冲突
//void test01()
//{
//	Person p(18);
//	cout << p.age << endl;
//}
//
////2.返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddPerson02(p1).PersonAddPerson01(p2).PersonAddPerson01(p2);
//	cout << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}