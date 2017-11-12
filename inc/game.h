#ifndef GAME_H
#define GAME_H

#include "base.h"
#include "map.h"
#include "userLogin.h"

typedef struct game game;
struct game {
  login_n * ul;
  map * m;
};

// GAME INIT 2 NULL
void gameInit(game * g);

// GAME MAP INIT GET MAP POINTER IN ARG TO GAME STRUCT
void gameMapInit(map * m, game * g);

// USER LIST INIT GET USER LIST POINTER IN ARG TO GAME STRUCT
void userListInit(login_n * u, game * g);

#endif
