//전자정보공학부 IT융합전공 20192645 최동준
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fileStream;

    fileStream.open("rwfile", ios::out | ios::binary);
    //int 1 .. 1000을 파일에 쓴다
    for (int nIndex = 1; nIndex < 1001; nIndex++)
    {
        fileStream.write((char*)&nIndex, sizeof(int));
    }
    fileStream.close();
  
    fileStream.open("rwfile", ios::in | ios::out | ios:: binary);
    if (fileStream.fail())
    {
        cout << "File open failed. \n";
        exit(1);
    }
    int nNum;
    for (int nCnt = 0; nCnt < 10; nCnt++)
    {
        fileStream.read((char*)&nNum, sizeof(int));  
        cout << nNum << " ";
    }
    cout << endl;
    //5번째 값을 5에서 6으로 변경
    //위치 설정
    fileStream.seekp((5 - 1) * sizeof(int));
    nNum = 6;
    fileStream.write((char*)&nNum, sizeof(int));
    fileStream.seekg((2-1)*sizeof(int));
    for (int nCnt = 0; nCnt < 5; nCnt++)
    {
        fileStream.read((char*)&nNum, sizeof(int));
        cout << nNum << " ";
    }
    return 0;
}
