#ifndef GRAPH_H
#define GRAPH_H

#include "graphnode.h"
#include "graphedge.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <fstream>
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
    void toDotFile(string filename);
};

#endif // GRAPH_H
