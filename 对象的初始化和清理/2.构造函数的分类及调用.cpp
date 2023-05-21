//构造函数的分类及调用
//1.分类
//按照参数分类	无参构造(默认构造) 和 有参构造
//按照类型分类   普通构造函数 和 拷贝构造函数

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()//无参构造(默认构造)
//	{
//		cout << "Person函数的无参构造" << endl;
//	}
//
//	Person(int a)//有参构造
//	{
//		age = a;
//		cout << "Person函数的有参构造" << endl;
//	}
//
//	Person(const Person& p)//拷贝构造函数
//	{
//		age = p.age;//将传入的人身上的所有函数，拷贝到我身上
//		cout << "Person函数的拷贝构造" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person函数的析构" << endl;
//	}
//
//	int age;
//};

//2.构造函数的调用
//void test01()
//{
	//1.括号法
	//Person p1;//默认构造函数的调用
	//Person p2(10);//有参构造函数的调用
	//Person p3(p2);//拷贝构造函数的调用

	//注意事项
	//1.调用默认构造函数的时候 不要加()
	//加上()后 Person p1(); 编译器会认为这是个函数的声明，不会认为是在创建对象
	//cout << "p2的年龄:" << p2.age << endl;
	//cout << "p3的年龄:" << p3.age << endl;

	//2.显示法
	//Person p4;
	//Person p5 = Person(10);//有参构造
	//Person p6 = Person(p5);//拷贝构造

	//Person(10);//匿名对象 特点:当前行执行结束后，系统会立即回收掉匿名对象
	//cout << "haihaihai" << endl;

	//注意事项2
	//2.不要利用拷贝构造函数去初始化匿名对象 编译器会认为 Person(p6) === Perosn p6; 是对象声明
	//Person(p6);

	//3.隐式转换法
//	Person p7 = 10;//相当于 写了 Person p7 = Person(10);  有参构造
//	Person p8 = p7;//拷贝构造
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}