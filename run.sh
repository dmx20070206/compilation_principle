flex --outfile lex/dmx_lex.cpp --header-file=lex/dmx_lex.h lex/lex.l
bison -d --output yacc/dmx_yacc.cpp yacc/yacc.y

g++ -o dmx_parser main.cpp lex/dmx_lex.cpp
./dmx_parser 