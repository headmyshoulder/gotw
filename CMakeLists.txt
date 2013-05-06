# Date: 2013-05-06
# Author: Karsten Ahnert (karsten.ahnert@gmx.de)

project ( GOTW )
cmake_minimum_required ( VERSION 2.8 )

# Add path for custom modules
set( CMAKE_MODULE_PATH
  ${CMAKE_MODULE_PATH}
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules
  )

find_package ( Boost REQUIRED )

if ( CMAKE_COMPILER_IS_GNUCXX )
    set ( CMAKE_CXX_FLAGS "-std=c++0x" )        ## Optimize
endif ()

include_directories ( ${Boost_INCLUDE_DIRS} )

add_executable ( gotw_1 gotw_1.cpp )



