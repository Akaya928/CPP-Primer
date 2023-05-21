//运算符重载概念:
//对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

//加法运算符重载
//编译器定义的函数  operator+();
//作用：实现两个自定义数据类型相加的运算

//总结：
//1.对于内置的数据类型的表达式的运算符是不可以改变的
//2.不要滥用运算符重载

//#include<iostream>
//using namespace std;
//
//class Student
//{
//public:
//
//	Student(int m, int p, int E);
//
//	int showIfo_Math();
//
//	int showIfo_Program();
//
//	int showIfo_English();
//
//	Student operator+(Student &p1);
//
//private:
//
//	int math;
//	int program;
//	int English;
//};
//
//Student::Student(int m, int p, int E) :math(m), program(p), English(E)
//{
//
//}
//
//int Student::showIfo_Math()
//{
//	return math;
//}
//
//int Student::showIfo_Program()
//{
//	return program;
//}
//
//int Student::showIfo_English()
//{
//	return English;
//}
//
////1.通过成员函数实现加号重载	私有成员只在类内访问
//Student Student::operator+(Student &p1)
//{
//	
//	Student temp(0,0,0);
//	temp.math = p1.math + this->math;
//	temp.program = p1.program + this->program;
//	temp.English = p1.English + this->English;
//	
//	return temp;
//}
//
//void test01()
//{
//	Student p(78,67,79);
//	Student p1(90, 99, 89);
//	Student p2 = p + p1;
//
//	cout << "Student\tEnglish\tProgram\tMath" << endl
//		<< "p:" << "\t" << p.showIfo_English() << "\t" << p.showIfo_Program() << "\t" << p.showIfo_Math() << endl
//		<< "p1:" << "\t" << p1.showIfo_English() << "\t" << p1.showIfo_Program() << "\t" << p1.showIfo_Math() << endl
//		<< "p2:" << "\t" << p2.showIfo_English() << "\t" << p2.showIfo_Program() << "\t" << p2.showIfo_Math() << endl;
//
//}
//
//class Emploee
//{
//	friend Emploee operator+(Emploee& e1, Emploee& e2);
//	friend Emploee operator+(Emploee& e1, int salary);
//
//public:
//
//	Emploee (int salary);
//
//	int showIfo_Salary();
//
//private:
//
//	int salary;
//};
//
//Emploee::Emploee(int salary)
//{
//	this->salary = salary;
//}
//
//int Emploee::showIfo_Salary()
//{
//	return this->salary;
//}
//
////2.通过全局函数实现加号重载	由于私有成员 需要使用 友元 进而在类外访问私有成员
//Emploee operator+(Emploee& e1, Emploee& e2)
//{
//	Emploee temp(0);
//	temp.salary= e2.salary + e1.salary;
//
//	return temp;
//}
//
////3.运算符重载也可以发生函数重载
//Emploee operator+(Emploee& e1, int salary)
//{
//	Emploee temp(0);
//	temp.salary = salary + e1.salary;
//
//	return temp;
//}
//
//void test02()
//{
//	Emploee e1(12000);
//	Emploee e2(20000);
//	Emploee e3 = e1 + e2;
//
//	cout << endl << "Emploee\tSalary" << endl
//		<< "e1:\t" << e1.showIfo_Salary() << endl
//		<< "e2:\t" << e2.showIfo_Salary() << endl
//		<< "e3:\t" << e3.showIfo_Salary() << endl;
//}
//
//void test03()
//{
//	Emploee e4(15000);
//	int salary = 8000;
//	Emploee e5 = e4 + salary;
//	cout << endl << "Emploee\tSalary" << endl
//		<< "e4:\t" << e4.showIfo_Salary() << endl
//		<< "e5:\t" << e5.showIfo_Salary() << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	return 0;
//}