#include "MakeDLL.h"

#define DLL_API __declspec(dllimport)

//#pragma comment(lib,"MakeDll.lib")
int main()
{
	Point p1, p2;
	p2.SetPoint(5.6f, 7.8f);
	p1.DisPlay();
	p2.DisPlay();
	cout << "5+6 = " << add(5, 6) << endl;
	return 0;
}