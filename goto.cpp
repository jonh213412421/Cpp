//install mingw64 for gmp lib
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //status
    char status[100];
    printf("Whats your status today? ");
    scanf("%s", &status);
    // check status
    if (status == "well") {
        // goto
        goto well;
    }

    if (status == "bad") {
        // goto
        goto bad;
    }
    // handles each case
    well:
        printf("Great!");

    bad:
        printf("I hope it gets better soon. Go talk to a friend!");

    return 0;
}
