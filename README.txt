step1: download lab2.tar.gz
step2: extract lab2.tar.gz
step3:
$gcc linktable.c menu.c test.c -o test
$./test
(step4: give me a 5)

Examples used in test.c can be replaced as AddMenuData(&head, "command", "command description", Handler);
Meanwhile you can add a function "int Handler(){}" as you like.
