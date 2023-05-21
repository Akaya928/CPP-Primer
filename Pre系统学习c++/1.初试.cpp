//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//
//	system("pause");//防止秒退，可加可不加
//
//	return 0;
//}

//#define Day 7//常量不可变
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int month = 12;
//	cout << "A week has " << Day  << " Days\n" << endl;
//	cout << "A year has " << month << " months" << endl;
//	printf("\nahiahi");
//
//	system("pause");
//
//	return 0;
//}

////bool(c++有布尔数据类型 c没有)bool输入非零(包括浮点数)即为true(1)
//#include<iostream>
//using namespace std;
//int main()
//{
//	bool flag = true ,falg = false;
//	cout << flag << "," << falg << endl;
//
//	system("pause");
//
//	return 0;
//}

////input(cin >>(右运算符) variable;)
//#include<iostream>
//#include<string>
//using namespace std;

//int main()
//{
//	bool flag;
//	char ch;
//	string arr;
//	float a;
//	cout << "Please input a number and a symbol" << endl;
//	cin >> flag;
//	cin >> ch;
//	cin >> arr;//输入时，遇到空格就不会再进行读取了。即cin不能读取空格
//	cin >> a;
//	cout << flag << endl;
//	cout << ch << endl;
//	cout << arr << endl;
//	cout << a << endl;
//
//	system("pause");
//
//	return 0;
//}

////c++风格的字符串(string variable = " ";)需要加上一个头文件include<string>
//#include<iostream>
//#include<string>//新版vs不需要加，但还是加上
//using namespace std;
//
//int main()
//{
//	string arr = "hello world";
//	cout << arr << endl;
//
//	system("pause");
//
//	return 0;
//}

//算数运算符
//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	
//	int a = 11;
//	float b = 3.3;
//	float c = -3.5;
//	int d = 2;
//	cout << a + b << endl;
//	cout << a - b << endl;
//	cout << a * b << endl;
//	cout << b / c << endl;//除法运算的右操作数为非零。
//	cout << a % (int)c << endl;//模运算必须是整型。
//	cout << (int)c << endl;//向零取整。
//	cout << a / (int)c % d << endl;
//	
//
//	system("pause");
//
//	return 0;
//}

////生成随机数rand()%number 代表随机生成0 ~ number-1的随机数(返回值为整型)
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = rand() % 100 + 1;//随机生成一个0 + 1 ~ 100 - 1 + 1 的随机整形。伪随机数。
//	float b = rand() % 101;//随机生成一个0 ~ 100 - 1 的随机实数。
//	cout << a << endl;
//	cout << a << endl;
//	cout << b << endl;
//	
//
//	system("pause");
//
//	return 0;
//}


////敲桌子
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 1;
//	while (n <= 100)
//	{
//		if (0 == n % 7)
//			cout << "敲桌子" << endl;
//		else if (7 == n / 10 || 7 == n % 10)
//			cout << "敲桌子" << endl;//endl类似\n  换行
//		else
//			cout << n << endl;
//		++n;
//	}
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	for (n = 1; n < 101; ++n)
//	{
//		cout << " *";
//		if (0 == n % 10)
//			cout << endl;//endl 换行
//	}
//
//	system("pause");
//
//	return 0;
//}

////乘法表
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i, j;
//	for(j = 1; j < 10; ++j)
//		for (i = 1; i <= j; ++i)
//		{
//			cout << i << "*" << j << "=" << i*j << " ";
//			if (i == j)
//				cout << endl;
//		}
//
//	system("pause");
//
//	return 0;
//}