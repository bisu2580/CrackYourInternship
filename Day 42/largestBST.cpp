#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class NodeValue
{
public:
    int mini, maxi, maxSize;
    NodeValue(int minNode, int maxNode, int size)
    {
        this->mini = minNode;
        this->maxi = maxNode;
        this->maxSize = size;
    }
};
class Solution
{
public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    NodeValue solve(Node *root)
    {
        if (!root)
            return NodeValue(INT_MAX, INT_MIN, 0);
        auto left = solve(root->left);
        auto right = solve(root->right);
        if (left.maxi < root->data && root->data < right.mini)
        {
            return NodeValue(min(root->data, left.mini), max(root->data, right.maxi), left.maxSize + right.maxSize + 1);
        }
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }
    int largestBst(Node *root)
    {
        return solve(root).maxSize;
    }
};
int main()
{
}