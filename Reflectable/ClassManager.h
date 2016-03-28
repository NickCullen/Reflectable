#pragma once

#include <map>
#include <string>
#include "Class.h"

typedef std::map<std::string, Class&> ClassMapType;

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
	void AddClass(const std::string& id, Class& cl);

	/**
	 * Retrieve a class
	 */
	const Class& GetClass(const std::string& id);
    
    /**
     * Returns the number of registered classes
     */
    static inline size_t NumberOfClasses() { GetInstance().ClassMap.size(); }
    
    /**
     * Returns begin iterator for iterating over list
     */
    static ClassMapType::iterator IterClassBegin();
    
    /**
     * Returns end of ClassMap iterator so iterations know when to terminate
     */
    static ClassMapType::iterator IterClassEnd();
};

