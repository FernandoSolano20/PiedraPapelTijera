cmake_minimum_required(VERSION 3.19)
project(PiedraPapelTijera)

set(CMAKE_CXX_STANDARD 14)

add_executable(PiedraPapelTijera com/juego/ui/main.cpp com/juego/dl/DataAccess.cpp com/juego/dl/DataAccess.h com/juego/bl/Business.cpp com/juego/bl/Business.h com/juego/bl/objects/Jugador.cpp com/juego/bl/objects/Jugador.h com/juego/bl/structures/List.cpp com/juego/bl/structures/List.h com/juego/bl/structures/Node/Node.cpp com/juego/bl/structures/Node/Node.h com/juego/bl/structures/Queue/Queue.cpp com/juego/bl/structures/Queue/Queue.h com/juego/pojo/Mensaje.cpp com/juego/pojo/Mensaje.h com/juego/tl/Controller.cpp com/juego/tl/Controller.h)