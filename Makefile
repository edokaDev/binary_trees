CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
HFILE = binary_trees.h
T0_DEP = 0-binary_tree_node.c 0-main.c binary_tree_print.c
T1_DEP = 1-binary_tree_insert_left.c 1-main.c \
binary_tree_print.c 0-binary_tree_node.c
T2_DEP = 2-binary_tree_insert_right.c 2-main.c \
0-binary_tree_node.c binary_tree_print.c
T3_DEP = binary_tree_print.c 3-main.c 3-binary_tree_delete.c \
0-binary_tree_node.c 2-binary_tree_insert_right.c
T4_DEP = binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c \
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
	valgrind ./out-del

task_0 : $(HFILE) $(T0_DEP)
	$(CC) $(CFLAGS) $(T0_DEP) -o out-node

task_1 : $(HFILE) $(T1_DEP)
	$(CC) $(CFLAGS) $(T1_DEP) -o out-left
	-./out-left

task_2 : $(HFILE) $(T2_DEP)
	$(CC) $(CFLAGS) $(T2_DEP) -o out-right
	-./out-right

task_3 : $(HFILE) $(T3_DEP)
	$(CC) $(CFLAGS) $(T3_DEP) -o out-del
	-./out-del

task_4 : $(HFILE) $(T4_DEP)
	$(CC) $(CFLAGS) $(T4_DEP) -o out-leaf
	-./out-leaf

