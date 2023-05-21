//作用：通过重载递增运算符，实现自己的整型变量

//注意：
//1.函数重载(同一作用域 函数相同) 只跟函数参数的类型,个数和顺序有关 与返回值无关
//2.C++中产生的临时对象是不可修改的，即默认为const的
//3.非const引用只能绑定到与该引用同类型的对象,但是非常量对象可以绑定到const引用上
//4.因此可以去掉左移重载参数的类的引用符，即ostream &operator<<(ostream &cout, MyInt mi)

//总结：前置递增返回引用  后置递增返回值

//#include<iostream>
//using namespace std;
//
//class Integer
//{
//	friend ostream& operator<<(ostream& cout, Integer myint);
//
//public:
//
//	Integer(int num) : m_Int(num)
//	{
//
//	}
//
//	//1.前置递增
//	Integer& operator++()
//	{
//		++m_Int;
//
//		return *this;
//	}
//
//	//2.后置递增
//	//Integer operator++(int)  int 代表的是占位参数，可以用于区别前置和后置
//	Integer operator++(int)
//	{
//		//先  记录当时结果
//		Integer temp = m_Int;
//
//		//后  递增
//		++m_Int;
//
//		return temp;
//	}
//
//private:
//
//	int m_Int;
//};
//
//ostream& operator<<(ostream& cout, Integer myint)
//{
//	cout << myint.m_Int;
//
//	return cout;
//}
//
//void test01()
//{
//	Integer myint1(1);
//	cout << ++(++myint1) << endl;
//	cout << myint1 << endl;
//}
//
//void test02()
//{
//	Integer myint1 = 1;
//	cout << myint1++ << endl;
//	cout << myint1 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}