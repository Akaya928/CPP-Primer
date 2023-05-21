//#include<iostream>
//#include"Point.h"
//#include"Circle.h"
//using namespace std;
//
//void Circle::pRelationship(Point& center, Point& a)//判断位置关系
//	{
//		if ((int)pow((a.getX() - center.getX()), 2) + (int)pow((a.getY() - center.getY()), 2) + (int)pow((a.getZ() - center.getZ()), 2) == (int)pow(m_r, 2))//无法实现精度计算
//			cout << "点在圆上" << endl;
//		else if (pow((a.getX() - center.getX()), 2) + pow((a.getY() - center.getY()), 2) + pow((a.getZ() - center.getZ()), 2) < pow(m_r, 2))
//			cout << "点在圆内" << endl;
//		else
//			cout << "点在圆外" << endl;
//	}
//
//int main()
//{
//	Point a,b;
//	a.setXYZ(NULL, NULL, NULL);
//
//	Circle P;
//	P.setCenter(b);
//	P.setR(NULL);
//	P.pRelationship(b, a);
//
//	return 0;
//}