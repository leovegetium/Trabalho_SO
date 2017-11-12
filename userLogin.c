#include "userInteracion.h"

bool checkUser(char * user, char * filename){
  char u[40], p[40];
  FILE * f = fopen(filename, "r");
  if(f == NULL){
    printf("Error accesing file %s\n", filename);
    return false;
  }

  while(fscanf(f,"%s %*s", u) == 2){
    if(strcmp(u, user) == 0){
      fclose(f);
      return true;
    }
  }

  fclose(f);
  return false;
}

bool addUser(char * user, char * pwd, char * filename){
  FILE * f = NULL;

  if(checkUser(user, filename)){
    printf("Usuario ja existe.\n");
    return false;
  }

  f = fopen(filename, "a");
  if(f == NULL){
    printf("Ficheiro nao encontrado.\n");
    return false;
  }

  fprintf(f,"%s %s\n", user, pwd);
  fclose(f);

  return true;
}
