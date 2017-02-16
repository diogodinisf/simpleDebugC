# simple Debug with livels library to use on C programming language

 Author: Diogo Dinis da Fonseca
 
 First release date: 2017-02-15
 Last release date: 2017-02-16
 
 Version 0.9.1
 
 How to use?
 
 * use in your code the various debug types:
   * debug_fatal(string);
   * debug_error(string);
   * debug_warning(string);
   * debug_info(string);
   * debug_trace(string);
 * you can write formated strings like printf.
   * debug_info("received a message: %s", message);
 * specifie the level you want to debug the code:
   * DEBUG_LEVEL_FATAL
   * DEBUG_LEVEL_ERROR
   * DEBUG_LEVEL_WARNING
   * DEBUG_LEVEL_INFO
   * DEBUG_LEVEL_TRACE
 * to specifie the info level you can write to:
   * DEBUG
   * LOGGER
   * LOG
 * YOU NEED TO DEFINE THE DEBUG'S LEVEL BEFORE INCLUDE THE LIB.
   * #define level_you_want
   * #include "relative/path/to/debug.h"
 * don't write anything if you don't want to activate the debugging.
 
 ![simple debug in c example](images_samples/simpleDebugC.png?raw=true "simple debug in c example")
