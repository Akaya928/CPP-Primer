#include"emploee.h"

Emploee::Emploee(string name, int id, string did)
{
	m_Name = name;
	m_Did = did;
	m_Id = id;
}

void Emploee::getInfo()
{
	cout << "Ա��������" << m_Name
		<< "\tԱ����ţ�" << m_Id
		<< "\tԱ�����ű�ţ�" << m_Did
		<< "\tԱ��ְ�𣺶Ծ�����"
		<< "\tԱ�����ţ�" << getDept() << endl;
}

string Emploee::showName()
{
	return m_Name;
}

int Emploee::showId()
{
	return m_Id;
}

string Emploee::showDid()
{
	return m_Did;
}

string Emploee::showDuty()
{
	return string("�Ծ�����");
}


string Emploee::getDept()
{
	return string("EMPLOEE");
}