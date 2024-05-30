option(USE_MATHFUNC "Use main provided a my math libarary implementation" ON)

add_library(MathFunctions mathfunc.cpp)

if(USE_MATHFUNC)

	target_compile_definitions(MathFunctions PRIVATE "USE_MATHFUNC")

	add_library(sqrtlib sqrt.h sqrt.cpp)

	target_link_libraries(MathFunctions PRIVATE sqrtlib)

endif()

