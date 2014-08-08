#include "graphnode.h"

GraphNode::GraphNode()
{
    //This default constructor is only here because we need it here to be compatable with unsortedmaps.
    node = "[default constructor]";
    nodeVisited = false;
}

GraphNode::GraphNode(string nodeName)
{
	node = nodeName;
    nodeVisited = false;
}

void GraphNode::addEdge(GraphNode adjNode)
{
    adjacentNodesTotal++;
    adjacentNodes.push_back(GraphEdge(adjNode));
}

void GraphNode::incrementInDegree()
{
    inDegree++;
}

void GraphNode::decrementInDegree()
{
    inDegree--;
}

int GraphNode::getInDegree()
{
    return inDegree;
}

bool getVisted()
{
    return nodeVisited;
}

void setVisted(bool status)
{
    nodeVisited = status;
}
