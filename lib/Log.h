#ifndef _LOG_CLASS_H_
#define _LOG_CLASS_H_
#include "Library.h"
#include <ctime>
namespace System {
    
    typedef std::string TAG;
    typedef std::string MESSAGE;

    class Log {
		private:
			
			static void logToFile(TAG tag, MESSAGE msg) 
			{
				FILE *file = fopen("log.txt", "a+");
					
				fclose(file);
			}
		public:
			static void print(TAG tag, MESSAGE msg) 
			{
				logToFile(tag, msg);
			}
        
    };    
};

    
#endif 
