//���ã�ͨ�����ص����������ʵ���Լ������ͱ���

//ע�⣺
//1.��������(ͬһ������ ������ͬ) ֻ����������������,������˳���й� �뷵��ֵ�޹�
//2.C++�в�������ʱ�����ǲ����޸ĵģ���Ĭ��Ϊconst��
//3.��const����ֻ�ܰ󶨵��������ͬ���͵Ķ���,���Ƿǳ���������԰󶨵�const������
//4.��˿���ȥ���������ز�����������÷�����ostream &operator<<(ostream &cout, MyInt mi)

//�ܽ᣺ǰ�õ�����������  ���õ�������ֵ

//#include<iostream>
//using namespace std;
//
//class Integer
//{
//	friend ostream& operator<<(ostream& cout, Integer myint);
//
//public:
//
//	Integer(int num) : m_Int(num)
//	{
//
//	}
//
//	//1.ǰ�õ���
//	Integer& operator++()
//	{
//		++m_Int;
//
//		return *this;
//	}
//
//	//2.���õ���
//	//Integer operator++(int)  int �������ռλ������������������ǰ�úͺ���
//	Integer operator++(int)
//	{
//		//��  ��¼��ʱ���
//		Integer temp = m_Int;
//
//		//��  ����
//		++m_Int;
//
//		return temp;
//	}
//
//private:
//
//	int m_Int;
//};
//
//ostream& operator<<(ostream& cout, Integer myint)
//{
//	cout << myint.m_Int;
//
//	return cout;
//}
//
//void test01()
//{
//	Integer myint1(1);
//	cout << ++(++myint1) << endl;
//	cout << myint1 << endl;
//}
//
//void test02()
//{
//	Integer myint1 = 1;
//	cout << myint1++ << endl;
//	cout << myint1 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}