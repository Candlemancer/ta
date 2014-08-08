#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include "graphnode.h"
class GraphNode;

class GraphEdge
{
private:
    GraphNode *edgeNode;
    int edgeWeight;
public:
    GraphEdge(GraphNode &node, int weight = 0);
    GraphNode* getNode();
    int getWeight();
};

#endif // GRAPHEDGE_H
