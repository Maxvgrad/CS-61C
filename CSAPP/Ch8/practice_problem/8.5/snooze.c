#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void snooze(unsigned int secs) {
    int secsLeftToSleep = sleep(secs);
    printf("Slept for %d of %d secs.\n", secs - secsLeftToSleep, secs);
}

void handler(int sig) {
    printf("Handling signal %d\n", sig);
    if (sig != SIGINT) {
        exit(0);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit(0);
    }

    if (signal(SIGINT, handler) == SIG_ERR) {
        exit(0);
    }

    unsigned int secs;
    sscanf(argv[1], "%d", &secs);
    printf("Secs: %d\n", secs);
    snooze(secs);
    return 0;
}