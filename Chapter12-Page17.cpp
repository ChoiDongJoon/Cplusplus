//전자정보공학부 IT융합전공 20192645 최동준
#include <iostream>
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::endl;
using namespace std;

int main()
{
    //객체 만들기
    ifstream inStream;
    ofstream outStream;

    int* pnData;
    int nSizeMax = 100;
    pnData = new int[nSizeMax];
    //물리적 파일과 연결
    inStream.open("infile.txt");
    if (inStream.fail())
    {
        cout << "File open failed \n";
        exit(1);
    }
    /*outStream.open("outfile.txt");*/
    outStream.open("outfile.txt", ios::app);
    //파일사용
    //int first, second, third;
    //inStream >> first >> second >> third; //순서대로 일기. 데이터형이 일치해야함
    //outStream << "The sum of the first 3 \n"
    //    << "numbers in the infile.txt \n"
    //    << "is " << (first + second + third) << endl;
    int nCnt = 0;
    while (!inStream.eof())
    {
        inStream >> pnData[nCnt];
        cout << pnData[nCnt] << " ";
        nCnt++;
    }
   /* while(inStream >> pnData[nCnt])
    {
        cout << pnData[nCnt] << " ";
        nCnt++;
    }*/
    int nSum = 0;
    for (int nIndex = 0; nIndex < nCnt; nIndex++)
    {
        nSum += pnData[nIndex];
    }
    outStream << "The sum of the " << nCnt << " number is in the infile.txt \n"
        << " is " << nSum << endl;
    //파일닫기
    inStream.close();
    outStream.close();

    return 0;
}
 