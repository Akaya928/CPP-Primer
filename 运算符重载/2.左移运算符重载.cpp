//作用：可以输出自定义的数据类型

//注意
//1.不会利用成员函数重载<< 因为无法实现cout在左侧（如果利用成员函数 则 firm.operator<<(ostreram& cout)  ==>  firm << cout）
//2.只能利用全局函数重载<<
//3.cout 属于 ostream(标准输出流) 且 cout这个对象 全局只能有一个 所以用引用的方式传递(引用本身就是取别名 &后面名称随意)
//4.链式编程 如:cout << ... << ... << ...	如果要链式调用，返回值就要作为下一个调用的参数，参数和返回值就必须要统一

//总结
//重载左运算符配合友元可以实现输出自定义数据类型

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
//ostream& operator<<(ostream& cout, Firm& f) //本质：cout << f
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
//		<< f3 << endl;//链式编程 如果要链式调用，返回值就要作为下一个调用的参数，参数和返回值就必须要统一。所以需要"operator函数"返回一个数据类型为ostream&的值 就是cout
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}