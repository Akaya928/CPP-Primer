//以二进制的方式对文件进行读写操作
//打开文件要指定为ios::binary

//写文件
//二进制方式写文件主要利用流对象调用成员函数write
//函数原型：ostream& write(const char * buffer, int len);
//参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

//总结：文件输出流对象 可以通过write函数，以二进制方式写数据

//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	char m_name[64]; /.最好用char型，用string会出现乱码
//
//	int m_Age;
//};
//
//void test01()
//{
//	//1.创建流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//2.打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);  打开文件这一步也可以直接在创建流对象时执行
//
//	//3.写数据
//	Person p = {"雷电将军", 618};
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//4.关闭文件
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}