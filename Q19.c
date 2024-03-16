#include <stdio.h>

// Structure for representing a node in a tree
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Structure for representing an edge in a graph
struct GraphEdge
{
    int source;
    int destination;
};

int main()
{
    // Explanation of Tree vs Graph
    printf("Tree vs Graph:\n");
    printf("-----------------\n");
    printf("1. Tree:\n");
    printf("   - A tree is a hierarchical data structure.\n");
    printf("   - It consists of nodes connected by edges.\n");
    printf("   - Each node has exactly one parent (except the root node) and zero or more children.\n");
    printf("   - There are no cycles in a tree.\n");
    printf("   - It has a single root node from which all other nodes are reachable.\n");
    printf("   - Examples of trees include binary trees, binary search trees, and AVL trees.\n");
    printf("\n");
    printf("2. Graph:\n");
    printf("   - A graph is a non-hierarchical data structure.\n");
    printf("   - It consists of vertices (nodes) connected by edges.\n");
    printf("   - Each edge can have any number of vertices as its endpoints.\n");
    printf("   - Graphs may contain cycles.\n");
    printf("   - There is no concept of a root node in a graph.\n");
    printf("   - Examples of graphs include directed graphs, undirected graphs, and weighted graphs.\n");

    return 0;
}
