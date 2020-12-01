// 전자정보공학부 IT융합전공 20192645 최동준
#include <iostream>
using namespace std;
int main()
{

	int* p3, * p4;
	p3 = new int;
	p4 = new int;
	
	cout << "p3 : " << p3 << " p4 : " << p4 << endl;
	cout << "*p3 : " << *p3 << " *p4 : " << *p4 << endl;

	*p3 = 7;
	*p4 = 8;

	p3 = p4;
	cout << "p3 : " << p3 << " p4 : " << p4 << endl;
	cout << "*p3 : " << *p3 << " *p4 : " << *p4 << endl;

	delete p3;
	delete p4;


}
