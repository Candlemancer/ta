#ifndef EDGE_H
#define EDGE_H

#include "GraphNode.h"

class GraphEdge
{
public:
    GraphEdge(GraphNode &adjacent_node); // Need to check to make sure that this is the proper way to overload a constructor.
    GraphEdge(GraphNode &adjacent_node, int node_weight);
    GraphNode getAdjacentNode();
    int getWeight();
private:
    GraphNode node;
    int weight;
};

GraphEdge::GraphEdge(GraphNode &adjacent_node)
{
    GraphEdge(adjacent_node, 1);
}

GraphEdge::GraphEdge(GraphNode &adjacent_node, int node_weight)
{
    node = adjacent_node;
    weight = node_weight;
}

GraphNode GraphEdge::getAdjacentNode()
{
    return node;
}

int GraphEdge::getWeight()
{
    return weight;
}

#endif