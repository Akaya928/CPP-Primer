/*c++����������������: ��װ �̳� ��̬*/

//һ.��װ
//1.�����Ժ���Ϊ��Ϊһ�����壬���������е����� һ����
//2.�����Ժ���Ϊ����Ȩ�޿��� ����Ȩ��

//��װ����֮һ�����һ���� �����Ժ���Ϊ��Ϊһ������
//1.���һ��Բ��
//ʵ������ͨ��һ���࣬����һ������Ĺ��̣�

//#include<iostream>
//using namespace std;
//
//const double PI = 3.14;
//
//class Circle//class �������һ���࣬���������ľ����������
//{
//public://����Ȩ�� public ����Ȩ��
// 
//	int m_r;//����(����) ���Բ�İ뾶
//	double calculateZC()//��Ϊ(����) ��ȡԲ���ܳ�
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	Circle A;//ͨ��Բ�ഴ�������Բ(����)
//	A.m_r = 2;
//	cout << A.calculateZC() << endl;
//
//	return 0;
//}

//2.���һ��ѧ����

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student//���е����Ժ���Ϊ ͳһ��Ϊ ��Ա
//{
//public://����Ȩ��
// 
//	string m_name;//���� ��Ϊ ��Ա����/��Ա����
//	string m_id;
// 
//	void showStudent()//��Ϊ ��Ϊ ��Ա����/��Ա����
//	{
//		cout << m_name << endl << m_id << endl;
//	}
//
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	void setid(string id)
//	{
//		m_id = id;
//	}
//};
//
//int main()
//{
//	Student B;
//	Student C;
//	Student D;
//	B.m_id = "1234567890";
//	B.m_name = "Sara";
//	C.m_id = "0123456789";
//	C.m_name = "John";
//	D.setName("HaiHai");
//	D.setid("2345678901");
//	B.showStudent();
//	C.showStudent();
//	D.showStudent();
//
//	return 0;
//}