#target_include_directories(Reflectable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCES Class.cpp
        ClassManager.cpp
    )
    
set (HEADERS Class.h
        ClassBuilder.h
        ClassManager.h
        ReflectableType.h
        Reflection.h
    )
    
set (TEST_SOURCES Main.cpp
        TestClass.h
        TestClass.cpp
    )
    
add_executable(Reflectable ${SOURCES} ${HEADERS} ${TEST_SOURCES})


