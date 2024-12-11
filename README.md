
![printf image image (1)](https://images.wondershare.com/edrawmax/articles2024/binary-search-flowchart-maker/binary-tree-program-in-c-implementing-tree-structures-01.jpg)

# **Binary Trees**

## Description
This project aims to initiate to general manipulation of binary trees in C. What are the depth, height, size of a binary tree, the different transversal methods to go through a binary tree, what is a comple, a full, a perfect, a balanced binary tree.

## Structure
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

```

## Files
[0-binary_tree_node.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c)
: creates a binary tree code.

[1-binary_tree_insert_left.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c)
: inserts a node as the left-child of another node.

[2-binary_tree_insert_right.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c)
: inserts a node as the right-child of another node.

[3-binary_tree_delete.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c)
: deletes an entire binary tree.

[4-binary_tree_is_leaf.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c)
: checks if a node is a leaf.

[5-binary_tree_is_root.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c)
: checks if a given node is a root.

[6-binary_tree_preorder.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c)
: goes through a binary tree using pre-order traversal.

[7-binary_tree_inorder](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c)
: goes through a binary tree using in-order traversal.

[8-binary_tree_postorder.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c)
: goes through a binary tree using post-order traversal.

[9-binary_tree_height](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c)
: measures the height of a binary tree.

[10-binary_tree_depth.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c)
: measures the depth of a node in a binary tree.

[11-binary_tree_size.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c)
: measures the size of a binary tree.

[12-binary_tree_leaves.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c)
: counts the leaves in a binary tree.

[13-binary_tree_nodes.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c)
: counts the nodes with at least 1 child in a binary tree.

[14-binary_tree_balance.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c)
: measures the balance factor of a binary tree.

[15-binary_tree_is_full.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c)
: checks if a binary tree is full.

[16-binary_tree_is_perfect.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c)
: checks if a binary tree is perfect.

[17-binary_tree_sibling.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c)
: finds the sibling of a node.

[18-binary_tree_uncle.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c)
: finds the uncle of a node.

[binary_tree_print.c](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/binary_tree_print.c)
: This function is used to match the examples in the tasks and used only for vizualization purposes.

[binary_trees.h](https://github.com/tramiNGY/holbertonschool-binary_trees/blob/main/binary_trees.h)
: Header containing all the prototypes and structure definition of binary trees.

## Other requirements
- Betty style: Holbertonschool code layout rules
- Not allowed to use global variables
- No more than 5 functions per File

## Compilation
The command used to compile in GNU under Ubuntu 20.04 LTS is:
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89
```

## Authors

[Tra Mi NGUYEN](https://github.com/tramiNGY)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![badge github image (1)](https://badgen.net/badge/icon/github?icon=github&label)

[Tom DIBELLONIO](https://github.com/totomus83)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![badge github image (1)](https://badgen.net/badge/icon/github?icon=github&label)
