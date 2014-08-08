#ifndef NODE_CLASS_H
#define NODE_CLASS_H

class GraphEdge;

#include <vector>
#include <string>
//#include "GraphEdge.h"

using namespace std;

class GraphNode
{
public:
    GraphNode(string nodeName);
    int getInDegree();
    void incrementInDegree();
    void decrementInDegree();
    bool getVisited();
    void markVisited();
    void addAdjacentNode(GraphNode &adjacentNode);
private:
    string name;
    bool isVisited;
    int inDegree;
    vector<GraphEdge> adjacentNodes;
    int totalAdjacent;
};
#endif
