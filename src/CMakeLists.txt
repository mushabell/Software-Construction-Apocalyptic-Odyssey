
add_library(simpleLibrary
    Display.cpp
    Game.cpp
    Person.cpp
    Progress.cpp
    main.cpp
    Weapon.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})