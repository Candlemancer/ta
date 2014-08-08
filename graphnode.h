#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <string>
#include <vector>
#include "graphedge.h"
using namespace std;
class GraphEdge;

class GraphNode
{
private:
    string node;
    int inDegree;
    bool nodeVisited;
    int adjacentNodesTotal;
    vector<GraphEdge> adjacentNodes;
public:
    GraphNode(); //This default constructor is only here because we need it here to be compatable with unsortedmaps.
    GraphNode(string nodeName);
    void addEdge(GraphNode adjNode);
    void incrementInDegree();
    void decrementInDegree();
    int getInDegree();
    bool getVisted();
    void setVisted(bool status);
};

#endif // GRAPHNODE_H
