#include "TestClass.h"

TestClass::TestClass()
{
}


TestClass::~TestClass()
{
}

void TestClass::Register()
{
	ClassBuilder<TestBase>::Declare();

	ClassBuilder<TestClass>::Declare()
		.Base<TestBase>();

	const Class& cl = ClassManager::GetInstance().GetClass("TestClass");
    
	int i = 0;

}
