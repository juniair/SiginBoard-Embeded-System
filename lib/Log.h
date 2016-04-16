#ifndef _LOG_H_
#define _LOG_H_

#include "required_lib.h"
typedef char* TAG;
typedef char* MESSAGE;

typedef struct Log{
    TAG tag;
    MESSAGE log_message;
    void print(TAG, MESSAGE);
    
} Log;

void log_print(Log log)
{
    File *fp = fopen("log.txt", "a+");
    
    fclose(fp);    
}
    
#endif 
