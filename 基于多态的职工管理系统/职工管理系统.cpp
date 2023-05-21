//I.管理系统需求
//1.职工管理系统可以用来管理公司内所有员工的信息
//2.主要利用C++来实现一个基于多态的职工管理系统

//II.公司中职工分为三类：普通员工、经理、老板，显示信息时，需要显示职工编号、职工姓名、职工岗位、以及职责
//1.普通职工职责：完成经理交给的任务
//2.经理职责：完成老板交给的任务
//3.老板职责：管理公司所有事务

//III.管理系统中需要实现的功能如下：
//1.退出管理程序：退出当前的管理系统
//2.增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为职工编号、姓名、部门编号
//3.显示职工信息：显示公司内所有职工的信息
//4.删除离职职工：按照编号删除指定的职工
//5.修改职工信息：按照编号修改职工个人信息
//6.查找职工信息：按照职工的编号或者职工的姓名进行查找相关的人员信息
//7。按照编号排序：按照职工编号，进行排序，排序规则由用户指定
//8.清空所有文档：清空文件中记录的所有职工信息（清空前需要再次确认，防止误操作）

#include<iostream>
#include"workerManger.h"
#include"workerBase.h"
#include"boss.h"
#include"emploee.h"
#include"manger.h"

using namespace std;

int main()
{
	WorkerManger wm;

	while (true)
	{
		wm.showMenu();

		char choice;
		cin >> choice;

		switch (choice)  //用string会报错
		{
		case '1':
			system("cls");
			wm.exitSystem();
			return 0;
		case '2':
			system("cls");
			wm.addWorker();
			break;
		case '3':
			system("cls");
			wm.showWorker();
			break;
		case '4':
			system("cls");
			wm.delWorker();
			break;
		case '5':
			system("cls");
			wm.modWorker();
			break;
		case '6':
			system("cls");
			wm.findWorker();
			break;
		case '7':
			system("cls");
			wm.sortWorker();
			break;
		case '8':
			system("cls");
			wm.cleanFile();
			break;
		default:
			system("cls");
		}
	}
	

	return 0;
}