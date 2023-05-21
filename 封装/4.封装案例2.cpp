//案例2 参考项目 c++-封装-案例2（将类分成不同的文件）
//设计一个圆类(Circle)，和一个点类(Point)，判断点和圆的关系
//核心：在类中可以让另一个类作为本类的成员(类嵌套类)

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class Point
//{
//public:
//
//	void setXYZ(double x, double y, double z)//点坐标的写
//	{
//		cout << "请依次输入x,y,z的值" << endl;
//		cin >> x >> y >> z;
//		m_x = x;
//		m_y = y;
//		m_z = z;
//	}
//
//	double getX()//读
//	{
//		return m_x;
//	}
//
//	double getY()//读
//	{
//		return m_y;
//	}
//
//	double getZ()//读
//	{
//		return m_x;
//	}
//	
//private:
//
//	double m_x, m_y, m_z;//坐标
//};
//
//
//class Circle//圆类
//{
//public://接口
//
//	void setR(double r)//半径的写
//	{
//		cout << "请输入圆的半径" << endl;
//		cin >> r;
//		if (r <= 0) {
//			cout << "半径输入错误!" << endl;
//			return;
//		}
//		m_r = r;
//	}
//
//	void setCenter(Point& center)
//	{
//		cout << "请输入圆心的坐标" << endl;
//		center.setXYZ(NULL, NULL, NULL);
//	}
//
//	double getR()//半径的读
//	{
//		return m_r;
//	}
//
//	Point getCenter()
//	{
//		return m_center;
//	}
//
//	void pRelationship(Point& center, Point& a)//判断位置关系
//	{
//		if (pow((a.getX() - center.getX()), 2) + pow((a.getY() - center.getY()), 2) + pow((a.getZ() - center.getZ()), 2) == pow(m_r, 2))
//			cout << "点在圆上" << endl;
//		else if (pow((a.getX() - center.getX()), 2) + pow((a.getY() - center.getY()), 2) + pow((a.getZ() - center.getZ()), 2) < pow(m_r, 2))
//			cout << "点在圆内" << endl;
//		else
//			cout << "点在圆外" << endl;
//	}
//
//private:
//
//	double m_r;//半径
//	Point m_center;//圆心坐标
//};
//
//int main()
//{
//	Point a,b;
//	a.setXYZ(NULL, NULL, NULL);
//
//	Circle P;
//	P.setCenter(b);
//	P.setR(NULL);
//	P.pRelationship(a, b);
//
//	return 0;
//}