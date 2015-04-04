# Linked libraries

set(LIBRARY_FILES
    "${PROJECT_SOURCE_DIR}/externals/example_lib/MyLib.c"
)
add_library(MyLib STATIC ${LIBRARY_FILES})