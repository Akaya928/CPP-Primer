#include"workerManger.h"

WorkerManger::WorkerManger()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "File failed to open!" << endl;

		this->m_WorkerNumber = 0;

		this->m_WorkerArray = NULL;

		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空!" << endl;
		this->m_WorkerNumber = 0;

		this->m_WorkerArray = NULL;

		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->getNumber();
	cout << "职工人数为：" << num << endl;
	this->m_WorkerNumber = num;

	this->m_WorkerArray = new WorkerBase * [this->m_WorkerNumber];
	this->initWorker();
}

int WorkerManger::getNumber()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	string dId;
	string duty;
	string dept;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId && ifs >> dept && ifs >> duty)
	{
		++num;
	}

	return num;
}

void WorkerManger::initWorker()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	string dId;
	string duty;
	string dept;
	int index = 0;

	while(ifs >> id && ifs >> name && ifs >> dId && ifs >> dept && ifs >> duty)
	{
		WorkerBase* worker = NULL;

		if (dept == "EMPLOEE")
		{
			worker = new Emploee(name, id, dId);
		}
		else if (dept == "MANGER")
		{
			worker = new Manger(name, id, dId);
		}
		else
		{
			worker = new Boss(name, id, dId);
		}

		this->m_WorkerArray[index] = worker;
		++index;
	}

	ifs.close();
}

void WorkerManger::showWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_WorkerNumber; ++i)
		{
			m_WorkerArray[i]->getInfo();
		}
	}
	system("pause");
	system("cls");
}

int WorkerManger::isExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_WorkerNumber; ++i)
	{
		if (id == this->m_WorkerArray[i]->showId())
		{
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManger::delWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入想要删除职工的职工编号：" << endl;
		int id;
		cin >> id;
		if (this->isExist(id) != -1)
		{
			for (int i = this->isExist(id); i < this->m_WorkerNumber - 1; ++i)
			{
				this->m_WorkerArray[i] = this->m_WorkerArray[i + 1];
			}
			--this->m_WorkerNumber;
			this->save();

			cout << "删除成功！" << endl;
		}
		else
			cout << "删除失败，未找到该职工!" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManger::modWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入要修改的职工的职工编号：" << endl;
		int id;
		cin >> id;

		if (this->isExist(id) != -1)
		{
			delete this->m_WorkerArray[this->isExist(id)];

			int newId = 0;
			string newName = "";
			string newDeptId = "";
			int dSelect = 0;

			cout << "查找到" << id << "号职工，请输入新的职工号：" << endl;
			cin >> newId;

			cout << "请输入新的姓名：" << endl;
			cin >> newName;

			cout << "请输入新的部门编号：" << endl;
			cin >> newDeptId;

			cout << "请输入新的岗位：" << endl;
			cout << "1.普通职工" << endl
				<< "2.经理" << endl
				<< "3.老板" << endl;

			cin >> dSelect;

			WorkerBase* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Emploee(newName, newId, newDeptId);
				break;
			case 2:
				worker = new Manger(newName, newId, newDeptId);
				break;
			case 3:
				worker = new Boss(newName, newId, newDeptId);
				break;
			default:
				break;
			}

			this->m_WorkerArray[this->isExist(id)] = worker;

			cout << "修改成功！" << endl;

			this->save();
		}
		else
		{
			cout << "修改失败，查无此人！" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManger::findWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请选择查找方式：" << endl
			<< "1.按职工编号查找" << endl
			<< "2.按职工姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (1 == select)
		{
			int id = 0;
			cout << "请输入要查找职工的编号：" << endl;
			cin >> id;

			if (this->isExist(id) != -1)
			{
				cout << "查找成功！该职工的信息如下：" << endl;
				this->m_WorkerArray[this->isExist(id)]->getInfo();
			}
			else
			{
				cout << "查找失败，查无此人！" << endl;
			}
		}
		else if (2 == select)
		{
			string name;
			cout << "请输入要查找职工的姓名：" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 1; i < this->m_WorkerNumber; ++i)
			{
				if (this->m_WorkerArray[i]->showName() == name)
				{
					cout << "查找成功，职工编号为："
						<< this->m_WorkerArray[i]->showDid()
						<< "的职工的信息如下：" << endl;

					this->m_WorkerArray[i]->getInfo();
					flag = true;

					break;
				}
			}

			if (!flag)
			{
				cout << "查找失败，查无此人！" << endl;
			}
		}
	}

	system("pause");
	system("cls");
}

void WorkerManger::sortWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序的方式：" << endl
			<< "1.按职工号进行升序" << endl
			<< "2.按职工号进行降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_WorkerNumber - 1; ++i)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_WorkerNumber; ++j)
			{
				if (1 == select)
				{
					if (this->m_WorkerArray[minOrMax]->showId() > this->m_WorkerArray[j]->showId())
					{
						minOrMax = j;
					}
				}
				else
				{
					if (this->m_WorkerArray[minOrMax]->showId() < this->m_WorkerArray[j]->showId())
					{
						minOrMax = j;
					}
				}
			}

			if (i != minOrMax)
			{
				WorkerBase* temp = this->m_WorkerArray[i];
				this->m_WorkerArray[i] = this->m_WorkerArray[minOrMax];
				this->m_WorkerArray[minOrMax] = temp;
			}
		}

		cout << "排序成功！排序后的结果为：" << endl;
		this->save();
		this->showWorker();
	}
}

void WorkerManger::addWorker()
{
	int id;
	string name;
	string dId;
	int dSelect;

	cout << "请输入添加职工的数量：" << endl;

	int add_Num = 0;
	cin >> add_Num;

	if (add_Num > 0)
	{
		int new_Size = this->m_WorkerNumber + add_Num;

		WorkerBase** newSpace = new WorkerBase* [new_Size];

		if (this->m_WorkerArray != NULL)
		{
			for (int i = 0; i < this->m_WorkerNumber; ++i)
			{
				newSpace[i] = this->m_WorkerArray[i];
			}
		}

		for (int i = 0; i < add_Num; ++i)
		{
			cout << "请输入第" << i + 1 << "个新职工的编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工的姓名：" << endl;
			cin >> name;

			cout << "请输入第" << i + 1 << "个新职工的部门编号：" << endl;
			cin >> dId;

			cout << "请输入第" << i + 1 << "个新职工的岗位：" << endl
				<< "1.普通职工" << endl
				<< "2.经理" << endl
				<< "3.老板" << endl;
			cin >> dSelect;

			WorkerBase* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Emploee(name, id, dId);
				break;
			case 2:
				worker = new Manger(name, id, dId);
				break;
			case 3:
				worker = new Boss(name, id, dId);
				break;
			default:
				break;
			}
			newSpace[this->m_WorkerNumber + i] = worker;
		}
		delete[] this->m_WorkerArray;

		this->m_WorkerArray = newSpace;

		this->m_WorkerNumber = new_Size;

		this->save();

		cout << "成功添加" << add_Num << "个新职工" << endl;

		this->fileIsEmpty = false;
	}
	else
		cout << "输入数据有误" << endl;

	system("pause");
	system("cls");
}

void WorkerManger::cleanFile()
{
	cout << "是否确定清空？" << endl
		<< "1.确定" << endl
		<< "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (1 == select)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_WorkerArray != NULL)
		{
			for (int i = 0; i < this->m_WorkerNumber; ++i)
			{
				delete this->m_WorkerArray[i];
				this->m_WorkerArray[i] = NULL;
			}

			delete this->m_WorkerArray;
			this->m_WorkerArray = NULL;
			this->m_WorkerNumber = 0;
			this->fileIsEmpty = true;
		}

		cout << "删库跑路喽！" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManger::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
}

void WorkerManger::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_WorkerNumber; ++i)
	{
		ofs << this->m_WorkerArray[i]->showId() << " "
			<< this->m_WorkerArray[i]->showName() << " "
			<< this->m_WorkerArray[i]->showDid() << " "
			<< this->m_WorkerArray[i]->getDept() << " "
			<< this->m_WorkerArray[i]->showDuty() << endl;
	}

	ofs.close();
}

void WorkerManger::showMenu()
{
	cout << "1.退出管理程序" << endl
		<< "2.增加职工信息" << endl
		<< "3.显示职工信息" << endl
		<< "4.删除离职职工" << endl
		<< "5.修改职工信息" << endl
		<< "6.查找职工信息" << endl
		<< "7.按照编号排序" << endl
		<< "8.清空所有文档" << endl;
}

WorkerManger::~WorkerManger()
{
	if (this->m_WorkerArray != NULL)
	{
		for (int i = 0; i < this->m_WorkerNumber; ++i)
		{
			delete this->m_WorkerArray[i];
			this->m_WorkerArray[i] = NULL;
		}

		delete this->m_WorkerArray;
		this->m_WorkerArray = NULL;
		this->m_WorkerNumber = 0;
		this->fileIsEmpty = true;
	}
}