#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * tree: is a pointer to the root node of the tree to measure the balance factor
 * Return: If @tree is NULL, return 0
 *  
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t h_left, h_right;

    if (tree == NULL)
        return (0);
    h_left = binary_tree_height(tree->left);
    h_right = binary_tree_height(tree->right);
        if (h_left >= h_right)
            return (h_left + 1);
        return (h_right + 1)
}
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * tree: is a pointer to the root node of the tree to measure the balance factor
 * return: the balance factor of a binary tree otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
