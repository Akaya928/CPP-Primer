#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Circle//Բ��
{
public://�ӿ�

	void setR(double r);//�뾶��д

	void setCenter(Point& center);

	double getR();//�뾶�Ķ�
	
	Point getCenter();//Բ�ĵ�д

	void pRelationship(Point& center, Point& a);//�ж�λ�ù�ϵ
	
private:

	double m_r;//�뾶
	Point m_center;//Բ������
};