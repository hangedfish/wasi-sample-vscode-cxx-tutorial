/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include <stdio.h>
#include <stdlib.h>

void say_hello(){
    printf("say hello\n");
}

int
main(int argc, char **argv)
{
    char *buf;
    int i = 0;
    printf("Hello world!\n");
    buf = malloc(1024);
    if (!buf) {
        printf("malloc buf failed\n");
        return -1;
    }
    printf("buf ptr: %p\n", buf);
    i = 100;
    snprintf(buf, 1024, "%s", "1234\n");
    printf("buf: %s", buf);
    free(buf);
    say_hello();
    return 0;
}