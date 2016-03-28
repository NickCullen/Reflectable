#pragma once

#include "ReflectableType.h"
#include "ClassManager.h"

template<typename ClassType>
class ClassBuilder
{
private:
	Class* Target;
public:
	
	/**
	 * Declare the class
	 */
	static ClassBuilder& Declare()
	{
		ClassManager& cm = ClassManager::GetInstance();	// Get the manager

		// Create the class builder and the class target itself
		ClassBuilder* cb = new ClassBuilder();
		cb->Target = new Class();	
		cb->Target->Name = ReflectableType<ClassType>::GetName();

		cm.AddClass(cb->Target->Name, cb->Target);	// Register the class with the manager

		return *cb;
	}

	/**
	 * Declares a base class for the given target
	 */
	template<typename BaseType>
	ClassBuilder& Base()
	{
		ClassManager& cm = ClassManager::GetInstance();	// Get the manager
		Class* base = cm.GetClass(ReflectableType<BaseType>::GetName());

		if (base == nullptr)
			throw std::invalid_argument("No base type exists!\n");

		Target->BaseClasses.push_back(base);

		return *this;
	}


};