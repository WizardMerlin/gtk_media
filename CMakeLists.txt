# All right reserved by merlin
# 
# email: wizardmerlin945@gmail.com
#
# welcome email me for studying communications

#cmake version info required
cmake_minimum_required (VERSION 3.5)

#set compiler info
SET(CMAKE_C_COMPILER gcc)


#project info
set(PROJECT_NAME "gtk_media")


set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 1)


project(${PROJECT_NAME})

#for sub module or test
add_subdirectory(src)
add_subdirectory(test)




#for install
#set(CMAKE_INSTALL_PREFIX /Users/Mac15/Desktop/cmake_ctest_cpack_practise/demo2_complex/install_dir)
#INSTALL(FILES COPYRIGHT readme.log DESTINATION doc)
#INSTALL(PROGRAMS run.sh DESTINATION bin)
#INSTALL(PROGRAMS bin/main DESTINATION bin)
#INSTALL(DIRECTORY doc/ DESTINATION doc)
