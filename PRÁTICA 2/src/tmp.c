#include "../include/tmp.h"

float diffUserTime(struct rusage *start, struct rusage *end)
{
  return (end->ru_utime.tv_sec - start->ru_utime.tv_sec) + 1e-6*(end->ru_utime.tv_usec - start->ru_utime.tv_usec);
}

float diffSystemTime(struct rusage *start, struct rusage *end)
{
  return (end->ru_stime.tv_sec - start->ru_stime.tv_sec) + 1e-6*(end->ru_stime.tv_usec - start->ru_stime.tv_usec);
}