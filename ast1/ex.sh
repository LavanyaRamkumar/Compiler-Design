cd ast	
#printf "\n--------------- AST --------------- AST ---------------------- AST ---------------\n"
#printf "dummy ast\n"
yacc -d gram.y
lex grammar1.l
gcc -w y.tab.c lex.yy.c -ll -ly
./a.out < "../IO/$1"

#python create_tree.py
cd ../symtab
