add_executable(targ "ForLearCMake.h" "ForLearCMake.cpp")

configure_file(tutconf.h.in "${CMAKE_SOURCE_DIR}/ForLearCMake/tutconf.h")

target_include_directories(targ PUBLIC "${CMAKE_SOURCE_DIR}/ForLearCMake"
									   "${CMAKE_SOURCE_DIR}/MathFunctions"
)

target_link_libraries(targ PUBLIC MathFunctions)