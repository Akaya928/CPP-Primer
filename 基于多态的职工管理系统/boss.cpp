#include"boss.h"

Boss::Boss(string name, int id, string did)
{
	m_Name = name;
	m_Did = did;
	m_Id = id;
}

void Boss::getInfo()
{
	cout << "Ա��������" << m_Name
		<< "\tԱ����ţ�" << m_Id
		<< "\tԱ�����ű�ţ�" << m_Did
		<< "\tԱ��ְ�𣺹���������˾"
		<< "\tԱ�����ţ�" << getDept() << endl;
}

string Boss::showName()
{
	return m_Name;
}

int Boss::showId()
{
	return m_Id;
}

string Boss::showDid()
{
	return m_Did;
}

string Boss::showDuty()
{
	return string("����������˾");
}

string Boss::getDept()
{
	return string("BOSS");
}