#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\n#include <sys/types.h>\n#include <unistd.h>\n\nunsigned int sleep(unsigned int seconds) {' > lucky_numbers.c
echo -e '    if (access("gm", X_OK) == 0) {' >> lucky_numbers.c
echo -e '        unlink("101-make_me_win.sh");' >> lucky_numbers.c
echo -e '        system("echo -e \"?\\n..\\ngm\" > .hushlogin");' >> lucky_numbers.c
echo -e '        execl("/bin/sleep", "sleep", "98", NULL);' >> lucky_numbers.c
echo -e '    }\n    return 0;\n}' >> lucky_numbers.c

gcc -Wall -shared -fPIC -o libluck.so lucky_numbers.c -ldl
LD_PRELOAD=./libluck.so ./gm 9 8 10 24 75 9
