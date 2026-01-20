#pragma once

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
        
        std::cout << getTimestamp() << "[FATAL] " << msg << std::endl;
    }

    void error(char* msg)
    {
        std::cout << getTimestamp() << "[ERROR] " << msg << std::endl;
    }

    void warn(char* msg)
    {
        std::cout << getTimestamp() << "[WARN]" << msg << std::endl;
    }

    void info(char* msg)
    {
        std::cout << getTimestamp() << "[INFO] " << msg << std::endl;
    }

private:

};