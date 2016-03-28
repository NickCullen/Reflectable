#include "ClassManager.h"



ClassManager::ClassManager()
{
}


ClassManager::~ClassManager()
{
}

ClassManager& ClassManager::GetInstance()
{
	static ClassManager cm;
	return cm;
}

void ClassManager::AddClass(const std::string& id, Class* cl)
{
	if (ClassMap.find(id) != ClassMap.end())
		throw std::invalid_argument("Class already exists");

	ClassMap.insert(std::pair<std::string, Class*>(id, cl));
}

Class* ClassManager::GetClass(const std::string& id)
{
	ClassMapType::iterator itr;
	if ((itr = ClassMap.find(id)) == ClassMap.end())
		return nullptr;
	return itr->second;

}