//����������ʹ��ʱ��

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person�������캯���ĵ���" << endl;
//		m_age = p.m_age;
//	}
//	
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_age;
//};
//
////1.ʹ��һ���Ѿ�������ϵĶ���ȥ��ʼ��һ���¶���
//void test01()
//{
//	Person p1(18);
//	Person p2(p1);
//
//	cout << p2.m_age << endl;
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)//ֵ���� ���ȿ���һ������
//{
//
//}
//
//void test02()
//{
//	Person p3;
//	doWork(p3);//ʵ�δ����β�
//}
//
////3.ֵ��ʽ���ؾֲ�����
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