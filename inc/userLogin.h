#ifndef USERLOGIN_H
#define USERLOGIN_H

#include "base.h"
#define LOGIN_FILE "client.txt"
#define size_user 30
#define size_pwd 30

typedef struct login login_n;
struct login {
  char user[size_user], pw[size_pwd];
  login_n * next;
};

bool checkUser(char * user, char * filename);
bool addUser(char * user, char * pwd, char * filename);

#endif
