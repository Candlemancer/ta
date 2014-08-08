#ifndef GRAPH_H
#define GRAPH_H

#include "graphnode.h"
#include "graphedge.h"
#include <string>
#include <unordered_map>
using namespace std;
class GraphNode;
class GraphEdge;

class Graph
{
private:
    unordered_map<string, GraphNode> nodeMap;
    GraphNode createReturnNode(string nodeName);
public:
    Graph();
    void addNode(string nodeName);
    void linkNodes(string nodeSource, string nodeDest);
};

#endif // GRAPH_H
