//1.������������� () Ҳ��������
//2.�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//3.�º���û�й̶���д�����ǳ����

//��������
//�ص㣺��ǰ��ִ������������ͷ�

//#include<iostream>
//#include<string>
//using namespace std;
//
//class MyPrint
//{
//public:
//
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//	void operator()(int sum)
//	{
//		cout << sum << endl;
//	}
//
//};
//
//class MyAdd
//{
//public:
//
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test01()
//{
//	MyPrint printf;
//	printf("Hello World!");
//}
//
//void test02()
//{
//	//������������	����()  =>  ����һ����������(�ص�:��ǰ��ִ������������ͷ�)
//	MyPrint()("Hello world!");
//}
//
//void test03()
//{
//	MyPrint()(MyAdd()(5, 6));
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}