# CMakeList.txt: projekt CMake dla elementu CMakeProject1, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (CMakeProject1 "main.cpp"  "baza.h" "baza.cpp" "car.cpp" "car.h" 
     "compare.h"
"abstractCommand.h" "abstractCommand.cpp" "addCarCommand.h" "addCarCommand.cpp" 
"commandExecutor.h" "commandExecutor.cpp" "exceptions.h" "exceptions.cpp"
"deleteCarCommand.h" "deleteCarCommand.cpp" "abstractBase.h"  "txtBase.h" "txtBase.cpp")

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
