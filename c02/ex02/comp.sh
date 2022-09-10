#######		FIND AND COMPILE

find * -maxdepth 1 -type f -name '*.c' -exec gcc -Wall -Wextra -Werror *.c -o prog.exe \;

#######		RUN

find * -name 'prog.exe' -exec ./prog.exe \;

#######		DELETE EXE

rm prog.exe
