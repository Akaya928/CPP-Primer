//借助1.cpp中的基础语法案例(如下)
//利用开发人员命令提示工具(Developer Command Prompt)进行剖析
//注意重写前 和 重写后 子类中的虚函数表的变化

//使用Developer Command Prompt会看见vfptr vftable
//vfptr 虚函数(表)指针
//vftable  虚函数表

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
//    //重写：函数返回值类型 函数名 参数列表  三者完全相同则称为重写
//    //子类重写父类的虚函数
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