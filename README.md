# loggingCPP

A simple logging program for C++ programs.
Features: colours, timestamps, object is created only once, writing to text files.


### Instructions

1. include `logging.h`

thats it...


### Macros

LOG_FATAL("...");

LOG_ERROR("...");

LOG_WARN("...");

LOG_INFO("...");


fill "..." with whatever you feel like.


### Future features

- make timestamp human readable

- release and debug modes (in release log macros should be stripped)

- ability to filter/hide which logs show

- option for program abortion if an error/fatal is reached

- thread safety

- ~~macro(s) to track memory~~

- ~~support for variables~~