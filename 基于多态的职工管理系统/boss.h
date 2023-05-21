#pragma once
#include"workerBase.h"

class Boss : public WorkerBase
{
public:

	Boss(string name, int id, string did);

	virtual void getInfo();
	
	virtual string showName();

	virtual int showId();

	virtual string showDid();

	virtual string showDuty();

	virtual string getDept();
};