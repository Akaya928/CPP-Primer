/*c++面向对象的三大特征: 封装 继承 多态*/

//一.封装
//1.将属性和行为作为一个整体，表现生活中的事物 一个类
//2.将属性和行为加以权限控制 访问权限

//封装意义之一：设计一个类 将属性和行为作为一个整体
//1.设计一个圆类
//实例化（通过一个类，创建一个对象的过程）

//#include<iostream>
//using namespace std;
//
//const double PI = 3.14;
//
//class Circle//class 代表设计一个类，类后面紧跟的就是类的名称
//{
//public://访问权限 public 公共权限
// 
//	int m_r;//属性(变量) 获得圆的半径
//	double calculateZC()//行为(函数) 获取圆的周长
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	Circle A;//通过圆类创建具体的圆(对象)
//	A.m_r = 2;
//	cout << A.calculateZC() << endl;
//
//	return 0;
//}

//2.设计一个学生类

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student//类中的属性和行为 统一称为 成员
//{
//public://公共权限
// 
//	string m_name;//属性 称为 成员属性/成员变量
//	string m_id;
// 
//	void showStudent()//行为 称为 成员函数/成员方法
//	{
//		cout << m_name << endl << m_id << endl;
//	}
//
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	void setid(string id)
//	{
//		m_id = id;
//	}
//};
//
//int main()
//{
//	Student B;
//	Student C;
//	Student D;
//	B.m_id = "1234567890";
//	B.m_name = "Sara";
//	C.m_id = "0123456789";
//	C.m_name = "John";
//	D.setName("HaiHai");
//	D.setid("2345678901");
//	B.showStudent();
//	C.showStudent();
//	D.showStudent();
//
//	return 0;
//}