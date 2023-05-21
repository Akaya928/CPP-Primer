//案例描述
//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

//总结:C++开发提倡利用多态设计程序结构，因为多态的优点很多
//多态的好处:
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期扩展以及维护性高

//#include<iostream>
//#include<string>
//using namespace std;
//
////普通写法实现计算器类
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		int sum = 0;
//		if ("+" == oper)
//			sum = num1 + num2;
//		else if ("-" == oper)
//			sum = num1 - num2;
//		else if ("*" == oper)
//			sum = num1 * num2;
//		else
//			return NULL;
//
//		return sum;
//	}
//	//如果想扩展新的功能，需要修改源码
//	//而在真实开发中 提倡 开闭原则
//	//开闭原则：对扩展进行开放，对修改进行关闭
//
//	int num1;
//	int num2;
//};
//
//void test01()
//{
//	Calculator c;
//	c.num1 = 202;
//	c.num2 = 101;
//
//	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
//}
//
////利用多态技术实现计算器类
//
////多态的好处:
////1.组织结构清晰
////2.可读性强
////3.对于前期和后期扩展以及维护性高
//
////实现计算器抽象类
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int num1;
//	int num2;
//};
//
//class addCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
//
//class subCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//
//class mulCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//
//void test02()
//{
//	//多态的使用条件
//	//父类指针或者引用指向子类对象(本例中使用父类的指针指向子类对象)
//
//	//加法运算
//  AbstractCalculator* Ab_C = new addCalculator;
//	Ab_C->num1 = 2002;
//	Ab_C->num2 = 1001;
//	cout << Ab_C->num1 << "+" << Ab_C->num2 << "=" << Ab_C->getResult() << endl;
//	delete Ab_C;
//
//	//减法运算
//	Ab_C = new subCalculator;
//	Ab_C->num1 = 903;
//	Ab_C->num2 = 874;
//	cout << Ab_C->num1 << "+" << Ab_C->num2 << "=" << Ab_C->getResult() << endl;
//	delete Ab_C;
//
//	//乘法运算
//	Ab_C = new mulCalculator;
//	Ab_C->num1 = 45;
//	Ab_C->num2 = 1349;
//	cout << Ab_C->num1 << "+" << Ab_C->num2 << "=" << Ab_C->getResult() << endl;
//	delete Ab_C;
//}
//
//int main()
//{
//	cout << "传统计算器写法" << endl;
//	test01();
//	cout << "利用多态实现计算器" << endl;
//	test02();
//
//	return 0;
//}