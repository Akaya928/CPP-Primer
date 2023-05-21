//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person;
//
//class Firm
//{
//public:
//
//	Person* person;
//	Firm();
//	void HR();
//	string m_Name;
//};
//
//class Person
//{
//	//Firm类是本类的friend，可以访问本类的私有成员
//	friend class Firm;
//
//public:
//
//	Person();
//	string m_Name;
//
//private:
//
//	int m_ID;
//};
//
////类外写成员函数
//Person::Person()
//{
//	m_ID = 10010;
//	m_Name = "Sara";
//}
//
//Firm::Firm()
//{
//	//创建Person对象
//	person = new Person;//在堆区创建
//}
//
//void Firm::HR()
//{
//	cout<< "公司正在面试" << person->m_Name << endl;
//	cout << "公司正在面试的" << person->m_Name << "的ID为" << person->m_ID << endl;
//}
//
//void test01()
//{
//	Firm f1;
//	f1.HR();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}