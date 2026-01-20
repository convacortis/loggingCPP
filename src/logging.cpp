#include <iostream>
#include <chrono>
#include "logging.h"


int main()
{
    
    log log;

    log.warn("You are a ...");

    log.error("this is invalid :(");

    log.fatal("fatal error!");

}