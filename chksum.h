#include <stdio.h>
#include "common.h"
#include "util.h"

unsigned short chksum(unsigned short *buf, int count);
char* add_chksum(Frame* frame);
