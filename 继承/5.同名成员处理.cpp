//�ܽ᣺
//1.����������ֱ�ӷ��ʵ������е�ͬ����Ա
//2.����������������Է��ʵ������е�ͬ������
//3.�������븸��ӵ��ͬ���ĳ�Ա��������������ε������е�ͬ����Ա����������������Ϳ��Է��ʵ������е�ͬ����Ա����

//#include<iostream>
//
//class Base
//{
//public:
//
//	void Func()
//	{
//		std::cout << "Base-Func()" << std::endl;
//	}
//
//	void Func(int)
//	{
//		std::cout << "Base-Func(int)" << std::endl;
//	}
//
//	void setM_A()
//	{
//		std::cout << "Please enter an integer";
//		std::cin >> this->m_A;
//	}
//
//	int showM_A()
//	{
//		return this->m_A;
//	}
//
//	int m_B = 101;
//
//private:
//
//	int m_A = 100;
//};
//
//class Son : public Base
//{
//public:
//
//	void Func()
//	{
//		std::cout << "Son-Func()" << std::endl;
//	}
//
//	void setM_A()
//	{
//		std::cout << "Please enter an integer";
//		std::cin >> this->m_A;
//	}
//
//	int showM_A()
//	{
//		return this->m_A;
//	}
//
//	int m_B = 201;
//
//private:
//
//	int m_A = 200;
//};
//
////ͬ����Ա���Դ���
//void test01()
//{
//	Son s1;
//
//	//ֱ�ӵ��� ���õ��������е�ͬ����Ա
//	std::cout << s1.m_B << std::endl;
//	//������������ ���ʸ�����ͬ����Ա����Ҫ��������
//	std::cout << s1.Base::m_B << std::endl;
//}
//
////ͬ����Ա��������	ͬtest01()
//void test02()
//{
//	Son s1;
//	s1.setM_A();
//	std::cout << s1.showM_A() << std::endl;
//	std::cout << s1.Base::showM_A() << std::endl;
//
//	s1.Base::setM_A();
//	std::cout << s1.showM_A() << std::endl;
//	std::cout << s1.Base::showM_A() << std::endl;
//
//}
//
////��������г��ֺ͸���ͬ���ĺ����������ͬ�����������ε����������е�ͬ������(���У����������е����صİ汾)
////�������ʵ������б����ε���ͬ������ ��Ҫ����������
//void test03()
//{
//	Son s1;
//
//	s1.Base::Func();
//	s1.Base::Func(1);
//	s1.Func();
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	return 0;
//}