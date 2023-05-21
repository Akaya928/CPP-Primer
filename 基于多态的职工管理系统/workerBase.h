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

	string m_Name;  //����

	string m_Duty;  //ְ��

	int m_Id;  //Ա�����

	string m_Did;  //���ű��
};