#printf "\n--------------- SYMTAB --------------- SYMTAB ---------------------- SYMTAB ---------------\n"
#printf "\nyacc -d grammar.y -------\n"
yacc -d grammar.y
#printf "\nlex grammar.l ------\n"
lex grammar.l
#printf "\ngcc -Wall y.tab.c lex.yy.c -ll -ly --------\n"
gcc y.tab.c lex.yy.c -ll -ly
#printf "\n./a.out < inputs/ip1.c --------\n"
./a.out < "../IO/$1" 

sleep 0.5
cd ..
l=$(head -1 valid.txt)
if [[ $l = "1" ]] ; then
	 bash ast/ex.sh "../IO/$1" 
	 bash icg/ex.sh "../IO/$1" 
fi
