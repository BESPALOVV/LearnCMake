option(USE_MATHFUNC "Use main provided a my math libarary implementation" ON)

add_library(MathFunctions mathfunc.cpp)

target_link_libraries(MathFunctions PUBLIC project_compiler_flags)

target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
	
if(USE_MATHFUNC)

	target_compile_definitions(MathFunctions PRIVATE "USE_MATHFUNC")

	add_library(sqrtlib sqrt.h sqrt.cpp)

	target_link_libraries(sqrtlib PUBLIC project_compiler_flags)

	target_link_libraries(MathFunctions PRIVATE sqrtlib)
endif()

