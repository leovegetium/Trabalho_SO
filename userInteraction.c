#include "userInteraction.h"

char * splitArgument[](char * command, int * counter, size_t t){
  char * arg[3], * token;
  int c;

  for(int i = 0; i < t ; i++) {
    if(i){
      token = strtok(NULL, " ");
    }
    else
      token = strtok(command, " ");

    if(!token){
      arg[i] = NULL;
      break;
    }
  }

  return arg;
}

void commandLine(game * g){
  char command[CMDSIZE], * arg[3];
  int argSize = 0;

  while(1){
    printf(">> ");
    fgets(command, sizeof(command), stdin);

    if(strlen(command) < 2))
      continue
    else
      command[strlen(cmd) - 1] = '\0';

    // SPLIT COMMAND
    arg = splitCommand(cmd, &argSize, 3);

    // STRCMP
    if(!strcmp("add", arg[0])){
      if(argSize == 3){
        if(newUser(arg[1], arg[2], LOGIN_FILE)){
          printf("User Added to file!\n");
          continue;
        }
        else{
          printf("User Info already in File!\n");
          continue;
        }
      }
      else{
        printf("Error in Command! Input: add user pwd!\n");
        continue;
      }

      if(!strcmp("users", arg[0])){
        printf("You selected Users!\n");
        continue;
      }

      if(!strcmp("kick", arg[0])){
        printf("You selected Kick!\n");
        continue;
      }

      if(!strcmp("game", arg[0])){
        printf("You selected game!\n");
        continue;
      }

      if(!strcmp("shutdown", arg[0])){
        printf("You selected shutdown!\n");
        continue;
      }

      if(!strcmp("map", arg[0])){
        printf("It's ME MAP!\n");
        continue;
      }

      if(!strcmp("clear", arg[0])){
        system("clear");
        continue;
      }

      if(!strcmp("help", arg[0])){
        printf("Commands to Use:\n\tadd\n\tusers\n\tkick\n\tgame\n\tshutdown\n\tmap\n");
        continue;
      }

    }

    printf("Command not recognized\n");
  }

}
