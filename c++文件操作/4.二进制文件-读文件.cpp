//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//�������ͣ�istream& read(char* buffer,int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣lenʱ��д���ֽ���

//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//class Person//��Ա���Ե�˳���Ҫ�����ļ�����˳��һ�£���ȻҲ������
//{
//public:
//
//	char m_name[64];
//
//	int m_Age;
//};
//
//void test01()
//{
//	//1.���������󲢴��ļ�
//	ifstream ifs("person.txt", ios::in | ios::binary);
//
//	//2.���ļ�(���ڴ���������ʱִ����)���ж��ļ��Ƿ�򿪳ɹ�
//	if (!ifs.is_open())
//	{
//		cout << "File failed to open!" << endl;
//		return;
//	}
// 
//	//3.������
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//
//	cout << "������" << p.m_name << "\t���䣺" << p.m_Age << endl;
//
//	//4.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}