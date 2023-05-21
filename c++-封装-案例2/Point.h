#pragma once
#include<iostream>
using namespace std;

class Point
{
public:

	void setXYZ(double x, double y, double z);//点坐标的写

	double getX();//读

	double getY();//读

	double getZ();//读

private:

	double m_x, m_y, m_z;//坐标
};