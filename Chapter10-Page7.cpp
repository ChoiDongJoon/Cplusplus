// 전자정보공학부 IT융합전공 20192645 최동준
#include <iostream>
using namespace std;
int main()
{
    int* p1, * p2, v1 = 3, v2 = 4;
    /*cout << p1 << endl;  오류가 난다. */
   /* p1 = 0;
    cout << p1 << endl; 000000이 출력된다.
    cout << *p1 << endl; 실행되지 않는다.*/
    cout << &v1 << endl;
    p1 = &v1; 
    cout << p1 << endl;

    p2 = &v2;
    cout << p2 << endl;
    cout << &v2 << endl;

    cout << "p1 data : " << *p1 << " " << "p2 data : " << *p2 << endl;
    cout << "p1 address : " << p1 << " p2 address : " << p2 << endl; 

    cout << "copy address p1 = p2 " << endl;
    p1 = p2;
    cout << "p1 data" << *p1 << " p2 data" << *p2 << endl;
    cout << "p1 adress " << p1 << " p2 adress " << p2 << endl;

    cout << "copy data *p1 = *p2 " << endl;
    p1 = &v1;
    *p1 = *p2;
    cout << "p1 data" << *p1 << " p2 data" << *p2 << endl;
    cout << "p1 adress " << p1 << " p2 adress " << p2 << endl;

}
