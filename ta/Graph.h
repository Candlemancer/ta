#include <unordered_map>
#include "GraphNode.h"
#include "GraphEdge.h"

class Graph
{
public:
	Graph();
	//void put();
private:
	unordered_map<string, GraphNode> nodeMap;
};