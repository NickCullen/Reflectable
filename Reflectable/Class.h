#pragma once

#include <string>
#include <vector>

class Class
{
public:
	const char* Name;						// Points to ReflectableType<T>::GetName();
	std::vector<Class*> BaseClasses;		// Classes this class derives from

public:
	Class();
	~Class();


};

