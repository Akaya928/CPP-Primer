//案例描述
//电脑主要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于数据处理）
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel和Lenovo
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作

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
//	//提供工作函数
//	void work()
//	{
//		m_cpu->calculate();
//		m_gpu->imageProcessing();
//		m_memorySticks->dataProcessing();
//	}
//
//	//提供析构函数 释放3个电脑零件
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
////具体厂商
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
//	//第一台电脑的零件
//	CPU * cpu = new Intel_CPU;
//	GPU * gpu = new Intel_GPU;
//	Memory_Sticks * memorySticks = new Lenovo_Memory_Sticks;
//
//	cout << "第一台电脑" << endl;
//	//第一台电脑的组装
//	Computer* computer1 = new Computer(cpu, gpu, memorySticks);
//	computer1->work();
//	delete computer1;
//
//	cout << "第二台电脑" << endl;
//	//第二台电脑
//	Computer* computer2 = new Computer(new Intel_CPU, new Intel_GPU, new Intel_Memory_Sticks);
//	computer2->work();
//	delete computer2;
//	
//	cout << "第三台电脑" << endl;
//	//第三台电脑
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