//һ.������Ĭ�ϲ���
//�﷨������ֵ���� ������ (���� = Ĭ��ֵ){}
//ע�����
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�����Ҫ��Ĭ��ֵ
//2.�����������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ���
//#include<iostream>
//using namespace std;
//
//int func1(int a = 10, int b = 10);
//
//int func1(int a = 20, int b = 20)//�ض�����Ĭ�ϲ���
//{
//	return a + b;
//}
//
//int func(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	cout << func(10, 30) << endl;//����Լ����������ݣ������Լ��������ݣ��������Ĭ��ֵ
//	cout << func1();
//
//	return 0;
//}

//��.������ռλ����
//c++�к������β��б��������ռλ������������ռλ�����ú���ʱ�������λ��
//�﷨������ֵ���� ������ (��������){}
//
//#include<iostream>
//using namespace std;
//
//void func(int a, int  = 10)//ռλ����Ҳ������Ĭ�ϲ���
//{
//	cout << "hello";
//}
//
//int main()
//{
//	func(10);//ռλ����(ռλ������Ĭ�ϲ���ʱ�����Բ��ø�ռλ����������)
//
//	return 0;
//}

//��.��������
//���ã�������������ͬ����߸�����
//�����������������:
//.ͬһ��������
//.����������ͬ
//.�����Ĳ������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ
//#include<iostream>
//using namespace std;
//
//void func(int a)
//{
//	cout << "haihai";
//}
//
//void func()
//{
//	cout << "hello";
//}
//
//void func(double a)
//{
//	cout << "hi";
//}
//
//void func(int a, double b)
//{
//	cout << "���";
//}
//
//void func(double a, int b)
//{
//	cout << "��";
//}
//// ע�����
////�����ķ���ֵ��������Ϊ�������ص�����
//int func()
//{
//	cout << "hello";
//}//�޷����ؽ��������������ֵĺ���
//
//
//int main()
//{
//	func(1, 1.0);
//
//	return 0;
//}

//��.�������ص�ע������
//1.������Ϊ���ص�����
//#include<iostream>
//using namespace std;
//
//void func(int &a)//���� �ɶ���д
//{
//	cout << "1";
//}
//
//void func(const int &a)//const ���� ֻ��״̬(��������)
//{
//	cout << "2";
//}
//
//int main()
//{
//	int a = 10;
//	func(a);
//	func(10);
//
//	return 0;
//}
//2.������������Ĭ�ϲ���
//��������������Ĭ�ϲ��������ֶ����ԣ��ᱨ����������
//#include<iostream>
//using namespace std;
//
//void func1(int a = 10)
//{
//	cout << "3";
//}
//
//void func1(int a, int b = 20)
//{
//	cout << "4";
//}
//
//
//int main()
//{
//	func1(1);//�ж�� ���غ��� "func1" ʵ��������б�ƥ�� ����
//
//
//	return 0;
//}