//���ã���������Զ������������

//ע��
//1.�������ó�Ա��������<< ��Ϊ�޷�ʵ��cout����ࣨ������ó�Ա���� �� firm.operator<<(ostreram& cout)  ==>  firm << cout��
//2.ֻ������ȫ�ֺ�������<<
//3.cout ���� ostream(��׼�����) �� cout������� ȫ��ֻ����һ�� ���������õķ�ʽ����(���ñ������ȡ���� &������������)
//4.��ʽ��� ��:cout << ... << ... << ...	���Ҫ��ʽ���ã�����ֵ��Ҫ��Ϊ��һ�����õĲ����������ͷ���ֵ�ͱ���Ҫͳһ

//�ܽ�
//����������������Ԫ����ʵ������Զ�����������

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Firm
//{
//	friend ostream& operator<<(ostream& cout, Firm& f);
//
//public:
//
//	Firm(string C_N, int N_o_E, int E_S);
//	
//	string Company_Name;
//	int Number_of_Employees;
//
//private:
//
//	int Employee_Salaries;
//};
//
//Firm::Firm(string C_N, int N_o_E, int E_S) :Company_Name(C_N), Number_of_Employees(N_o_E), Employee_Salaries(E_S)
//{
//
//}
//
//ostream& operator<<(ostream& cout, Firm& f) //���ʣ�cout << f
//{
//	cout << "Company Name:" << f.Company_Name << "\tNumber of Company:" << f.Number_of_Employees << "\tEmploee Salaries:" << f.Employee_Salaries;
//
//	return cout;
//}
//
//void test01()
//{
//	Firm f1("Apple", 12000, 20000);
//	Firm f2("HUAWEI", 8000, 30000);
//	Firm f3("MIHOYO", 20000, 20000);
//	cout << f1 << endl
//		<< f2 << endl
//		<< f3 << endl;//��ʽ��� ���Ҫ��ʽ���ã�����ֵ��Ҫ��Ϊ��һ�����õĲ����������ͷ���ֵ�ͱ���Ҫͳһ��������Ҫ"operator����"����һ����������Ϊostream&��ֵ ����cout
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}