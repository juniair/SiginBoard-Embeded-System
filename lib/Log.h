#ifndef _LOG_H_
#define _LOG_H_

#include "required_lib.h"
#define LOG_SOCKET "SOCKET"

typedef struct Log{
    char* TAG;
    char* log_message;
} Log;

void Log(Log log)
{
    File *fp = fopen("log.txt", "a+");
    
    fclose(fp);    
}
    
#endif