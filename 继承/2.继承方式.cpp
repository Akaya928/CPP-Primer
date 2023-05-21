//继承方式一共有三种
//公共继承
//保护继承
//私有继承

//1.父类中的私有成员 子类无论哪种继承方式都不可访问

//#include<iostream>
//
//class Base1
//{
//public:
//
//	int m_A;
//
//protected:
//
//	int m_B;
//
//private:
//
//	int m_C;
//};
//
//class Son1 : public Base1
//{
//public:
//
//	Son1()
//	{
//		m_A = 10;  //父类中的公共权限成员 到子类中依然是公共权限
//		m_B = 10;  //父类中的保护权限成员 到子类中依然是保护权限
//		//m_C = 10;  //父类中的私有权限成员 到子类访问不到
//	}
//};
//
//class Son2 : protected Base1
//{
//public:
//
//	Son2()
//	{
//		m_A = 10;  //父类中的公共权限成员 到子类中变为保护权限
//		m_B = 10;  //父类中的保护权限成员 到子类中变为保护权限
//		//m_C = 10;  //父类中的私有权限成员 到子类访问不到
//	}
//};
//
//class Son3 : private Base1
//{
//public:
//
//	Son3()
//	{
//		m_A = 10;  //父类中的公共权限成员 到子类中变为私有成员
//		m_B = 10;  //父类中的保护权限成员 到子类中变为私有成员
//		//m_C = 10;  //父类中的私有权限成员 到子类访问不到
//	}
//};
//
//class GrandSon3 : public Son3
//{
//public:
//
//	GrandSon3()
//	{
//		//m_A = 40;  //到了Son3中 m_A就变为私有成员，即使是Son3的儿子，也是访问不到的
//		//m_B = 40;  //到了Son3中 m_B就变为私有成员，即使是Son3的儿子，也是访问不到的
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 20;
//	//s1.m_B = 20;  //到Son1中 m_B 是保护权限 类外访问不到 
//}
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 20;  //到Son2中 m_A变为保护权限，因此类外访问不到
//	//s2.m_B = 20;  //到Son2中 m_B是保护权限 类外访问不到
//}
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 30;  //到Son3中 变为私有成员
//	//s3.m_B = 30;  //到Son3中 变为私有成员
//	//s3.m_C = 30;  //到Son3中 变为私有成员
//}