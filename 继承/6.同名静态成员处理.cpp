//��̬��Ա�ͷǾ�̬��Ա����ͬ�������ߵĴ���ʽ��ͬ
//���������ͬ����Ա��ֱ�ӷ��ʼ���
//���ʸ����ͬ����Ա����Ҫ����������

//��̬��Ա����ͬ��ʱ�������ַ��ʷ�ʽ(1.ͨ���������  2.ͨ����������)

//#include<iostream>
//
//class Base
//{
//public:
//
//	static void func()
//	{
//		std::cin >> m_A;
//	}
//
//	static void func(int A)
//	{
//		m_A = A;
//	}
//
//	void func(double)
//	{
//		std::cout << "ͬ����Ա����" << std::endl;
//	}
//
//	static int m_A;  //��������
//};
//
//int Base::m_A = 10;  //�����ʼ��
//
//class Son : public Base
//{
//public:
//
//	static void func()
//	{
//		std::cin >> m_A;
//	}
//
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
////I.ͬ����̬��Ա�����Ĵ���ʽ
//void test01()
//{
//	//1.ͨ���������
//	Son s1;
//	std::cout << "Son-m_A:" << s1.m_A << std::endl;
//	std::cout << "Base-m_A:" << s1.Base::m_A << std::endl;
//}
//
//void test02()
//{
//	//2.ͨ����������
//	Son s1;
//	std::cout << "Son-m_A:" << Son::m_A << std::endl;
//	//��һ��::����ͨ��������ʽ���ʣ��ڶ���::������ʸ�����������
//	std::cout << "Base-m_A:" << Son::Base::m_A << std::endl;
//}
//
////II.ͬ����̬��Ա�����Ĵ���ʽ
////�����г��ֺ͸���ͬ����̬��Ա������Ҳ�����ص������е�����ͬ����Ա����(���� ��̬�ͷǾ�̬�ĳ�Ա�������Լ����غ���)
////�������ʸ����б����ص�ͬ����Ա��������Ҫ����������
//void test03()
//{
//	Son s1;
//	s1.func();
//	std::cout << "Son-func-m_A:" << s1.m_A << std::endl;
//
//	s1.Base::func();
//	std::cout << "Base-func()-m_A:" << s1.Base::m_A << std::endl;
//
//	Base::func(100);
//	std::cout << "Base-func(int)-m_A:" << Base::m_A << std::endl;
//
//	s1.Base::func(0.1);
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