# CMakeList.txt: проект CMake для Laba9; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Laba9 "Laba9.cpp" "Laba9.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Laba9 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
