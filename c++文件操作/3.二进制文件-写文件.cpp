//�Զ����Ƶķ�ʽ���ļ����ж�д����
//���ļ�Ҫָ��Ϊios::binary

//д�ļ�
//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�ͣ�ostream& write(const char * buffer, int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

//�ܽ᣺�ļ���������� ����ͨ��write�������Զ����Ʒ�ʽд����

//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	char m_name[64]; /.�����char�ͣ���string���������
//
//	int m_Age;
//};
//
//void test01()
//{
//	//1.����������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//2.���ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);  ���ļ���һ��Ҳ����ֱ���ڴ���������ʱִ��
//
//	//3.д����
//	Person p = {"�׵罫��", 618};
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//4.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}