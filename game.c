#include "game.h"

// GAME INIT 2 NULL
void gameInit(game * g){
  g->ul = NULL;
  g->m = NULL;
}

// GAME MAP INIT GET MAP POINTER IN ARG TO GAME STRUCT
void gameMapInit(map * m, game * g){
  g->m = m;
}

// USER LIST INIT GET USER LIST POINTER IN ARG TO GAME STRUCT
void userListInit(login_n * u, game * g){
  g->ul = u;
}
