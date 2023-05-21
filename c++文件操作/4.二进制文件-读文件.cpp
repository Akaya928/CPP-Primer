//二进制方式读文件主要利用流对象调用成员函数read
//函数类型：istream& read(char* buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间。len时读写的字节数

//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//class Person//成员属性的顺序和要读的文件属性顺序一致，不然也会乱码
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
//	//1.创建流对象并打开文件
//	ifstream ifs("person.txt", ios::in | ios::binary);
//
//	//2.打开文件(已在创建流对象时执行了)并判断文件是否打开成功
//	if (!ifs.is_open())
//	{
//		cout << "File failed to open!" << endl;
//		return;
//	}
// 
//	//3.读数据
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//
//	cout << "姓名：" << p.m_name << "\t年龄：" << p.m_Age << endl;
//
//	//4.关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}