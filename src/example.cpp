#include <string>
#include "logging.h"


int main()
{
    
    LOG_FATAL("You are a ...");

    LOG_WARN("this is.. :(");

    LOG_INFO("all good here, doing stuff..");

    LOG_ERROR("oh no!");

    LOG_MEMORY("memory usage ...");

    int health = 20;
    
    LOG_INFO("health: %d", health);

    std::string example = "this is string in the thing";
    
    LOG_INFO("welcome: %s", example.c_str());


}