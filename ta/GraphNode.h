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

GraphNode::GraphNode(string nodeString)
{
    element = nodeString;
    inDegree = 0;
    isVisited = false;
    totalAdjacent = 0;
    //adjacentNodes;
    //adjacentNodes = new vector<GraphNode<Node_Type>>(2);
}

int GraphNode::getInDegree()
{
    return inDegree;
}

void GraphNode::incrementInDegree()
{
    inDegree += 1;
}

void GraphNode::decrementInDegree()
{
    inDegree -= 1;
}

bool GraphNode::getVisited()
{
    return isVisited;
}

void GraphNode::markVisited()
{
    isVisited = true;
}

void GraphNode::addAdjacentNode(GraphNode &adjacentNode)
{
    adjacentNodes.push_back(GraphEdge(adjacentNode));
}

#endif