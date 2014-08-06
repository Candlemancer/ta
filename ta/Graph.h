#ifndef GRAPH_CLASS_H
#define GRAPH_CLASS_H

#include <unordered_map>
#include "GraphNode.h"
#include "GraphEdge.h"

class Graph
{
public:
    //Graph();
private:
    unordered_map<string, GraphNode> nodeMap;
};
#endif