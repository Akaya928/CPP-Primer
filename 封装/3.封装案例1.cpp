//����1
//�����������(Cube)
//1.���Cube����������
//2.�ֱ���ȫ�ֺ����ͳ�Ա�����ж�����Cube�Ƿ����

//#include<iostream>
//using namespace std;
//
//class Cube
//{
//public://�ӿ�
//
//	bool equal_or_not(Cube &c1, Cube &c2)//�ж�����Cube�Ƿ����
//	{
//		if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
//			return 1;
//		return 0;
//	}
//
//	void setLength(double length)//m_length��д ����������ݵ�׼ȷ��
//	{
//		cin >> length;
//		if (length <= 0)
//		{
//			cout << "�����������!" << endl;
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
//	void setWidth(double width)//m_width��д ��������������ݵ�׼ȷ��
//	{
//		cin >> width;
//		if (width <= 0)
//		{
//			cout << "����������!" << endl;
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
//	void setHeight(double height)////m_height��д ��������������ݵ�׼ȷ��
//	{
//		cin >> height;
//		if (height <= 0)
//		{
//			cout << "�߶��������!" << endl;
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
//	double surface_area()//������Ķ�
//	{
//		if (m_height <= 0 || m_length <= 0 || m_width <= 0)
//			return NULL;
//		return 2 * (m_height * m_length + m_height * m_width + m_length * m_width);
//	}
//
//	double body_agents()//����Ķ�
//	{
//		if (m_height <= 0 || m_length <= 0 || m_width <= 0)
//			return NULL;
//		return m_height * m_length * m_width;
//	}
//
//	bool equal_or_not(Cube& c)//�ж�����Cube�Ƿ���� ���ò��ÿ����µ��ڴ�ռ�
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
//bool equal_or_not(Cube& c1, Cube& c2)//�ж�����Cube�Ƿ���� ���ò��ÿ����µ��ڴ�ռ�
//{
//	if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
//		return true;
//	return false;
//}
//
//int main()
//{
//	Cube a;
//	cout << "����Cube a�ĸ߳���";
//	a.setHeight(0);
//	a.setLength(0);
//	a.setWidth(0);
//	cout << "Cube a�ı����:" << a.surface_area() << endl;
//	cout << "Cube a�����:" << a.body_agents() << endl;
//
//	Cube b;
//	cout << "����Cube b�ĸ߳���";
//	b.setHeight(0);
//	b.setLength(0);
//	b.setWidth(0);
//	cout << "Cube b�ı����:" << b.surface_area() << endl;
//	cout << "Cube b�����:" << b.body_agents() << endl;
//
//	Cube c;
//	cout << "����Cube c�ĸ߳���";
//	c.setHeight(0);
//	c.setLength(0);
//	c.setWidth(0);
//	cout << "Cube c�ı����:" << c.surface_area() << endl;
//	cout << "Cube c�����:" << c.body_agents() << endl;
//
//	if (equal_or_not(a, b))
//		cout << "a b" << "���" << endl;
//	else
//		cout << "a b" << "�����" << endl;
//
//	if(a.equal_or_not(c))
//		cout << "a c" << "���" << endl;
//	else
//		cout << "a c" << "�����" << endl;
//
//	return 0;
//}