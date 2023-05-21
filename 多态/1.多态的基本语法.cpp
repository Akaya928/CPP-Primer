//多态分为两类
//1.静态多态：函数重载 和 运算符重载属于静态多态，复用函数名
//2.动态多态：派生类 和 虚函数实现运行时多态

//静态多态和动态多态的区别
//1.静态多态的函数地址早绑定 - 编译阶段确定函数地址
//2.动态多态的函数地址晚绑定 - 运行阶段确定函数地址

//总结
//I.动态多态满足的条件
//1.有继承关系
//2.子类重写父类的虚函数
    //重写：函数返回值类型 函数名 参数列表  三者完全相同则称为重写
    //重写 不等同于 重载
//II.动态多态的使用:
//父类的指针或者引用 指向子类对象   !反复吟诵

//#include<iostream>
//
//using std::cout;
//using std::endl;
//
//class Animal
//{
//public:
//
//	//虚函数  加上关键字 virtual
//	//虚函数声明后依旧可以通过作用域访问父类虚函数
//	virtual void Speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//
//  //重写：函数返回值类型 函数名 参数列表  三者完全相同则称为重写
//  //子类重写父类的虚函数
//	void Speak()
//	{
//		cout << "喵喵喵" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//
//	void Speak()
//	{
//		cout << "汪汪汪" << endl;
//	}
//};
//
////doSpeak函数
////地址早绑定  在编译阶段就确定了函数地址
////如果要执行 喵喵喵 那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//void doSpeak(Animal& animal)  //Animal& animal = cat/dog (父类的指针或者引用 指向子类对象)
//{
//	animal.Speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}