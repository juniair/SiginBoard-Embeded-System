#ifndef _LOG_H_
#define _LOG_H_

namespace System {
    #include "required_lib.h"
    typedef char* TAG;
    typedef char* MESSAGE;

    class Log {
    private:
        

        void logToFile(TAG tag, MESSAGE msg) const {
            File *file = fopen("log.txt")
        }
    public:
        static void print(TAG tag, MESSAGE msg) const {
            prtinf("%s: %s\n", tag, msg);
            logToFile(tag, msg);
        }
        
    };    
};

    
#endif 
