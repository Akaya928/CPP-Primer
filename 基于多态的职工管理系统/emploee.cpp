#include"emploee.h"

Emploee::Emploee(string name, int id, string did)
{
	m_Name = name;
	m_Did = did;
	m_Id = id;
}

void Emploee::getInfo()
{
	cout << "员工姓名：" << m_Name
		<< "\t员工编号：" << m_Id
		<< "\t员工部门编号：" << m_Did
		<< "\t员工职责：对经理负责"
		<< "\t员工部门：" << getDept() << endl;
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
	return string("对经理负责");
}


string Emploee::getDept()
{
	return string("EMPLOEE");
}