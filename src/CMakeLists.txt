

#for sub-module
#ADD_SUBDIRECTORY(util)


#for include headers
include_directories(${PROJECT_SOURCE_DIR}/include)

#for linking libs
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

#set executable output path
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(main main.c main_core.c)


#for linking lib
#target_link_libraries(hello )
