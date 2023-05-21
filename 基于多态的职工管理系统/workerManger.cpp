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
		cout << "�ļ�Ϊ��!" << endl;
		this->m_WorkerNumber = 0;

		this->m_WorkerArray = NULL;

		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->getNumber();
	cout << "ְ������Ϊ��" << num << endl;
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ��ְ����ְ����ţ�" << endl;
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

			cout << "ɾ���ɹ���" << endl;
		}
		else
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��!" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManger::modWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "������Ҫ�޸ĵ�ְ����ְ����ţ�" << endl;
		int id;
		cin >> id;

		if (this->isExist(id) != -1)
		{
			delete this->m_WorkerArray[this->isExist(id)];

			int newId = 0;
			string newName = "";
			string newDeptId = "";
			int dSelect = 0;

			cout << "���ҵ�" << id << "��ְ�����������µ�ְ���ţ�" << endl;
			cin >> newId;

			cout << "�������µ�������" << endl;
			cin >> newName;

			cout << "�������µĲ��ű�ţ�" << endl;
			cin >> newDeptId;

			cout << "�������µĸ�λ��" << endl;
			cout << "1.��ְͨ��" << endl
				<< "2.����" << endl
				<< "3.�ϰ�" << endl;

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

			cout << "�޸ĳɹ���" << endl;

			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManger::findWorker()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��ѡ����ҷ�ʽ��" << endl
			<< "1.��ְ����Ų���" << endl
			<< "2.��ְ����������" << endl;

		int select = 0;
		cin >> select;

		if (1 == select)
		{
			int id = 0;
			cout << "������Ҫ����ְ���ı�ţ�" << endl;
			cin >> id;

			if (this->isExist(id) != -1)
			{
				cout << "���ҳɹ�����ְ������Ϣ���£�" << endl;
				this->m_WorkerArray[this->isExist(id)]->getInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else if (2 == select)
		{
			string name;
			cout << "������Ҫ����ְ����������" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 1; i < this->m_WorkerNumber; ++i)
			{
				if (this->m_WorkerArray[i]->showName() == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< this->m_WorkerArray[i]->showDid()
						<< "��ְ������Ϣ���£�" << endl;

					this->m_WorkerArray[i]->getInfo();
					flag = true;

					break;
				}
			}

			if (!flag)
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ķ�ʽ��" << endl
			<< "1.��ְ���Ž�������" << endl
			<< "2.��ְ���Ž��н���" << endl;

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

		cout << "����ɹ��������Ľ��Ϊ��" << endl;
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

	cout << "���������ְ����������" << endl;

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
			cout << "�������" << i + 1 << "����ְ���ı�ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ����������" << endl;
			cin >> name;

			cout << "�������" << i + 1 << "����ְ���Ĳ��ű�ţ�" << endl;
			cin >> dId;

			cout << "�������" << i + 1 << "����ְ���ĸ�λ��" << endl
				<< "1.��ְͨ��" << endl
				<< "2.����" << endl
				<< "3.�ϰ�" << endl;
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

		cout << "�ɹ����" << add_Num << "����ְ��" << endl;

		this->fileIsEmpty = false;
	}
	else
		cout << "������������" << endl;

	system("pause");
	system("cls");
}

void WorkerManger::cleanFile()
{
	cout << "�Ƿ�ȷ����գ�" << endl
		<< "1.ȷ��" << endl
		<< "2.����" << endl;

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

		cout << "ɾ����·ඣ�" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManger::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
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
	cout << "1.�˳��������" << endl
		<< "2.����ְ����Ϣ" << endl
		<< "3.��ʾְ����Ϣ" << endl
		<< "4.ɾ����ְְ��" << endl
		<< "5.�޸�ְ����Ϣ" << endl
		<< "6.����ְ����Ϣ" << endl
		<< "7.���ձ������" << endl
		<< "8.��������ĵ�" << endl;
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