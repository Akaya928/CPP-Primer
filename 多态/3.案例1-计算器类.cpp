//��������
//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������

//�ܽ�:C++�����ᳫ���ö�̬��Ƴ���ṹ����Ϊ��̬���ŵ�ܶ�
//��̬�ĺô�:
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�

//#include<iostream>
//#include<string>
//using namespace std;
//
////��ͨд��ʵ�ּ�������
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		int sum = 0;
//		if ("+" == oper)
//			sum = num1 + num2;
//		else if ("-" == oper)
//			sum = num1 - num2;
//		else if ("*" == oper)
//			sum = num1 * num2;
//		else
//			return NULL;
//
//		return sum;
//	}
//	//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
//	//������ʵ������ �ᳫ ����ԭ��
//	//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//
//	int num1;
//	int num2;
//};
//
//void test01()
//{
//	Calculator c;
//	c.num1 = 202;
//	c.num2 = 101;
//
//	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
//}
//
////���ö�̬����ʵ�ּ�������
//
////��̬�ĺô�:
////1.��֯�ṹ����
////2.�ɶ���ǿ
////3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
//
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int num1;
//	int num2;
//};
//
//class addCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
//
//class subCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//
//class mulCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//
//void test02()
//{
//	//��̬��ʹ������
//	//����ָ���������ָ���������(������ʹ�ø����ָ��ָ���������)
//
//	//�ӷ�����
//  AbstractCalculator* Ab_C = new addCalculator;
//	Ab_C->num1 = 2002;
//	Ab_C->num2 = 1001;
//	cout << Ab_C->num1 << "+" << Ab_C->num2 << "=" << Ab_C->getResult() << endl;
//	delete Ab_C;
//
//	//��������
//	Ab_C = new subCalculator;
//	Ab_C->num1 = 903;
//	Ab_C->num2 = 874;
//	cout << Ab_C->num1 << "+" << Ab_C->num2 << "=" << Ab_C->getResult() << endl;
//	delete Ab_C;
//
//	//�˷�����
//	Ab_C = new mulCalculator;
//	Ab_C->num1 = 45;
//	Ab_C->num2 = 1349;
//	cout << Ab_C->num1 << "+" << Ab_C->num2 << "=" << Ab_C->getResult() << endl;
//	delete Ab_C;
//}
//
//int main()
//{
//	cout << "��ͳ������д��" << endl;
//	test01();
//	cout << "���ö�̬ʵ�ּ�����" << endl;
//	test02();
//
//	return 0;
//}