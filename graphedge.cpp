#include "graphedge.h"

GraphEdge::GraphEdge(GraphNode &node, int weight)
{
    edgeWeight = weight;
    edgeNode = &node;
    edgeNode->incrementInDegree();
}

GraphNode* GraphEdge::getNode()
{
    return edgeNode;
}

int GraphEdge::getWeight()
{
    return edgeWeight;
}
