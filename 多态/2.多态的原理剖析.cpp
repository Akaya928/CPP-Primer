//����1.cpp�еĻ����﷨����(����)
//���ÿ�����Ա������ʾ����(Developer Command Prompt)��������
//ע����дǰ �� ��д�� �����е��麯����ı仯

//ʹ��Developer Command Prompt�ῴ��vfptr vftable
//vfptr �麯��(��)ָ��
//vftable  �麯����

//#include<iostream>
//
//using std::cout;
//using std::endl;
//
//class Animal
//{
//public:
//
//	//�麯��  ���Ϲؼ��� virtual
//	//�麯�����������ɿ���ͨ����������ʸ����麯��
//	virtual void Speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//
//    //��д����������ֵ���� ������ �����б�  ������ȫ��ͬ���Ϊ��д
//    //������д������麯��
//	void Speak()
//	{
//		cout << "������" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//
//	void Speak()
//	{
//		cout << "������" << endl;
//	}
//};
//
////doSpeak����
////��ַ���  �ڱ���׶ξ�ȷ���˺�����ַ
////���Ҫִ�� ������ ��ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//void doSpeak(Animal& animal)  //Animal& animal = cat/dog (�����ָ��������� ָ���������)
//{
//	animal.Speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}