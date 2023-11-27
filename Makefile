CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
HFILE = binary_trees.h
T0_DEP = 0-binary_tree_node.c 0-main.c binary_tree_print.c
T1_DEP = 1-binary_tree_insert_left.c 1-main.c \
binary_tree_print.c 0-binary_tree_node.c
T2_DEP = 2-binary_tree_insert_right.c 2-main.c \
0-binary_tree_node.c binary_tree_print.c

betty_check :
	betty *.c *.h

# mem_check : task_0 task_1 task_2
# 	valgrind ./out-node
# 	valgrind ./out-left
# 	valgrind ./out-right

task_0 : $(HFILE) $(T0_DEP)
	$(CC) $(CFLAGS) $(T0_DEP) -o out-node

task_1 : $(HFILE) $(T1_DEP)
	$(CC) $(CFLAGS) $(T1_DEP) -o out-left
	-./out-left

task_2 : $(HFILE) $(T2_DEP)
	$(CC) $(CFLAGS) $(T2_DEP) -o out-right
	-./out-right
