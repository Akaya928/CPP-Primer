//ǰ�᣺this ֻ�����ڷǾ�̬��Ա�����ڲ�

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//thisָ��ָ�� �����õĳ�Ա��������������
//		this->age = age;//������Ƴ�ͻ
//	}
//
//	//thisָ��p2��ָ��   *thisָ��p2����
//	Person PersonAddPerson01(Person& p)//ֵ���� ����һ��p2��ԭʼֵ���з���
//	{
//		this->age += p.age;
//
//		return *this;
//	}
//
//	Person& PersonAddPerson02(Person& p)//������,ֱ�ӷ��ص���ִ��������p2
//	{
//		this->age += p.age;
//
//		return *this;
//	}
//
//	int age;
//};
//
////1.������Ƴ�ͻ
//void test01()
//{
//	Person p(18);
//	cout << p.age << endl;
//}
//
////2.���ض�������*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddPerson02(p1).PersonAddPerson01(p2).PersonAddPerson01(p2);
//	cout << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}