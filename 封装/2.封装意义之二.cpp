//��װ����֮��������Ȩ��
//I.����
//����Ȩ�� public     ��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� protected  ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private    ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���Ӳ����Է��ʸ��׵�˽������

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
// 
//	string m_name;
//
//protected:
// 
//	string m_address;
//
//private:
// 
//	string m_password;
//
//public:
// 
//	void func1()         
//		m_name = "Sara";
//		m_address = "London";
//		m_password = "Sara123456.";
//	}
//};
//
//int main()
//{
//	Person A;
//	A.m_name = "Alice";//����ֻ�ܷ���public
//	A.m_address = "New York";//protected private ���ⲻ�ܷ���
//
//	return 0;
//}

//II.struct��class������

//stuct Ĭ��Ȩ���� ���� public
//class Ĭ��Ȩ���� ˽�� private
//#include<iostream>
//using namespace std;
//
//class A
//{
//	int A = 1;
//};
//
//struct B
//{
//	int B = 2;
//};
//
//int main()
//{
//	A A1;
//	B B1;
//	A1.A = 10;//private ���ⲻ�ɷ���
//	B1.B = 20;//public ������Է���
//
//	return 0;
//}

//III.��Ա��������Ϊ˽��

//1.�Լ����ƶ�дȨ�� ��ƽӿ�
//2.����д���Լ�����ݵ���Ч��
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public://�ӿ� ��˽�����Խ��з���
// 
//	void setName(string name)//��m_nameʵ�ֿ�д
//	{
//		m_name = name;
//	}
//
//	string getName()//��m_nameʵ�ֿɶ�
//	{
//		return m_name;
//	}
//
//	void setAge(int age)//ʵ�ֶ�m_age��д������ݵ���Ч��
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "����������Ч!" << endl;
//			return;
//		}
//		m_age = age;
//	}
//
//	int getAge()//��m_ageʵ��ֻ��
//	{
//		return m_age;
//	}
//
//	void setLover(string lover)//��m_loverʵ��ֻд
//	{
//		m_lover = lover;
//	}
//
//private:
// 
//	string m_name;//ʵ�ֿɶ���д
//	string m_lover;//ʵ��ֻд
//	int m_age;//ʵ�ֿɶ���д������д����������ݵ�׼ȷ��
//};
//
//int main()
//{
//	Person P;
//	P.setName("Sara");
//	P.setLover("Dave");
//	P.setAge(200);
//	cout << P.getName() << endl;
//	cout << P.getAge() << endl;
//	return 0;
//}