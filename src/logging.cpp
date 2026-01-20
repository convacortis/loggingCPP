#include "logging.h"


int main()
{
    
    loggingSys::log &log1 = loggingSys::log::getInstance();

    LOG_FATAL("You are a ...");

    LOG_WARN("this is invalid :(");

    LOG_INFO("fatal error!");

}