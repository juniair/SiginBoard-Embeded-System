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
				std::ofstream file("log.txt");

				file << log;
	 			file.close();           
	        }
	    public:
	        static void print(TAG tag, MESSAGE msg) 
			{
				auto now = std::chrono::system_clock::now();
				auto time = std::chrono::system_clock::to_time_t(now);
				std::string logDate = std::ctime(&time);
				
				std::string logInfomation = logDate - "\n" + " " + tag + ": " + msg + \n;
    	        makeLogFile(logInfomation);
    	    }
	};
};
