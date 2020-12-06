# CMakeList.txt: projekt CMake dla elementu CMakeProject1, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (CMakeProject1 "main.cpp" "head.h" "baza.h" "baza.cpp" "car.cpp" "car.h" "renter.cpp" "renter.h" "adder.cpp" "adder.h" "basedclass.h")

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
