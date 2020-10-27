#include "CContent.h"

int CContent::getId()
{
	return m_nId;
}

int CContent::getCategory()
{
	return m_nCategory;
}

string CContent::getTitle()
{
	return m_strTitle;
}

int CContent::getViews()
{
	return m_nViews;
}

int CContent::getWhole()
{
	return m_nId, m_nCategory, m_strTitle, m_nViews;
}

void CContent::setId(int newId)
{
	m_nId = newId;
}

void CContent::setCategory(int newCategory)
{
	m_nCategory = newCategory;
}

void CContent::setTitle(string newTitle)
{
	m_strTitle = newTitle;
}

void CContent::setViews(int newViews)
{
	m_nViews = newViews;
}

void CContent::setWhole(int newId, int newCategory, string newTitle, int newViews)
{
	m_nViews = newViews;
}


void CContent::Print()
{
	cout << " ID : " << m_nId << " Category : " << m_nCategory << " Title : "
		<< m_strTitle << " Views : " << m_nViews << "¸¸ " << endl;

}

CContent::CContent(int newId, int newCategory, string newTitle, int newViews)
{
	m_nId = newId;
	m_nCategory = newCategory;
	m_strTitle = newTitle;
	m_nViews = newViews;
}

CContent::CContent()
{

}