//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(string name, int age) : m_Name(name), m_Age(age)
//	{
//
//	}
//
//	bool operator==(Person& p);
//	
//	string m_Name;
//
//private:
//
//	int m_Age;
//};
//
//bool Person::operator==(Person& p)
//{
//	if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)//!this->m_Name.compare(p.m_Name)
//		return true;
//
//	return false;
//}
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Toi", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//
//	else
//		cout << "p1和p2不相等" << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}