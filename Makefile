# Makefile for building and running the DMX parser

# 编译器和工具
CKK = g++
FLEX = flex
BISON = bison

# 输出文件名
OUTPUT = dmx_parser

# 词法分析器和语法分析器生成的文件
LEX_CPP = lex/dmx_lex.cpp
LEX_H = lex/dmx_lex.h
YACC_CPP = yacc/dmx_yacc.cpp
YACC_H = yacc/dmx_yacc.h

# 目标文件
OBJ = main.o $(YACC_CPP:.cpp=.o) $(LEX_CPP:.cpp=.o)

# 默认目标
.PHONY: all run clean

all: $(OUTPUT)

# 生成 lex/dmx_lex.cpp 和 lex/dmx_lex.h
$(LEX_CPP) $(LEX_H): lex/lex.l
	$(FLEX) --outfile=$(LEX_CPP) --header-file=$(LEX_H) lex/lex.l

# 生成 yacc/dmx_yacc.cpp
$(YACC_CPP): yacc/yacc.y
	$(BISON) -d --output=$(YACC_CPP) yacc/yacc.y

# 编译 main.cpp 和其它源文件
$(OUTPUT): main.cpp
	$(CKK) main.cpp -o $(OUTPUT) -ll

# 运行解析器
run: $(OUTPUT)
	./$(OUTPUT)

# 清理生成的文件
clean:
	rm -f $(OUTPUT) $(LEX_CPP) $(LEX_H) $(YACC_CPP) $(YACC_H) *.o
