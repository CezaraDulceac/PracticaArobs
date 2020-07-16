cmake_minimum_required(VERSION 3.10.0)

project(practica)

### Local Variables ###

set(SOURCES
    Main.cpp    
)

set(HEADERS 
    include/Vector.hpp
    include/List.hpp
	include/ListNode.hpp
	include/Queue.hpp
	include/PriorityQueue.hpp
	include/Task.hpp
	include/VectorIteraror.hpp
	include/ListIterator.hpp
)

set(INCLUDE_DIRECTORIES
    PUBLIC include/
)

### Main Target ###

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} ${INCLUDE_DIRECTORIES})


### Custom Targets ###
