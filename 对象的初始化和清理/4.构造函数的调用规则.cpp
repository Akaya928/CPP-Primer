//���캯���ĵ��ù���
//1����һ���࣬c++���������ÿ���඼�������3������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//����������ֻ������
//2�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//3�������д�˿������캯�����������Ͳ����ṩĬ�Ϲ��� �Լ� �вι���

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person�вι��캯���ĵ���" << endl;
//		m_age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person���������ĵ���" << endl;
//		m_age = p.m_age;
//	}
//
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//
//	int m_age;
//};
//
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << p2.m_age << endl;
//}
//
//void test02()//����5.2 ע�͵�Ĭ�Ϲ���Ϳ�������
//{
//	Person p3;
//	Person p4(p3);
//}
//
//void test03()//����5.3 ע�͵�Ĭ�Ϲ�����вι���
//{
//	Person p5;
//	Person p6(20);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}