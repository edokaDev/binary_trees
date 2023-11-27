CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
T0_DEP = binary_trees.h 0-binary_tree_node.c 0-main.c
T1_DEP = binary_trees.h 1-binary_tree_insert_left.c 1-main.c 0-binary_tree_node.c

task_0 : $(T0_DEP)
	$(CC) $(CFLAGS) 0-main.c 0-binary_tree_node.c -o out-node

task_1 : $(T1_DEP)
	$(CC) $(CFLAGS) binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o out-left
	-./out-left