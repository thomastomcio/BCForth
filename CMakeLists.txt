cmake_minimum_required(VERSION 3.16)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# For a new project it is sufficient to change only its name in the following line
set( PROJECT_NAME BCForth_for_ESP32 )

project( ${PROJECT_NAME} )

# # Automatically add all *.cpp and *.h files to the project
# file ( GLOB_RECURSE SOURCES "./src/*" "./include/*" )
# add_executable( ${PROJECT_NAME} ${SOURCES} )