#pragma once

#include "Reflection.h"
#include <string>
#include <iostream>

template<typename T>
class TestBase
{

};

class TestClass : public TestBase<TestClass>
{
public:
	int myInt;
	double myDouble;

public:
	TestClass();
	~TestClass();

	static void Register();

};

REFLECTABLE(TestBase<TestClass>)
REFLECTABLE(TestClass)

