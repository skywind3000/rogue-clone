cmake_minimum_required(VERSION 3.5)

project(rogue-clone)

set(SOURCES
    rogue/hit.c
    rogue/init.c
    rogue/inventory.c
    rogue/level.c
    rogue/machdep.c
    rogue/main.c
    rogue/message.c
    rogue/monster.c
    rogue/move.c
    rogue/object.c
    rogue/pack.c
    rogue/play.c
    rogue/random.c
    rogue/ring.c
    rogue/room.c
    rogue/save.c
    rogue/score.c
    rogue/spec_hit.c
    rogue/throw.c
    rogue/trap.c
    rogue/use.c
    rogue/zap.c
	)

add_executable(rogue-clone ${SOURCES})


if (CMAKE_GENERATOR MATCHES "Visual Studio")
	message(FATAL_ERROR "Sorry, Visual Studio cannot be used, MinGW is required on Windows.")
elseif (WIN32)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -static")
	set(CMAKE_CPP_FLAGS "${CMAKE_C_FLAGS} -Wall -static")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")
	target_compile_definitions(rogue-clone PRIVATE 
		-DPDC_WIDE=1
		-DPDC_FORCE_UTF8=1
		)
	target_link_libraries(rogue-clone
		pdcurses_wincon 
		winmm
		)
else()
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -static")
	set(CMAKE_CPP_FLAGS "${CMAKE_C_FLAGS} -Wall -static")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")
	target_link_libraries(rogue-clone
		ncurses
		tinfo
		)
endif()

