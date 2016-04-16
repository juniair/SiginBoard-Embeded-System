#ifndef _LOG_CLASS_H_
#define _LOG_CLASS_H_

namespace System {
    #include "required_lib.h"
    typedef std::string TAG;
    typedef std::string MESSAGE;

    class Log {
    private:

        void logToFile(TAG tag, MESSAGE msg) const {
            File *file = fopen("log.txt")
            
        }
    public:
        static void print(TAG tag, MESSAGE msg) const {
            
            logToFile(tag, msg);
        }
        
    };    
};

    
#endif 
