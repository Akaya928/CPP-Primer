//一.本质：给变量其别名,引用在c++内部实现的是指针常量(指针的指向不可修改，但指针指向的值可以修改)
//语法：数据类型 &别名 = 原名
//注意
//1.引用必须要初始化
//2.引用一旦初始化后就不能再更改了
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int b = 10;
//	int &a = b;//类似int* const a = &b c++内部实现的是指针常量
//	cin >> a;
//	cout << b;
//
//	return 0;
//}

//二.引用做函数参数
//值传递(形参改变，实参不变) 
//地址传递(形参改变，实参也改变) 
//引用传递(形参改变，实参也改变)
//#include<iostream>
//using namespace std;
//
//void func(int& a)//利用引用改变实参
//{
//	a = 100;
//}
//
//int main()
//{
//	int a = 99;
//	func(a);
//	cout << a;
//
//	return 0;
//}

//三.引用做函数的返回值
//1.不要返回局部变量的引用(局部变量存放在四区中的 栈区,在函数执行完后就被释放了)
//2.函数的调用可以为左值
//#include<iostream>
//using namespace std;
//
//int& func()//引用做函数返回值
//{
//	static int a = 10;//加入static后为静态变量，变量被存放在全局区(在程序结束后被系统释放)
//
//	return a;//函数返回引用
//}
//
//int main()
//{
//	int &b = func();//引用
//	cout << b;
//	cout << b;
//	func() = 100;//如果函数的返回值是引用，则函数的调用可以作为左值
//	cout << b;
//
//	return 0;
//}

//四.常量引用
//使用场景:用来修饰形参，防止误操作
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	//int& ref = 10;//不合法
//	const int& ref = 10;//加上const之后 编译器将代码修改为 int temp = 10; const int& ref = temp;
//
//	return 0;
//}