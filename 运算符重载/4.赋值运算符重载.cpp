//c++���������ٸ�һ�������4������
//1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//2.Ĭ����������(�޲Σ�������Ϊ��)
//3.Ĭ�Ͽ������캯���������Խ���ֵ����
//4.��ֵ����� operator= �����Խ���ֵ����

//�������������ָ�����������ֵ����ʱҲ�������ǳ��������

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		m_Age = new int(age);//��ָ��m_Ageȥά������������
//		
//		cout << "Person���вι��캯������" << endl;
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
//		cout << "Person�����������ĵ���" << endl;
//	}
//
//private:
//
//	int* m_Age;//age��ֵ��Ҫ���ٵ�����
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
//	p2 = p1;//ǳ�������� ����ֶ����ڴ汻�ظ��ͷ� ������Ҫ���и�ֵ����������ز���
//	p3 = p2 = p1;//��ʽ��� ��:cout << ... << ... << ...	���Ҫ��ʽ���ã�����ֵ��Ҫ��Ϊ��һ�����õĲ����������ͷ���ֵ�ͱ���Ҫͳһ
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