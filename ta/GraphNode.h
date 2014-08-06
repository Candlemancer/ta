#ifndef NODE_H
#define NODE_H

#include <vector>
#include "GraphEdge.h"

using namespace std;

class GraphNode
{
public:
    GraphNode(string nodeString);
    int getInDegree();
    void incrementInDegree();
    void decrementInDegree();
    bool getVisited();
    void markVisited();
    void addAdjacentNode(GraphNode &adjacentNode);
private:
    string element;
    bool isVisited;
    int inDegree;
    vector<GraphEdge> adjacentNodes;
    int totalAdjacent;
};
#endif