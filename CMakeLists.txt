cmake_minimum_required(VERSION 3.0.0)
project(tictactoe VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(main main.cpp player_turn.cpp gameover.cpp display_board.cpp constants.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
