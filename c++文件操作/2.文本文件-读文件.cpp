//���ļ�  ��������
//1.����ͷ�ļ�					 #include<fstream>
//2.����������					 ifstream ifs;
//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�  ifs.open("�ļ�·��"�� �򿪷�ʽ);
//4.������						 ���ַ�ʽ��ȡ
//5.�ر��ļ�						 ifs.close();

//�ܽ᣺
//1.���ļ��������� ifstream������fstream��
//2.����is_open���������ж��ļ��Ƿ�򿪳ɹ�
//3.close�ر��ļ�

//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//void test01()
//{
//	//1.����������
//	ifstream ifs;
//
//	//2.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "File failed to open!" << endl;
//		return;
//	}
//
//	//3.������
//	//��һ��
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)//  EOF end of file
//	{
//		cout << c;
//	}
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