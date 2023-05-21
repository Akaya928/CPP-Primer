//继承好处：减少重复代码
//语法：class 子类 : 继承方式 父类
//子类	也被称为	  派生类
//父类	也被称为	  基类

//派生类中的成员，包含两大部分:
//一部分是从基类继承过来的，一部分是自己增加的成员
//从基类继承过来的成员体现其共性，而新增的成员体现了其个性

//#include<iostream>
//using namespace std;
//
//class BasePage
//{
//public:
//
//	void header()
//	{
//		cout << "首页\t公开课\t免费视频教程\t技术社区...(公共头部)" << endl;
//	}
//
//	void left()
//	{
//		cout << "C/C++ Python Java JavaScript CSS" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心\t交流合作\t站内地图\t联系方式...(公共底部)" << endl
//			<< "---------------------------------------------------------------------" << endl;
//	}
//};
//
//class C_CPP : public BasePage
//{
//public:
//
//	void content()
//	{
//		cout << "C/C++的相关视频..." << endl;
//	}
//};
//
//class Java : public BasePage
//{
//public:
//
//	void content()
//	{
//		cout << "Java的相关视频..." << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//
//	void content()
//	{
//		cout << "Python的相关视频..." << endl;
//	}
//};
//
//void test01()
//{
//	C_CPP c_cpp;
//	c_cpp.header();
//	c_cpp.left();
//	c_cpp.content();
//	c_cpp.footer();
//}
//
//void test02()
//{
//	Java java;
//	java.header();
//	java.left();
//	java.content();
//	java.footer();
//}
//
//void test03()
//{
//	Python python;
//	python.header();
//	python.left();
//	python.content();
//	python.footer();
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}