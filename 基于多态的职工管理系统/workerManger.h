#pragma once
#include<iostream>
#include<fstream>
#include"workerBase.h"
#include"emploee.h"
#include"manger.h"
#include"boss.h"

#define FILENAME "workerFile.txt"

using namespace std;

class WorkerManger
{
public:

	WorkerManger();

	void showMenu();

	void addWorker();

	void save();

	bool fileIsEmpty;

	int getNumber();

	void initWorker();

	void showWorker();

	int isExist(int id);

	void delWorker();

	void findWorker();

	void modWorker();

	void sortWorker();

	void cleanFile();

	void exitSystem();

	~WorkerManger();

protected:

	int m_WorkerNumber;

	WorkerBase** m_WorkerArray;
};