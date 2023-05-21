#pragma once
#include"workerBase.h"

class Emploee : public WorkerBase
{
public:

	Emploee(string name, int id, string did);

	virtual void getInfo();

	virtual string showName();

	virtual int showId();

	virtual string showDid();

	virtual string showDuty();

	virtual string getDept();
};