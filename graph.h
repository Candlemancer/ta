#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <unordered_map>
#include "graphnode.h"
#include "graphedge.h"
using namespace std;
class GraphNode;
class GraphEdge;

class Graph
{
private:
    unordered_map<string, GraphNode> nodeMap;
public:
    Graph();
};

#endif // GRAPH_H
