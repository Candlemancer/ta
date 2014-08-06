#include <unordered_map>
#include "GraphNode.h"
#include "GraphEdge.h"

template <class Graph_Type> class Graph
{
public:
	Graph();
	void put();
private:
	unordered_map<string, GraphNode<Graph_Type>> nodeMap;
};