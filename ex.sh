printf "\nyacc -d grammar2.y -------\n"
yacc -d grammar2.y
printf "\nlex grammar1.l ------\n"
lex grammar1.l
printf "\ngcc -Wall y.tab.c lex.yy.c -ll -ly --------\n"
gcc y.tab.c lex.yy.c -ll -ly
printf "\n./a.out < inputs/ip1.c --------\n"
./a.out < inputs/ip1.c #> outputs/op1.c
