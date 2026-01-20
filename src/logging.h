#pragma once

#define RESET   "\033[0m"
#define BLACK   "\033[30m"                 /* Black */
#define RED     "\033[31m"                 /* Red */
#define GREEN   "\033[32m"                 /* Green */
#define YELLOW  "\033[33m"                 /* Yellow */
#define BLUE    "\033[34m"                 /* Blue */
#define MAGENTA "\033[35m"                 /* Magenta */
#define CYAN    "\033[36m"                 /* Cyan */
#define WHITE   "\033[37m"                 /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class log
{
public:
    
    enum level
    {
        levelInfo, levelWarning, levelError
    };


    time_t getTimestamp()
    {
        auto time = std::chrono::system_clock::now();
        auto asTimeT = std::chrono::system_clock::to_time_t(time);
        return asTimeT;
    }

    void fatal(char* msg)
    {
        
        std::cout << RED << getTimestamp() << "[FATAL] " << msg << std::endl;
    }

    void error(char* msg)
    {
        std::cout << MAGENTA << getTimestamp() << "[ERROR] " << msg << std::endl;
    }

    void warn(char* msg)
    {
        std::cout << YELLOW << getTimestamp() << "[WARN]" << msg << std::endl;
    }

    void info(char* msg)
    {
        std::cout << getTimestamp() << "[INFO] " << msg << std::endl;
    }

private:

};