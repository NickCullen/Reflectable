#include "TestClass.h"




int main(int argc, char** argv)
{
	TestClass::Register();
    
    for(auto itr = ClassManager::IterClassBegin(); itr != ClassManager::IterClassEnd(); itr++)
    {
        Class& cl = itr->second;
        printf("Class info for %s\n", cl.Name);
        for(size_t b = 0; b < cl.NumOfBaseClasses(); b++)
        {
            const Class& base = cl.GetBase(b);
            printf("\t Base class %s\n", base.Name);
            
        }
    }
    
	return 0;
}