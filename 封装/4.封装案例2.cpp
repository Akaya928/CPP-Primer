//����2 �ο���Ŀ c++-��װ-����2������ֳɲ�ͬ���ļ���
//���һ��Բ��(Circle)����һ������(Point)���жϵ��Բ�Ĺ�ϵ
//���ģ������п�������һ������Ϊ����ĳ�Ա(��Ƕ����)

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class Point
//{
//public:
//
//	void setXYZ(double x, double y, double z)//�������д
//	{
//		cout << "����������x,y,z��ֵ" << endl;
//		cin >> x >> y >> z;
//		m_x = x;
//		m_y = y;
//		m_z = z;
//	}
//
//	double getX()//��
//	{
//		return m_x;
//	}
//
//	double getY()//��
//	{
//		return m_y;
//	}
//
//	double getZ()//��
//	{
//		return m_x;
//	}
//	
//private:
//
//	double m_x, m_y, m_z;//����
//};
//
//
//class Circle//Բ��
//{
//public://�ӿ�
//
//	void setR(double r)//�뾶��д
//	{
//		cout << "������Բ�İ뾶" << endl;
//		cin >> r;
//		if (r <= 0) {
//			cout << "�뾶�������!" << endl;
//			return;
//		}
//		m_r = r;
//	}
//
//	void setCenter(Point& center)
//	{
//		cout << "������Բ�ĵ�����" << endl;
//		center.setXYZ(NULL, NULL, NULL);
//	}
//
//	double getR()//�뾶�Ķ�
//	{
//		return m_r;
//	}
//
//	Point getCenter()
//	{
//		return m_center;
//	}
//
//	void pRelationship(Point& center, Point& a)//�ж�λ�ù�ϵ
//	{
//		if (pow((a.getX() - center.getX()), 2) + pow((a.getY() - center.getY()), 2) + pow((a.getZ() - center.getZ()), 2) == pow(m_r, 2))
//			cout << "����Բ��" << endl;
//		else if (pow((a.getX() - center.getX()), 2) + pow((a.getY() - center.getY()), 2) + pow((a.getZ() - center.getZ()), 2) < pow(m_r, 2))
//			cout << "����Բ��" << endl;
//		else
//			cout << "����Բ��" << endl;
//	}
//
//private:
//
//	double m_r;//�뾶
//	Point m_center;//Բ������
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