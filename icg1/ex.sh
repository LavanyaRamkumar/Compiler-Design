cd icg
#printf "\n--------------- ICG --------------- ICG ---------------------- ICG ---------------\n"
#printf "dummy icg\n"
yacc -d grammar.y
lex grammar.l
gcc y.tab.c lex.yy.c -ll -ly
./a.out < "../IO/$1" > ../IO/icg.icg
cd ../symtab
