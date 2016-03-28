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

    inline size_t NumOfBaseClasses() { return BaseClasses.size(); }
    inline const Class& GetBase(size_t index) { return *BaseClasses[index]; }
};

