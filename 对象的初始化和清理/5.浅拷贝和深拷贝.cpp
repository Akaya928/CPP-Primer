//ǳ���������
//����ñ������ṩ�Ŀ������캯��������ǳ��������
//ǳ���������������Ƕ������ڴ��ظ��ͷ�
//ǳ����������Ҫ����������н��
//����������ڶ������ٵģ���Ҫ�Լ�ʵ�ֿ������캯�� ����ǳ��������������

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
//	Person(int age, int height)
//	{
//		cout << "Person�вι��캯���ĵ���" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	//�Լ�ʵ�ֿ������캯�������ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person�������캯���ĵ���" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;//������Ĭ��ʵ�ֵľ������д���
//		//�������
//		m_height = new int(*p.m_height);
//	}
//
//	~Person()//�������룬���������ٵ��������ͷŲ���
//	{
//		cout << "Person���������ĵ���" << endl;
//		//���������ٵ��������ͷŲ���
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