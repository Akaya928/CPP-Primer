//I.多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方法：将父类中的析构函数改为虚析构或者纯虚析构

//II.虚析构和纯虚析构共性：
//1.可以解决父类指针释放子类对象
//2.都需要有具体的函数实现

//III.虚析构和纯虚析构区别：
//如果是纯虚析构，该类属于抽象类，无法实例化对象

//IV.虚析构语法：virtual ~类名() {};

//V.纯虚析构语法：
//virtual ~类名() = 0;
//类名::~类名();

//VI.总结:
//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类的对象
//2.如果子类中没有堆区数据，可以不写虚析构或纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类

//#include<iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal构造函数的调用" << endl;
//	}
//
//	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	//virtual ~Animal()
//	//{
//		//cout << "Animal析构函数的调用" << endl;
//	//}
//
//	//利用纯虚析构  需要声明也需要实现
//	//有了纯虚析构，该类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//	
//};
//
//Animal::~Animal()
//{
//	cout << "Animal析构函数的调用" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat构造函数的调用" << endl;
//		m_Name = new string(name);
//	}
//
//	void speak()
//	{
//		cout << *m_Name << "喵喵喵" << endl;
//	}
//
//	~Cat()
//	{
//		cout << "Cat析构函数的调用" << endl;
//	}
//
//	string* m_Name;
//};
//
//void doSpeak(Animal* animal)
//{
//	animal->speak();
//	delete animal;
//}
//
//void test01()
//{
//	//父类指针在析构时无法调用子类中的析构函数，导致子类如果有堆区属性，会出现内存泄露
//	doSpeak(new Cat("Tom"));
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}