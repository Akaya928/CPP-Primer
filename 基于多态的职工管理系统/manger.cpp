#include"manger.h"

Manger::Manger(string name, int id, string did)
{
	m_Name = name;
	m_Did = did;
	m_Id = id;
}

void Manger::getInfo()
{
	cout << "Ա��������" << m_Name
		<< "\tԱ����ţ�" << m_Id
		<< "\tԱ�����ű�ţ�" << m_Did
		<< "\tԱ��ְ�𣺶��ϰ帺��"
		<< "\tԱ�����ţ�" << getDept() << endl;
}

string Manger::showName()
{
	return m_Name;
}

int Manger::showId()
{
	return m_Id;
}

string Manger::showDid()
{
	return m_Did;
}

string Manger::showDuty()
{
	return string("���ϰ帺��");
}


string Manger::getDept()
{
	return string("MANGER");
}