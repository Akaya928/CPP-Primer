#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Circle//圆类
{
public://接口

	void setR(double r);//半径的写

	void setCenter(Point& center);

	double getR();//半径的读
	
	Point getCenter();//圆心的写

	void pRelationship(Point& center, Point& a);//判断位置关系
	
private:

	double m_r;//半径
	Point m_center;//圆心坐标
};