#pragma once
#include<iostream>
using namespace std;

class Point
{
public:

	void setXYZ(double x, double y, double z);//�������д

	double getX();//��

	double getY();//��

	double getZ();//��

private:

	double m_x, m_y, m_z;//����
};