#include "graph.h"

Graph::Graph()
{
}

GraphNode Graph::createReturnNode(string nodeName)
{
    if (nodeMap.find(nodeName) == nodeMap.end())
    {
        nodeMap[nodeName] = GraphNode(nodeName);
    }
    return nodeMap[nodeName];
}

void Graph::addNode(string nodeName)
{
    createReturnNode(nodeName);
}

void Graph::linkNodes(string nodeSource, string nodeDest)
{
    createReturnNode(nodeSource).addEdge(createReturnNode(nodeDest));
}
