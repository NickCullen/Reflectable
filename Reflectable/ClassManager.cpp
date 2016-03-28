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

void ClassManager::AddClass(const std::string& id, Class& cl)
{
	if (ClassMap.find(id) != ClassMap.end())
		throw std::invalid_argument("Class already exists");

	ClassMap.insert(std::pair<std::string, Class&>(id, cl));
}

const Class& ClassManager::GetClass(const std::string& id)
{
	ClassMapType::iterator itr;
	if ((itr = ClassMap.find(id)) == ClassMap.end())
        throw std::invalid_argument("Class does not exists\n");
	return itr->second;

}

ClassMapType::iterator ClassManager::IterClassBegin()
{
    GetInstance().ClassMap.begin();
}

ClassMapType::iterator ClassManager::IterClassEnd()
{
    GetInstance().ClassMap.end();
}