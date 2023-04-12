#ifndef TMP_H
#define TMP_H
#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/resource.h>
#include <threads.h>

enum
{
  NUM_ITERS = 1000000, 
  NUM_THREADS = 16
};

float diffUserTime(struct rusage *start, struct rusage *end);
float diffSystemTime(struct rusage *start, struct rusage *end);

#endif