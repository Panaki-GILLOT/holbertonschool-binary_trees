# 🌳holbertonschool-binary_trees

Welcome to the **Binary Trees** project! This project is part of the Holberton School curriculum and dives into one of the most fundamental and elegant data structures in computer science — the binary tree. Whether you're traversing nodes, measuring heights, or checking balance, this project has it all. Let's grow some trees! 🌱

---

## 🧠 What You'll Learn

By the end of this project, you'll be able to confidently explain:

- What a binary tree is and how it works
- The difference between a binary tree and a Binary Search Tree (BST)
- Why binary trees can be faster than linked lists in terms of time complexity
- The concepts of depth, height, and size of a binary tree
- The different traversal methods: pre-order, in-order, post-order, and level-order
- What makes a tree complete, full, perfect, or balanced

---

## 🏗️ Data Structures

Here are the core types used throughout the project — don't forget to include them in your header file!

```c
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
typedef struct binary_tree_s bst_t;   /* Binary Search Tree */
typedef struct binary_tree_s avl_t;   /* AVL Tree */
typedef struct binary_tree_s heap_t;  /* Max Binary Heap */
```

---

## 📁 File Overview

| File | Description |
|---|---|
| `binary_trees.h` | Header file — prototypes & data structures |
| `0-binary_tree_node.c` | Create a new binary tree node |
| `1-binary_tree_insert_left.c` | Insert a node as the left child |
| `2-binary_tree_insert_right.c` | Insert a node as the right child |
| `3-binary_tree_delete.c` | Delete an entire binary tree |
| `4-binary_tree_is_leaf.c` | Check if a node is a leaf |
| `5-binary_tree_is_root.c` | Check if a node is the root |
| `6-binary_tree_preorder.c` | Pre-order traversal |
| `7-binary_tree_inorder.c` | In-order traversal |
| `8-binary_tree_postorder.c` | Post-order traversal |
| `9-binary_tree_height.c` | Measure the height of a tree |
| `10-binary_tree_depth.c` | Measure the depth of a node |
| `11-binary_tree_size.c` | Get the size of a tree |
| `12-binary_tree_leaves.c` | Count the leaves |
| `13-binary_tree_nodes.c` | Count nodes with at least one child |
| `14-binary_tree_balance.c` | Get the balance factor |
| `15-binary_tree_is_full.c` | Check if the tree is full |
| `16-binary_tree_is_perfect.c` | Check if the tree is perfect |
| `17-binary_tree_sibling.c` | Find the sibling of a node |
| `18-binary_tree_uncle.c` | Find the uncle of a node |

---

## ⚙️ Compilation

All files are compiled on **Ubuntu 20.04 LTS** with the following flags:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c <main_file.c> <function_file.c> -o output
```

---

## 🚀 Example

Here's a quick taste of what you can build:

```c
#include <stdlib.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);
    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}
```

And here's the beautiful tree it produces:

```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```

Pretty cool, right? 🎉

---

## 📋 Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style:** Betty coding style
- No global variables allowed
- No more than 5 functions per file
- All header files must be include-guarded

---

## ✍️ Authors

This project was built with 💙 as part of the **Holberton School** curriculum.

Noham et Panaki