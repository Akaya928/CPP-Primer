//1.函数调用运算符 () 也可以重载
//2.由于重载后使用的方式非常像函数的调用，因此称为仿函数
//3.仿函数没有固定的写法，非常灵活

//匿名对象
//特点：当前行执行完后立即被释放

//#include<iostream>
//#include<string>
//using namespace std;
//
//class MyPrint
//{
//public:
//
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//	void operator()(int sum)
//	{
//		cout << sum << endl;
//	}
//
//};
//
//class MyAdd
//{
//public:
//
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test01()
//{
//	MyPrint printf;
//	printf("Hello World!");
//}
//
//void test02()
//{
//	//匿名函数对象	类名()  =>  创建一个匿名对象(特点:当前行执行完后立即被释放)
//	MyPrint()("Hello world!");
//}
//
//void test03()
//{
//	MyPrint()(MyAdd()(5, 6));
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