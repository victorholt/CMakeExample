# Target Files

set(SOURCE_FILES main.cpp)

add_executable(CMakeExample ${SOURCE_FILES})
#target_link_libraries(CMakeExample ${PROJECT_SOURCE_DIR}/externals/libs/libMyLib.a)
target_link_libraries(CMakeExample MyLib)