#ifndef _LOG_CLASS_H_
#define _LOG_CLASS_H_
#include "Library.h"

namespace System {
    typedef std::string TAG;
    typedef std::string MESSAGE;

    class Log {
	    private:
	        static void makeLogFile(std::string log) 
			{
	            FILE *file = fopen("log.txt", "a+");
	            fclose(file)
	        }
	    public:
	        static void print(TAG tag, MESSAGE msg) 
			{
				auto now = std::chrono::system_clock::now();
				std::string time = std::chrono::system_clock::to_time_t(now);
				std::string log = time + " " + tag + ": " + msg;
    	        makeLogFile(log);
    	    }
	};
};
