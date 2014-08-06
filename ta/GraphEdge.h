#ifndef EDGE_CLASS_H
#define EDGE_CLASS_H

class GraphNode;

//#include "GraphNode.h"

class GraphEdge
{
public:
    GraphEdge(GraphNode &adjacent_node, int node_weight);
    GraphEdge(GraphNode &adjacent_node) : GraphEdge(adjacent_node, 1) {};
    GraphNode getAdjacentNode();
    int getWeight();
private:
    GraphNode node;
    int weight;
};
#endif