step1: download lab2.tar.gz
step2: extract lab2.tar.gz
step3:
gcc linktable.c menu.c test.c -o test
./test

Examples used in test.c can be replaced as AddMenuData(&head, "*****", "**************", Handler);
Meanwhile you can add a function "int Handler(){}" as you like.