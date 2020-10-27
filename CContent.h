#pragma once
#include <string>
#include <iostream>
using namespace std;

class CContent
{
	int m_nId;
	int m_nCategory;
	string m_strTitle;
	int m_nViews;

public:
	CContent();
	CContent(int m_nId, int m_nCategory, string m_strTitle, int m_nViews);
	int getId();
	int getCategory();
	string getTitle();
	int getViews();
	int getWhole();
	void setId(int newId);
	void setCategory(int newCategory);
	void setTitle(string newTitle);
	void setViews(int newViews);
	void setWhole(int newId, int newCategory, string newTitle, int newViews);
	void Print();
};




