#include"manger.h"

Manger::Manger(string name, int id, string did)
{
	m_Name = name;
	m_Did = did;
	m_Id = id;
}

void Manger::getInfo()
{
	cout << "员工姓名：" << m_Name
		<< "\t员工编号：" << m_Id
		<< "\t员工部门编号：" << m_Did
		<< "\t员工职责：对老板负责"
		<< "\t员工部门：" << getDept() << endl;
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
	return string("对老板负责");
}


string Manger::getDept()
{
	return string("MANGER");
}