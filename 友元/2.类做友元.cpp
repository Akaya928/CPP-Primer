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
//	//Firm���Ǳ����friend�����Է��ʱ����˽�г�Ա
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
////����д��Ա����
//Person::Person()
//{
//	m_ID = 10010;
//	m_Name = "Sara";
//}
//
//Firm::Firm()
//{
//	//����Person����
//	person = new Person;//�ڶ�������
//}
//
//void Firm::HR()
//{
//	cout<< "��˾��������" << person->m_Name << endl;
//	cout << "��˾�������Ե�" << person->m_Name << "��IDΪ" << person->m_ID << endl;
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