# simple Debug with livels library to use on C programming language

 Author: Diogo Dinis da Fonseca
 
 First release date: 2017-02-15
 
 Version 0.9.0
 
 How to use?
 
 * use in your code the various debug types:
   * debug_fatal (purple)
   * debug_error (red)
   * debug_warning (yellow)
   * debug_info (green)
   * debug_trace (blue)
 * you can write formated strings like printf.
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
 
