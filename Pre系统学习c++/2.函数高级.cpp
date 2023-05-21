//一.函数的默认参数
//语法：返回值类型 函数名 (参数 = 默认值){}
//注意事项：
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值
//2.如果函数的声明有了默认参数，函数的实现就不能有默认参数
//#include<iostream>
//using namespace std;
//
//int func1(int a = 10, int b = 10);
//
//int func1(int a = 20, int b = 20)//重定义了默认参数
//{
//	return a + b;
//}
//
//int func(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	cout << func(10, 30) << endl;//如果自己传入了数据，就用自己穿的数据，否则就用默认值
//	cout << func1();
//
//	return 0;
//}

//二.函数的占位参数
//c++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：返回值类型 函数名 (数据类型){}
//
//#include<iostream>
//using namespace std;
//
//void func(int a, int  = 10)//占位参数也可以是默认参数
//{
//	cout << "hello";
//}
//
//int main()
//{
//	func(10);//占位参数(占位参数是默认参数时，可以不用给占位参数传数据)
//
//	return 0;
//}

//三.函数重载
//作用：函数名可以相同，提高复用率
//函数重载满足的条件:
//.同一个作用域
//.函数名称相同
//.函数的参数类型不同 或者 个数不同 或者 顺序不同
//#include<iostream>
//using namespace std;
//
//void func(int a)
//{
//	cout << "haihai";
//}
//
//void func()
//{
//	cout << "hello";
//}
//
//void func(double a)
//{
//	cout << "hi";
//}
//
//void func(int a, double b)
//{
//	cout << "你好";
//}
//
//void func(double a, int b)
//{
//	cout << "嗨";
//}
//// 注意事项：
////函数的返回值不可以作为函数重载的条件
//int func()
//{
//	cout << "hello";
//}//无法重载仅按返回类型区分的函数
//
//
//int main()
//{
//	func(1, 1.0);
//
//	return 0;
//}

//四.函数重载的注意事项
//1.引用作为重载的条件
//#include<iostream>
//using namespace std;
//
//void func(int &a)//变量 可读可写
//{
//	cout << "1";
//}
//
//void func(const int &a)//const 常量 只读状态(常量引用)
//{
//	cout << "2";
//}
//
//int main()
//{
//	int a = 10;
//	func(a);
//	func(10);
//
//	return 0;
//}
//2.函数重载碰到默认参数
//当函数重载碰到默认参数，出现二义性，会报错，尽量避免
//#include<iostream>
//using namespace std;
//
//void func1(int a = 10)
//{
//	cout << "3";
//}
//
//void func1(int a, int b = 20)
//{
//	cout << "4";
//}
//
//
//int main()
//{
//	func1(1);//有多个 重载函数 "func1" 实例与参数列表匹配 报错
//
//
//	return 0;
//}