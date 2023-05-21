//封装意义之二：访问权限
//I.三种
//公共权限 public     成员 类内可以访问 类外可以访问
//保护权限 protected  成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
//私有权限 private    成员 类内可以访问 类外不可以访问 儿子不可以访问父亲的私有内容

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
// 
//	string m_name;
//
//protected:
// 
//	string m_address;
//
//private:
// 
//	string m_password;
//
//public:
// 
//	void func1()         
//		m_name = "Sara";
//		m_address = "London";
//		m_password = "Sara123456.";
//	}
//};
//
//int main()
//{
//	Person A;
//	A.m_name = "Alice";//类外只能访问public
//	A.m_address = "New York";//protected private 类外不能访问
//
//	return 0;
//}

//II.struct和class的区别

//stuct 默认权限是 公共 public
//class 默认权限是 私有 private
//#include<iostream>
//using namespace std;
//
//class A
//{
//	int A = 1;
//};
//
//struct B
//{
//	int B = 2;
//};
//
//int main()
//{
//	A A1;
//	B B1;
//	A1.A = 10;//private 类外不可访问
//	B1.B = 20;//public 类外可以访问
//
//	return 0;
//}

//III.成员属性设置为私有

//1.自己控制读写权限 设计接口
//2.对于写可以检测数据的有效性
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public://接口 对私有属性进行访问
// 
//	void setName(string name)//对m_name实现可写
//	{
//		m_name = name;
//	}
//
//	string getName()//对m_name实现可读
//	{
//		return m_name;
//	}
//
//	void setAge(int age)//实现对m_age的写检测数据的有效性
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "年龄输入无效!" << endl;
//			return;
//		}
//		m_age = age;
//	}
//
//	int getAge()//对m_age实现只读
//	{
//		return m_age;
//	}
//
//	void setLover(string lover)//对m_lover实现只写
//	{
//		m_lover = lover;
//	}
//
//private:
// 
//	string m_name;//实现可读可写
//	string m_lover;//实现只写
//	int m_age;//实现可读可写，并对写检测输入数据的准确性
//};
//
//int main()
//{
//	Person P;
//	P.setName("Sara");
//	P.setLover("Dave");
//	P.setAge(200);
//	cout << P.getName() << endl;
//	cout << P.getAge() << endl;
//	return 0;
//}