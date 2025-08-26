#ifndef LOG_H
#define LOG_H

#if NDEBUG

#define LOG_INFO(...)
#define LOG_FAILURE(...)
#define LOG_CRITICAL(...)

#else

#define LOG_INFO(...) printf(__VA_ARGS__)
#define LOG_FAILURE(...) printf(__VA_ARGS__)
#define LOG_CRITICAL(...) printf(__VA_ARGS__)

#endif

#endif/*LOG_H*/
