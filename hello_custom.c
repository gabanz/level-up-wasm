#include <stdio.h>

int main(int argc, char **argv) {
    printf("%s %s!\n", argv[1], argv[2]);
    return 0;
}
    emscripten_run_script('console.log("test")');
