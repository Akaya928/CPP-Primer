#include"boss.h"

Boss::Boss(string name, int id, string did)
{
	m_Name = name;
	m_Did = did;
	m_Id = id;
}

void Boss::getInfo()
{
	cout << "员工姓名：" << m_Name
		<< "\t员工编号：" << m_Id
		<< "\t员工部门编号：" << m_Did
		<< "\t员工职责：管理整个公司"
		<< "\t员工部门：" << getDept() << endl;
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
	return string("管理整个公司");
}

string Boss::getDept()
{
	return string("BOSS");
}