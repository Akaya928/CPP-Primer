//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//
//	system("pause");//��ֹ���ˣ��ɼӿɲ���
//
//	return 0;
//}

//#define Day 7//�������ɱ�
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

////bool(c++�в����������� cû��)bool�������(����������)��Ϊtrue(1)
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

////input(cin >>(�������) variable;)
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
//	cin >> arr;//����ʱ�������ո�Ͳ����ٽ��ж�ȡ�ˡ���cin���ܶ�ȡ�ո�
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

////c++�����ַ���(string variable = " ";)��Ҫ����һ��ͷ�ļ�include<string>
//#include<iostream>
//#include<string>//�°�vs����Ҫ�ӣ������Ǽ���
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

//���������
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
//	cout << b / c << endl;//����������Ҳ�����Ϊ���㡣
//	cout << a % (int)c << endl;//ģ������������͡�
//	cout << (int)c << endl;//����ȡ����
//	cout << a / (int)c % d << endl;
//	
//
//	system("pause");
//
//	return 0;
//}

////���������rand()%number �����������0 ~ number-1�������(����ֵΪ����)
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = rand() % 100 + 1;//�������һ��0 + 1 ~ 100 - 1 + 1 ��������Ρ�α�������
//	float b = rand() % 101;//�������һ��0 ~ 100 - 1 �����ʵ����
//	cout << a << endl;
//	cout << a << endl;
//	cout << b << endl;
//	
//
//	system("pause");
//
//	return 0;
//}


////������
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 1;
//	while (n <= 100)
//	{
//		if (0 == n % 7)
//			cout << "������" << endl;
//		else if (7 == n / 10 || 7 == n % 10)
//			cout << "������" << endl;//endl����\n  ����
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
//			cout << endl;//endl ����
//	}
//
//	system("pause");
//
//	return 0;
//}

////�˷���
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