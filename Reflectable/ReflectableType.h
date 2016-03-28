#pragma once

/**
 * Definition of a reflectable type
 */
template<class T>
struct ReflectableType
{
	static const char* GetName() { return "NO TYPE"; }
};

/**
 * Declare a reflectable type with this macro
 */
#define REFLECTABLE(CLType) \
	template <> struct ReflectableType<CLType> \
	{	\
		static const char* GetName() { return #CLType; }		\
	};	