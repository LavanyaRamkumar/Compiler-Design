rm y.tab.c
rm y.tab.h
yacc -d gram.y
lex grammar1.l
gcc y.tab.c lex.yy.c -ll -ly
./a.out < inputs/ip1.c 
