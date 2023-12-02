CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
HFILE = binary_trees.h

T3_DEP = binary_tree_print.c 3-main.c 3-binary_tree_delete.c \
0-binary_tree_node.c 2-binary_tree_insert_right.c

VALGRIND_FILE = $(word 2,$(MAKECMDGOALS))

betty_check :
	betty *.c *.h

mem_check:
ifeq ($(VALGRIND_FILE),)
	$(error Please provide an object file)
endif
	valgrind ./$(VALGRIND_FILE)

mem_check_all : task_3
task_3 : $(HFILE) $(T3_DEP)
	$(CC) $(CFLAGS) $(T3_DEP) -o out-del
	-./out-del
	valgrind ./out-del
