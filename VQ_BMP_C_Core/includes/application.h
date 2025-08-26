#ifndef APPLICATION_H
#define APPLICATION_H

typedef enum {
  APP_EXIT_SUCCES = 0,
  FAILURE,
  CRITICAL
}APP_EXIT_CODE;

APP_EXIT_CODE start_app();

#endif/*APPLICATION_H*/
