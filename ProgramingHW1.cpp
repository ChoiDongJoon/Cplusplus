#include "CContent.h"

const int NSIZEOFARRAY = 30;
int FillArray(CContent pContent[], int nSize);

void sort(CContent pContent[], int numberUsed);
void swapValues(int& v1, int &v2, string& v3, string& v4);
int indexOfSmallest(int Views[], int stratIndex, int numberUsed);

int SearchGenre(CContent pContent[], int nSize, int nCategory, int nNumberShow = 5);

int main()
{
    int nSize = 0;
    CContent ccontent[NSIZEOFARRAY];
    FillArray(ccontent, nSize);
    cout << " Views에 따른 선택정렬" << endl;
    sort(ccontent, NSIZEOFARRAY);
    cout << " 원하는 장르 선택하기" << endl;
    SearchGenre(ccontent, 30, 8, 5);
}

int FillArray(CContent pContent[], int nSize) {
    
    pContent[0] =  CContent(101, 1, "킹덤", 80);
    pContent[1] =  CContent(102, 2, "인간 수업", 65);
    pContent[2] =  CContent(103, 2, "비밀의 숲", 50);
    pContent[3] =  CContent(104, 4, "슬기로운 의사생활", 60);
    pContent[4] =  CContent(105, 4, "리틀 포레스트", 10);
    pContent[5] =  CContent(106, 1, "셔터 아일랜드", 99);
    pContent[6] =  CContent(107, 8, "아이언맨", 590);
    pContent[7] =  CContent(108, 8, "스파이더맨", 290);
    pContent[8] =  CContent(109, 4, "타이타닉", 570);
    pContent[9] =  CContent(110, 6, "아메리칸 셰프", 15);
    pContent[10] =  CContent(111, 7, "쿵푸팬더", 460);
    pContent[11] =  CContent(112, 6, "나홀로 집에", 600);
    pContent[12] =  CContent(113, 8, "킹스맨", 400);
    pContent[13] =  CContent(114, 3, "아메리칸 스나이퍼", 50);
    pContent[14] =  CContent(115, 2, "부당거래", 300);
    pContent[15] =  CContent(116, 3, "퓨리", 450);
    pContent[16] =  CContent(117, 8, "밀정", 430);
    pContent[17] =  CContent(118, 5, "매트릭스", 1000);
    pContent[18] =  CContent(119, 8, "다크나이트", 800);
    pContent[19] =  CContent(120, 4, "파수꾼", 40);
    pContent[20] =  CContent(121, 8, "데드풀", 650);
    pContent[21] =  CContent(122, 2, "살인의 추억", 700);
    pContent[22] =  CContent(123, 2, "신세계", 630);
    pContent[23] =  CContent(124, 2, "타짜", 950);
    pContent[24] =  CContent(125, 7, "드래곤 길들이기", 400);
    pContent[25] =  CContent(126, 4, "인턴", 550);
    pContent[26] =  CContent(127, 8, "암살", 570);
    pContent[27] =  CContent(128, 5, "마션", 780);
    pContent[28] =  CContent(129, 4, "클래식", 200);
    pContent[29] =  CContent(130, 5, "그래비티", 660);

    return 0;
}
void sort(CContent ccontent[], int numberUsed)
{
    int Views[NSIZEOFARRAY];
    string Title[NSIZEOFARRAY];
    int indexOfNextSmallest = 0;
    for (int index1 = 0; index1 < NSIZEOFARRAY; index1++)
    {
        Views[index1] = ccontent[index1].getViews();
        Title[index1] = ccontent[index1].getTitle();
    }
    for (int index2 = 0; index2 < NSIZEOFARRAY; index2++)
    {
        indexOfNextSmallest = indexOfSmallest(Views, index2, numberUsed);
        swapValues(Views[index2], Views[indexOfNextSmallest], Title[index2], Title[indexOfNextSmallest]);

    }
    for (int index3 = 0; index3 < NSIZEOFARRAY; index3++)
    {
        cout << " Views : " << Views[index3] << " Title : " << Title[index3] << endl;
    }
}

void swapValues(int& v1, int& v2, string& v3, string& v4)
{
    int temp;
    string temp2;
    temp = v1;
    v1 = v2;
    v2 = temp;
    temp2 = v3;
    v3 = v4;
    v4 = temp2;
}

int indexOfSmallest(int Views[], int startindex, int numberUsed)
{
    int min = Views[startindex];
    int indexOfMin = startindex;
    for (int index = startindex + 1; index < NSIZEOFARRAY; index++)
    {
        if (Views[index] < min)
        {
            min = Views[index];
            indexOfMin = index;
        }
    }
    return indexOfMin;
}

int SearchGenre(CContent ccontent[], int nSize, int nCategory, int nNumberShow)
{
    int show = 0;
    for (int index = 0; index < nSize; index++)
    {
        if (nCategory == ccontent[index].getCategory())
        {
            ccontent[index].Print();
            show++;
            if (show == nNumberShow)
            {
                break;
            }
        }    
    }
    return 0;
}