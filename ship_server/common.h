#ifndef COMMON_H
#define COMMOH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <time.h>

#ifdef _WIN32
#define NO_ALIGN __declspec(align(1))
#define NO_ALIGN_END
#endif /* _WIN32 */

#ifdef __linux__

#define NO_ALIGN
#define NO_ALIGN_END __attribute__((aligned(1)))
#define SOCKET_ERROR -1
#define max fmax
#define closesocket close

#include <errno.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

#endif /* __linux__ */

#endif /* COMMON_H */
