//总结：父类中的私有成员也是被子类继承下去了 只是由编译器给隐藏后访问不到

//#include<iostream>
//#include<string>
//
//class Base
//{
//public:
//	
//	//std::string name;  //std::string  40 byte 
//	int A;  //int  4 byte
//
//protected:
//
//	int age;  //int  4 byte
//
//private:
//
//	//std::string password;  //std::string  40 byte
//	int B;  //int  4 byte
//};
//
//class Son : public Base
//{
//public:
//
//	int age;  //int  4 byte
//};
//
////利用开发人员命令提示工具(Developer Command Prompt)查看对象模型
////跳转盘符  D:
////跳转文件路径 cd 具体路径下
////查看命名:
//// cl / d1 reportSingleClassLayout类名 文件名
//
//void test01()
//{
//	//父类中的所有非静态成员属性都会被子类继承下去
//	//父类中的私有成员属性 是被编译器给隐藏了，因此是访问不到的
//	std::cout << "size of class Son:" << sizeof(Son) << std::endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}