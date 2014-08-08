#include "graphnode.h"

GraphNode::GraphNode(string nodeName)
{
	node = nodeName;
}

void GraphNode::addEdge(GraphNode adjNode)
{
    adjacentNodesTotal++;
    //adjacentNodes.push_back(GraphEdge());
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
