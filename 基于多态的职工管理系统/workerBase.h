#pragma once
#include<iostream>
#include<string>

using namespace std;

class WorkerBase
{
public:

	virtual void getInfo() = 0;

	virtual string showName() = 0;

	virtual int showId() = 0;

	virtual string showDid() = 0;

	virtual string showDuty() = 0;

	virtual string getDept() = 0;

protected:

	string m_Name;  //姓名

	string m_Duty;  //职责

	int m_Id;  //员工编号

	string m_Did;  //部门编号
};