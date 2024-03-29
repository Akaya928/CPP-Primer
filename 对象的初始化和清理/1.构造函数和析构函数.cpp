//I.构造函数 进行初始化操作
//语法 类名(){}
//1.没有返回值 不用写void
//2.函数名和类名相同
//3.构造函数可以有参数，可以发生重载 --
//4.创建对象的时候，构造函数会自动调用，而且只调用一次

//II.析构函数 进行清理的操作
//语法 ~类名(){}
//1.没有返回值
//2.函数名和类名想同
//3.析构函数不可以有参数，不可以发生重载 --
//4.对象在销毁前 会自动调用析构函数，而且只会调用一次
//
//构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()//构造函数
//	{
//		cout << "Person函数的调用" << endl;
//	}
//
//	~Person()//析构函数
//	{
//		cout << "Person函数的析构" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;//在栈上的数据，test01执行完毕后，释放这个对象
//}
//
//void test02()
//{
//	Person p;
//}
//
//int main()
//{
//	Person p;//不在栈上
//	//test01();
//	//test02();
//
//	system("pause");
//	return 0;
//}