//전자정보공학부 IT융합전공 20192645 최동준
#include <iostream>
using namespace std;

int main()
{
    int* p5, ** p6;
    int nSize = 3;
    int nSizeCol = 4;
    p5 = new int[nSize];
    p5[0] = 1;
    p5[1] = 2;
    p5[2] = 3;
    for (int nIndex = 0; nIndex < nSize; nIndex++)
    {
        cout << p5[nIndex] << " ";
    }
    cout << endl;
    p6 = new int* [nSize];
    int nCnt = 1;
    for (int nIndex = 0; nIndex < nSize; nIndex++)
    {
        p6[nIndex] = new int[nSizeCol];
        for (int nCol = 0; nCol < nSizeCol; nCol++)
        {
            p6[nIndex][nCol] = nCnt++;
        }
    }
    for (int nIndex = 0; nIndex < nSize; nIndex++)
    {
        for (int nCol = 0; nCol < nSizeCol; nCol++)
        {
            cout << p6[nIndex][nCol] << " ";
        }
        cout << endl;
    }

    delete[] p5;
    /*delete[] p6; 는 안됨 */
    for (int nIndex = 0; nIndex < nSize; nIndex++)
    {
        delete[] p6[nIndex];

    }
    delete[] p6;
}
