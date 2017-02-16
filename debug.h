/* Debug logger with levels
 * Author: Diogo Dinis da Fonseca
 * First release date: 2017-02-15
 * Version 0.9.0
 * 
 * How to use?
 * · use in your code the various debug types:
 *   · debug_fatal (purple)
 *   · debug_error (red)
 *   · debug_warning (yellow)
 *   · debug_info (green)
 *   · debug_trace (blue)
 * · you can write formated strings like printf.
 * · specifie the level you want to debug the code:
 *   · DEBUG_LEVEL_FATAL
 *   · DEBUG_LEVEL_ERROR
 *   · DEBUG_LEVEL_WARNING
 *   · DEBUG_LEVEL_INFO
 *   · DEBUG_LEVEL_TRACE
 * · to specifie the info level you can write to:
 *   · DEBUG
 *   · LOGGER
 *   · LOG
 * · YOU NEED TO DEFINE THE DEBUG'S LEVEL BEFORE INCLUDE THE LIB.
 *   · #define level_you_want
 *   · #include "relative/path/to/debug.h"
 * · don't write anything if you don't want to activate the debugging.
 */

#include <stdio.h>

#define COLOR_WHITE     "\e[1;37m"
#define COLOR_GREEN     "\e[1;32m"
#define COLOR_RED       "\e[1;31m"
#define COLOR_BLUE      "\e[1;34m"
#define COLOR_YELLOW    "\e[1;33m"
#define COLOR_PURPLE    "\e[1;35m"
#define COLOR_NC        "\e[0m"

#ifdef DEBUG_LEVEL_TRACE
    #define DEBUG_LEVEL 5
#else
    #ifdef DEBUG_LEVEL_INFO
        #define DEBUG_LEVEL 4
    #else
        #ifdef LOGGER
            #define DEBUG_LEVEL 4
        #else
            #ifdef LOG
                #define DEBUG_LEVEL 4
            #else
                #ifdef DEBUG
                    #define DEBUG_LEVEL 4
                #else
                    #ifdef DEBUG_LEVEL_WARNING 
                        #define DEBUG_LEVEL 3
                    #else    
                        #ifdef DEBUG_LEVEL_ERROR
                            #define DEBUG_LEVEL 2
                        #else
                            #ifdef DEBUG_LEVEL_FATAL
                                #define DEBUG_LEVEL 1
                            #else
                                #define DEBUG_LEVEL 0
                            #endif
                        #endif
                    #endif
                #endif
            #endif
        #endif
    #endif
#endif

#define debug_print(fmt, color, type, level, ...) \
            do { \
                if (DEBUG_LEVEL >= level) { \
                    fprintf(stderr,"%s[%s:%d] %s%s:%s ", COLOR_WHITE, __FILE__, __LINE__, color, type, COLOR_NC); \
                    fprintf(stderr, fmt, ##__VA_ARGS__); \
                    fprintf(stderr, "\n"); \
                } \
            } while(0)
                
#define debug_trace(fmt, ...)   debug_print(fmt, COLOR_BLUE,   "TRACE",   5, ##__VA_ARGS__)            
#define debug_info(fmt, ...)    debug_print(fmt, COLOR_GREEN,  "INFO",    4, ##__VA_ARGS__)
#define debug_warning(fmt, ...) debug_print(fmt, COLOR_YELLOW, "WARNING", 3, ##__VA_ARGS__)
#define debug_error(fmt, ...)   debug_print(fmt, COLOR_RED,    "ERROR",    2,  ##__VA_ARGS__)
#define debug_fatal(fmt, ...)   debug_print(fmt, COLOR_PURPLE, "FATAL",   1, ##__VA_ARGS__)    
    
