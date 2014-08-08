#include "GraphEdge.h"

GraphEdge::GraphEdge(GraphNode *adjacent_node, int node_weight = 1)
{
    node = adjacent_node;
    weight = node_weight;
}

GraphNode* GraphEdge::getAdjacentNode()
{
    return node;
}

int GraphEdge::getWeight()
{
    return weight;
}
