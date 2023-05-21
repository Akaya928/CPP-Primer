//案例1
//设计立方体类(Cube)
//1.求出Cube的面积和体积
//2.分别用全局函数和成员函数判断两个Cube是否相等

//#include<iostream>
//using namespace std;
//
//class Cube
//{
//public://接口
//
//	bool equal_or_not(Cube &c1, Cube &c2)//判断两个Cube是否相等
//	{
//		if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
//			return 1;
//		return 0;
//	}
//
//	void setLength(double length)//m_length的写 检测输入数据的准确性
//	{
//		cin >> length;
//		if (length <= 0)
//		{
//			cout << "长度输入错误!" << endl;
//			return;
//		}
//		m_length = length;
//	}
//
//	double getLength()
//	{
//		return m_length;
//	}
//
//	void setWidth(double width)//m_width的写 检测输入输入数据的准确性
//	{
//		cin >> width;
//		if (width <= 0)
//		{
//			cout << "宽度输入错误!" << endl;
//			return;
//		}
//		m_width = width;
//	}
//
//	double getWidth()
//	{
//		return m_width;
//	}
//
//	void setHeight(double height)////m_height的写 检测输入输入数据的准确性
//	{
//		cin >> height;
//		if (height <= 0)
//		{
//			cout << "高度输入错误!" << endl;
//			return;
//		}
//		m_height = height;
//	}
//
//	double getHeight()
//	{
//		return m_height;
//	}
//
//	double surface_area()//表面积的读
//	{
//		if (m_height <= 0 || m_length <= 0 || m_width <= 0)
//			return NULL;
//		return 2 * (m_height * m_length + m_height * m_width + m_length * m_width);
//	}
//
//	double body_agents()//体积的读
//	{
//		if (m_height <= 0 || m_length <= 0 || m_width <= 0)
//			return NULL;
//		return m_height * m_length * m_width;
//	}
//
//	bool equal_or_not(Cube& c)//判断两个Cube是否相等 引用不用开辟新的内存空间
//	{
//		if (m_height == c.getHeight() && m_length == c.getLength() && m_width == c.getWidth())
//			return true;
//		return false;
//	}
//
//private:
//
//	double m_length;
//	double m_width;
//	double m_height;
//};
//
//bool equal_or_not(Cube& c1, Cube& c2)//判断两个Cube是否相等 引用不用开辟新的内存空间
//{
//	if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
//		return true;
//	return false;
//}
//
//int main()
//{
//	Cube a;
//	cout << "输入Cube a的高长宽";
//	a.setHeight(0);
//	a.setLength(0);
//	a.setWidth(0);
//	cout << "Cube a的表面积:" << a.surface_area() << endl;
//	cout << "Cube a的体积:" << a.body_agents() << endl;
//
//	Cube b;
//	cout << "输入Cube b的高长宽";
//	b.setHeight(0);
//	b.setLength(0);
//	b.setWidth(0);
//	cout << "Cube b的表面积:" << b.surface_area() << endl;
//	cout << "Cube b的体积:" << b.body_agents() << endl;
//
//	Cube c;
//	cout << "输入Cube c的高长宽";
//	c.setHeight(0);
//	c.setLength(0);
//	c.setWidth(0);
//	cout << "Cube c的表面积:" << c.surface_area() << endl;
//	cout << "Cube c的体积:" << c.body_agents() << endl;
//
//	if (equal_or_not(a, b))
//		cout << "a b" << "相等" << endl;
//	else
//		cout << "a b" << "不相等" << endl;
//
//	if(a.equal_or_not(c))
//		cout << "a c" << "相等" << endl;
//	else
//		cout << "a c" << "不相等" << endl;
//
//	return 0;
//}