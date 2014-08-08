#include "graphedge.h"

GraphEdge::GraphEdge(GraphNode &node, int weight)
{
    edgeWeight = weight;
    edgeNode = &node;
}

GraphNode* GraphEdge::getNode()
{
    return edgeNode;
}

int GraphEdge::getWeight()
{
    return edgeWeight;
}
