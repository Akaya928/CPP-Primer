//I.����ϵͳ����
//1.ְ������ϵͳ������������˾������Ա������Ϣ
//2.��Ҫ����C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ

//II.��˾��ְ����Ϊ���ࣺ��ͨԱ���������ϰ壬��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ���Լ�ְ��
//1.��ְͨ��ְ����ɾ�����������
//2.����ְ������ϰ彻��������
//3.�ϰ�ְ�𣺹���˾��������

//III.����ϵͳ����Ҫʵ�ֵĹ������£�
//1.�˳���������˳���ǰ�Ĺ���ϵͳ
//2.����ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪְ����š����������ű��
//3.��ʾְ����Ϣ����ʾ��˾������ְ������Ϣ
//4.ɾ����ְְ�������ձ��ɾ��ָ����ְ��
//5.�޸�ְ����Ϣ�����ձ���޸�ְ��������Ϣ
//6.����ְ����Ϣ������ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
//7�����ձ�����򣺰���ְ����ţ�������������������û�ָ��
//8.��������ĵ�������ļ��м�¼������ְ����Ϣ�����ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ�������

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

		switch (choice)  //��string�ᱨ��
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