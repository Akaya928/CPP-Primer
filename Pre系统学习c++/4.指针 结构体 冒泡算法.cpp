//I Pointer
//一.指针基础
//A.空指针(指针变量指向内存中编号为0的空间)
//1.空指针指向的这块内存是不可访问的(0 ~ 225之间的内存编号是系统占用的，因此不可以访问)
//2.空指针用于给指针变量进行初始化
// 
//B.野指针
// 在程序中尽量避免出现野指针
// 
// C.关键字 const
// 1.const修饰指针 => 常量指针
// 当修饰的为常量指针时，指针的指向可以修改，但是指针指向的值不可以改
// 2.const修饰常量 => 指针常量
// 指针的指向不可以改，但是指针指向的值可以改
// 3.const既修饰指针又修饰常量
// 指针的指向和指针指向的值都不可以改
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* p1 = NULL;//空指针
//	int* p2 = (int*)0x1100;//野指针无权进行操作
//	const int* p3 = &a;//常量指针(指针指向的值不可以改，但是指针的指向可以改)
//	p3 = &b;//可以
//	*p3 = 20;//出现错误
//	int* const p4 = &a;//指针常量(指针的指向不可以改，但是指针指向的值可以改)
//	*p4 = 20;//可以
//	p4 = &b;//出现错误
//	const int* const p5 = &a;//(指针的指向和指针指向的值都不可以改)
//	p5 = &b;//出现错误
//	*p5 = 20;//出现错误
//
//	return 0;
//}

//二.数组与指针
//数组名就是数组的首地址
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//int main()
//{
//	int arr[10];
//	int* p;
//	srand((unsigned int)time(NULL));
//	for (int n = 0; n < 10; ++n)
//		arr[n] = rand() % 100 + 1;
//	p = arr + 3;//将p指向arr[3]
//	for(int n = 0; n < 10; ++n)
//		cout << arr[n] << " ";
//	cout << endl << *p;
//
//	return 0;
//}

//三.指针和函数(指针作为函数的参数)
//1.值传递
//实参的值不变，形参的值改变
//2.地址传递
//实参的值也跟随改变
//#include<iostream>
//using namespace std;
//void swap(int* p1, int* p2);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;//地址传递，会引起实参的值改变
//}

//四.指针，数组，函数结合————Bubbling
//#include<iostream>
//#include<ctime>
//#define N 20
//#define M 100
//using namespace std;
//
//void swap(int* p1, int* p2)
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//void Bubbling(int* p)//冒泡排序(地址传递)
//{
//	int i, j, temp;
//	for(i = 0; i < N - 1; ++i)
//		for (j = i; j < N; ++j)
//		{
//			if (*(p + i) > *(p + j))
//				swap(p + i, p + j);
//		}
//}
//
//void output(int* p)
//{
//	for (int n = 0; n < N; ++n)
//		cout << *(p + n) << " ";
//	cout << endl;
//}
//
//int main()
//{
//	int n;
//	int arr[N];
//	srand((unsigned int)time(NULL));
//	for (n = 0; n < N; ++n)
//		arr[n] = rand() % M + 1;
//	output(arr);
//	Bubbling(arr);
//	output(arr);
//
//	return 0;
//}



//II Structure
//一.结构体变量的几种创建方法
//在c++中创建变量时可以不加 struct
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//	int score;
//	string gender;
//}S3, S4 = {"Lisa", 19, 98, "female"};
//
//int main()
//{
//	Student S1;
//	S1.gender = "男";
//	S1.age = 18;
//	S1.name = "张三";
//	S1.score = 99;
//	cout << "Name " << S1.name << " Gender " << S1.gender << " Score" << S1.score << " Age " << S1.age << endl;
//	Student S2 = {"张三", 18, 99, "男"};
//	cout << "Name " << S2.name << " Gender " << S2.gender << " Score" << S2.score << " Age " << S2.age << endl;
//	S3.age = 19;
//	S3.gender = "男";
//	S3.name = "张三";
//	S3.score = 99;
//	cout << "Name " << S3.name << " Gender " << S3.gender << " Score" << S3.score << " Age " << S3.age << endl;
//	cout << "Name " << S4.name << " Gender " << S4.gender << " Score" << S4.score << " Age " << S4.age << endl;
//
//	return 0;
//}

//二.结构体数组
//struct 结构体名 数组名[元素个数] = {{}, {}, ...{}}
//
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Book
//{
//	string title;
//	string author;
//	int price;
//	int pages;
//};
//
//int main()
//{
//	Book Acfuns[5] =
//	{
//		{"C Prime", "Steve", 18, 438},
//		{"C Prime Plus", "John", 20, 698},
//		{"C++ Prime", "Dave", 14, 345},
//		{"C++ Prime Plus", "Elizabeth", 24, 875},
//		{"C程序设计", "谭浩强", 7, 362}
//	};
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << "Title:" << Acfuns[i].title << "\t"
//			<< "Author:" << Acfuns[i].author << "\t"
//			<< "Price:$" << Acfuns[i].price << "\t"
//			<< "Pages:" << Acfuns[i].pages << "\t" << endl;;
//	}
//
//	return 0;
//}

//三.结构体指针
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Food
//{
//	string name;
//	string taste;
//	int price;
//	string size;
//
//};
//
//int main()
//{
//	Food AP = {"Hot dry noodles", "Not bad", 7, "Large"};
//	Food* p = &AP;//通过指针指向结构体变量
//	cout << "Dish:" << p->name << endl;//通过指针访问结构体变量中的数据
//
//	return 0;
//}

//四.结构体嵌套结构体
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Student
//{
//	int ID;
//	string name;
//	string gender;
//	int age;
//};
//
//struct Teacher
//{
//	int ID;
//	string name;
//	string gender;
//	int age;
//	Student S1;
//};
//
//int main()
//{
//	Teacher T1;
//	T1.ID = 10010;
//	T1.name = "Sara";
//	T1.gender = "female";
//	T1.age = 23;
//	T1.S1.ID = 220947;
//	T1.S1.name = "Alice";
//	T1.S1.gender = "Female";
//	T1.S1.age = 17;
//	cout << "Teacher's ID:" << T1.ID << endl
//		<< "Teacher's name:" << T1.name << endl
//		<< "Teacher's gender:" << T1.gender << endl
//		<< "Teacher's age:" << "T1.age" << endl
//		<< "Her student's name:" << T1.S1.name << endl
//		<< "Her student's ID:" << T1.S1.ID << endl
//		<< "Her student's gender:" << T1.S1.gender << endl
//		<< "Her student's age:" << T1.S1.age << "\t" << endl;
//
//	return 0;
//}

//五.结构体作函数参数
//1.值传递
//2.地址传递(用到指针)
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Book
//{
//	string name;
//	string author;
//	int price;
//};
//
//void output1(struct Book B1)
//{
//	B1.author = "Dave";
//	cout << "Name:" << B1.name << endl
//		<< "Author:" << B1.author << endl
//		<< "Price:" << B1.price << endl;
//}
//
//void output2(struct Book* p)
//{
//	p->author = "Dave";
//	cout << "Name:" << p->name << endl
//		<< "Author:" << p->author << endl
//		<< "Price:" << p->price << endl;
//}
//
//int main()
//{
//	Book Acfun = {"C Prime Plus", "Steve", 67};
//	output1(Acfun);//值传递
//	output2(&Acfun);//地址传递
//	cout << endl;
//	cout << "Name:" << Acfun.name << endl
//		<< "Author:" << Acfun.author << endl
//		<< "Price:" << Acfun.price << endl;
//
//	return 0;
//}

//六.结构体中 const 的使用场景
//限定指针状态，防止误操作
//将函数中的形参改为指针，可以减少内存空间，且不会复制新的副本
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Book
//{
//	string name;
//	string author;
//	int price;
//};
//
//void output(const Book *Ap)//加入const后，一旦有修改的操作就会报错，可以防止误操作
//{
//	Ap->price = 9999;//加入了const后，不可修改，会报错提醒
//	cout << Ap->name << Ap->author << Ap->price << endl;
//}
//
//int main()
//{
//	Book Ap = {"C++ Prime Plus", "Steve", 86};
//	output(&Ap);
//
//	return 0;
//}

//七.结构体实例1
//嵌套结构体数组的输入输出(地址传递)
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int score;
//};
//
//struct Teacher
//{
//	string name;
//	Student S[2];
//};
//
//void allocateSpace(Teacher T[])
//{
//	for (int i = 0; i < 3; ++i)
//	{	
//		cin >> T[i].name;
//		for (int j = 0; j < 2; ++j)
//			
//			cin >> T[i].S[j].name
//				>> T[i].S[j].score;
//	}
//}
//
//void printInfo(Teacher T[])
//{
//	for (int i = 0; i < 3; ++i)
//	{
//		cout << "Teacher" << i + 1 << ": " << T[i].name << endl;
//		for (int j = 0; j < 2; ++j)
//
//			cout << "Student" << j + 1 << ": " << T[i].S[j].name << endl
//			<< "Score: " << T[i].S[j].score << endl;
//		cout << endl;
//	}
//}
//
//int main()
//{
//	Teacher T[3];
//	allocateSpace(T);
//	printInfo(T);
//
//	return 0;
//}

//结构体实例2
//Bubbling & Structure(冒泡排序与结构体)
//#include<iostream>
//#include<string.h>
//#include<ctime>
//#define N 5
//using namespace std;
//
//struct Hero
//{
//	string name;
//	int age;
//	string gender;
//};
//
//void randomAge(Hero* A, int i)
//{
//	int random = rand() % 15 + 30;
//	(A + i)->age = random;
//}
//
//void swap(Hero* A, int i, int j)
//{
//	int temp;
//	string TEMP;
//	temp = (A + j)->age;
//	(A + j)->age = (A + i)->age;
//	(A + i)->age = temp;
//	TEMP = (A + j)->gender;
//	(A + j)->gender = (A + i)->gender;
//	(A + i)->gender = TEMP;
//	TEMP = (A + j)->name;
//	(A + j)->name = (A + i)->name;
//	(A + i)->name = TEMP;
//
//}
//
//void bubblingUp(Hero* A, int len)
//{
//	int temp;
//	for(int i = 0; i < len - 1; ++i)
//		for (int j = 1 + i; j < len; ++j)
//		{
//			if ((A + j)->age < (A + i)->age)
//			{
//				swap(A, i, j);
//			}
//		}
//}
//
//void printInfo(Hero* A)
//{
//	for (int i = 0; i < N; ++i)
//		cout << (A + i)->name << "\t"
//		<< (A + i)->age << "\t"
//		<< (A + i)->gender << endl;
//}
//
//int main()
//{
//	int i;
//	Hero A[N] = 
//	{
//		{"A", 56, "female"},
//		{"B", 34, "female"},
//		{"C", 31, "male"},
//		{"D", 27, "male"},
//		{"E", 47, "male"}
//	};
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < N; ++i)
//		randomAge(A, i);
//	bubblingUp(A, N);
//	printInfo(A);
//
//	return 0;
//}



//Bubbling
//#include<iostream>
//#include<ctime>
//#define N 20
//#define M 10000
//using namespace std;
//
//int main()
//{
//	
//	int n, i, j, temp;
//	int arr[N];
//	srand((unsigned int) time(NULL));
//	for (n = 0; n < N; ++n)
//		arr[n] = rand() % M + 1;
//	for (i = 0; i < N - 1; ++i)
//	{
//		for(j = i + 1; j < N; ++j)
//			if (arr[i] > arr[j])
//			{
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//	}
//	for (n = 0; n < N; ++n)
//		cout << arr[n] << " " << endl;
//
//	return 0;
//}