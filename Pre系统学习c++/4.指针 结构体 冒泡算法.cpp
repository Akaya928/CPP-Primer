//I Pointer
//һ.ָ�����
//A.��ָ��(ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�)
//1.��ָ��ָ�������ڴ��ǲ��ɷ��ʵ�(0 ~ 225֮����ڴ�����ϵͳռ�õģ���˲����Է���)
//2.��ָ�����ڸ�ָ��������г�ʼ��
// 
//B.Ұָ��
// �ڳ����о����������Ұָ��
// 
// C.�ؼ��� const
// 1.const����ָ�� => ����ָ��
// �����ε�Ϊ����ָ��ʱ��ָ���ָ������޸ģ�����ָ��ָ���ֵ�����Ը�
// 2.const���γ��� => ָ�볣��
// ָ���ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�
// 3.const������ָ�������γ���
// ָ���ָ���ָ��ָ���ֵ�������Ը�
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* p1 = NULL;//��ָ��
//	int* p2 = (int*)0x1100;//Ұָ����Ȩ���в���
//	const int* p3 = &a;//����ָ��(ָ��ָ���ֵ�����Ըģ�����ָ���ָ����Ը�)
//	p3 = &b;//����
//	*p3 = 20;//���ִ���
//	int* const p4 = &a;//ָ�볣��(ָ���ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�)
//	*p4 = 20;//����
//	p4 = &b;//���ִ���
//	const int* const p5 = &a;//(ָ���ָ���ָ��ָ���ֵ�������Ը�)
//	p5 = &b;//���ִ���
//	*p5 = 20;//���ִ���
//
//	return 0;
//}

//��.������ָ��
//����������������׵�ַ
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
//	p = arr + 3;//��pָ��arr[3]
//	for(int n = 0; n < 10; ++n)
//		cout << arr[n] << " ";
//	cout << endl << *p;
//
//	return 0;
//}

//��.ָ��ͺ���(ָ����Ϊ�����Ĳ���)
//1.ֵ����
//ʵ�ε�ֵ���䣬�βε�ֵ�ı�
//2.��ַ����
//ʵ�ε�ֵҲ����ı�
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
//	*p2 = temp;//��ַ���ݣ�������ʵ�ε�ֵ�ı�
//}

//��.ָ�룬���飬������ϡ�������Bubbling
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
//void Bubbling(int* p)//ð������(��ַ����)
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
//һ.�ṹ������ļ��ִ�������
//��c++�д�������ʱ���Բ��� struct
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
//	S1.gender = "��";
//	S1.age = 18;
//	S1.name = "����";
//	S1.score = 99;
//	cout << "Name " << S1.name << " Gender " << S1.gender << " Score" << S1.score << " Age " << S1.age << endl;
//	Student S2 = {"����", 18, 99, "��"};
//	cout << "Name " << S2.name << " Gender " << S2.gender << " Score" << S2.score << " Age " << S2.age << endl;
//	S3.age = 19;
//	S3.gender = "��";
//	S3.name = "����";
//	S3.score = 99;
//	cout << "Name " << S3.name << " Gender " << S3.gender << " Score" << S3.score << " Age " << S3.age << endl;
//	cout << "Name " << S4.name << " Gender " << S4.gender << " Score" << S4.score << " Age " << S4.age << endl;
//
//	return 0;
//}

//��.�ṹ������
//struct �ṹ���� ������[Ԫ�ظ���] = {{}, {}, ...{}}
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
//		{"C�������", "̷��ǿ", 7, 362}
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

//��.�ṹ��ָ��
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
//	Food* p = &AP;//ͨ��ָ��ָ��ṹ�����
//	cout << "Dish:" << p->name << endl;//ͨ��ָ����ʽṹ������е�����
//
//	return 0;
//}

//��.�ṹ��Ƕ�׽ṹ��
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

//��.�ṹ������������
//1.ֵ����
//2.��ַ����(�õ�ָ��)
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
//	output1(Acfun);//ֵ����
//	output2(&Acfun);//��ַ����
//	cout << endl;
//	cout << "Name:" << Acfun.name << endl
//		<< "Author:" << Acfun.author << endl
//		<< "Price:" << Acfun.price << endl;
//
//	return 0;
//}

//��.�ṹ���� const ��ʹ�ó���
//�޶�ָ��״̬����ֹ�����
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬�Ҳ��Ḵ���µĸ���
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
//void output(const Book *Ap)//����const��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ�����
//{
//	Ap->price = 9999;//������const�󣬲����޸ģ��ᱨ������
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

//��.�ṹ��ʵ��1
//Ƕ�׽ṹ��������������(��ַ����)
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

//�ṹ��ʵ��2
//Bubbling & Structure(ð��������ṹ��)
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