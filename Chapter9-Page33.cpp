//전자정보공학부 IT융합전공 20192645 최동준
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char chString1[30] = "Hello", chString2[30];

    strcpy_s(chString2, "Kim");
    cout << chString1 << " " << chString2 << endl;
    int nComp;
    if (nComp = strcmp(chString1, chString2))
    {
        cout << nComp << "Two strings are different!";
    }
    else
    {
        cout << nComp << "Two strings are the same!";
    }
    cin >> chString2;
    cout << chString2 << endl;

    strcat_s(chString1, chString2);
    cout << chString1 << endl;

    cout << "Please enter a sentence with white spaces" << endl;
    cin.ignore(30, '\n');
    cin.getline(chString2, 30);
    cout << chString2 << endl;
}

