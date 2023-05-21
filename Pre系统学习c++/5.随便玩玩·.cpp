//动态爱心
//#include <iostream>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z) {
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//		if (f(x, y, z) <= 0.0f)
//			return y;
//	return 0.0f;
//}
//
//int main() {
//	system("color E");
//	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//	_TCHAR buffer[25][80] = { _T(' ') };
//	_TCHAR ramp[] = _T(".:-=+*#%@");
//
//	for (float t = 0.0f;; t += 0.1f) {
//		int sy = 0;
//		float s = sinf(t);
//		float a = s * s * s * s * 0.2f;
//		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
//			_TCHAR* p = &buffer[sy++][0];
//			float tz = z * (1.2f - a);
//			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
//				float tx = x * (1.2f + a);
//				float v = f(tx, 0.0f, tz);
//				if (v <= 0.0f) {
//					float y0 = h(tx, tz);
//					float ny = 0.01f;
//					float nx = h(tx + ny, tz) - y0;
//					float nz = h(tx, tz + ny) - y0;
//					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//					*p++ = ramp[(int)(d * 5.0f)];s
//				}
//				else
//					*p++ = ' ';
//			}
//		}
//
//		for (sy = 0; sy < 25; sy++) {
//			COORD coord = { 0, sy };
//			SetConsoleCursorPosition(o, coord);
//			WriteConsole(o, buffer[sy], 79, NULL, 0);
//		}
//		Sleep(33);
//	}
//}



//猜数字(随机数种子)
//#include<iostream>
//#include<ctime>
//#include<math.h>
//#include<windows.h>
//#define defrence abs(n - val)
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	srand((unsigned int)time(NULL));//添加随机数种子 利用当前系统的时间生成随机数，防止每次的rand一样。新版的加不加头文件include<ctime>都可以。
//	int val = rand() % 100 + 1;//只是生成的伪随机数。
//	//system("color FC");//改变终端背景颜色
//	while (val != n)
//	{
//		cin >> n;
//		system("cls");
//		if (n > val)
//		{
//			if (defrence >= 5)
//				cout << "too big" << endl;
//			if (defrence < 5)
//				cout << "a little bigger";
//		}
//		else if (n < val)
//		{
//			if (defrence > 5)
//				cout << "too small" << endl;
//			if (defrence < 5)
//				cout << "a little smaller" << endl;
//		}
//		else
//			cout << "bingo" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}