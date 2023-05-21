//��������
//������Ҫ��ɲ���ΪCPU�����ڼ��㣩���Կ���������ʾ�����ڴ������������ݴ���
//��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel��Lenovo
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���

//#include<iostream>
//
//using namespace std;
//
//class CPU
//{
//public:
//
//	virtual void calculate() = 0;
//};
//
//class GPU
//{
//public:
//
//	virtual void imageProcessing() = 0;
//};
//
//class Memory_Sticks
//{
//public:
//
//	virtual void dataProcessing() = 0;
//};
//
//class Computer
//{
//public:
//
//	Computer(CPU * cpu, GPU * gpu, Memory_Sticks * memorySticks)
//	{
//		m_cpu = cpu;
//		m_gpu = gpu;
//		m_memorySticks = memorySticks;
//	}
//
//	//�ṩ��������
//	void work()
//	{
//		m_cpu->calculate();
//		m_gpu->imageProcessing();
//		m_memorySticks->dataProcessing();
//	}
//
//	//�ṩ�������� �ͷ�3���������
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_gpu != NULL)
//		{
//			delete m_gpu;
//			m_gpu = NULL;
//		}
//
//		if (m_memorySticks != NULL)
//		{
//			delete m_memorySticks;
//			m_memorySticks = NULL;
//		}
//	}
//
//private:
//
//	CPU * m_cpu;
//	GPU * m_gpu;
//	Memory_Sticks * m_memorySticks;
//};
//
////���峧��
//class Lenovo_CPU : public CPU
//{
//public:
//	
//	virtual void calculate()
//	{
//		cout << "CPU from Lenovo" << endl;
//	}
//};
//
//class Lenovo_GPU : public GPU
//{
//public:
//
//	virtual void imageProcessing()
//	{
//		cout << "GPU from Lenovo" << endl;
//	}
//};
//
//class Lenovo_Memory_Sticks : public Memory_Sticks
//{
//public:
//
//	virtual void dataProcessing()
//	{
//		cout << "memorySticks from Lenovo" << endl;
//	}
//};
//
//class Intel_CPU : public CPU
//{
//public:
//
//	virtual void calculate()
//	{
//		cout << "CPU from Intel" << endl;
//	}
//};
//
//class Intel_GPU : public GPU
//{
//public:
//
//	virtual void imageProcessing()
//	{
//		cout << "GPU from Intel" << endl;
//	}
//};
//
//class Intel_Memory_Sticks : public Memory_Sticks
//{
//public:
//
//	virtual void dataProcessing()
//	{
//		cout << "memorySticks from Intel" << endl;
//	}
//};
//
//void test01()
//{
//	//��һ̨���Ե����
//	CPU * cpu = new Intel_CPU;
//	GPU * gpu = new Intel_GPU;
//	Memory_Sticks * memorySticks = new Lenovo_Memory_Sticks;
//
//	cout << "��һ̨����" << endl;
//	//��һ̨���Ե���װ
//	Computer* computer1 = new Computer(cpu, gpu, memorySticks);
//	computer1->work();
//	delete computer1;
//
//	cout << "�ڶ�̨����" << endl;
//	//�ڶ�̨����
//	Computer* computer2 = new Computer(new Intel_CPU, new Intel_GPU, new Intel_Memory_Sticks);
//	computer2->work();
//	delete computer2;
//	
//	cout << "����̨����" << endl;
//	//����̨����
//	Computer* computer3 = new Computer(new Lenovo_CPU, new Lenovo_GPU, new Lenovo_Memory_Sticks);
//	computer3->work();
//	delete computer3;
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}