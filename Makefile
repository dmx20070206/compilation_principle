# Makefile

# 目标文件和可执行文件的名称
LEX_FILE = lex.l
LEX_OUTPUT = lex.yy.c
EXEC_FILE = dmx_lexer

# 默认目标
all: $(EXEC_FILE)

# 编译 lex 文件并生成 C 源文件
$(LEX_OUTPUT): $(LEX_FILE)
	lex $(LEX_FILE)

# 编译 C 文件并生成可执行文件
$(EXEC_FILE): $(LEX_OUTPUT)
	gcc $(LEX_OUTPUT) -o $(EXEC_FILE) -ll

# 运行生成的可执行文件
run: $(EXEC_FILE)
	./$(EXEC_FILE)

# 清理生成的文件
clean:
	rm -f $(LEX_OUTPUT) $(EXEC_FILE)
