#include "user/user.h"
#include"kernel/types.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: sleep [time]\n");
        exit(1);
    } else {
        int time = atoi(argv[1]);
        if (time < 0) exit(1);
        sleep(time);
        exit(0);
    }
}