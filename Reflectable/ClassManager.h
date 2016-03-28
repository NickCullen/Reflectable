#pragma once

#include <map>
#include <string>
#include "Class.h"

typedef std::map<std::string, Class*> ClassMapType;

class ClassManager
{
private:
	ClassMapType ClassMap;

	ClassManager();
	~ClassManager();
public:

	/**
	 * Returns the one and only instance of the Class Manager
	 */
	static ClassManager& GetInstance();

	/**
	 * Add the class to the map of classes.
	 * Will throw error if class exists
	 */
	void AddClass(const std::string& id, Class* cl);

	/**
	 * Retrieve a class
	 */
	Class* GetClass(const std::string& id);

};

