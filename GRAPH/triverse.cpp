#include <bits/stdc++.h>
using namespace std;
class graph
{
private:
    unordered_map<int, list<int>> adjList;

public:
    void addVertex(int v)
    {
        adjList[v] = list<int>();
    }

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
    }
    void printgraph()
    {
        for (auto &pair : adjList)
        {
            cout << pair.first << "->";

            for (int neighbour : pair.second)
            {
                cout << neighbour << "-->";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g;
    int vertices;
    int edges;
    cout << "enter no of  the vertices ";
    cin >> vertices;

    for (int i = 0; i < vertices; i++)
    {
        g.addVertex(i);
    }

    cout << "enter the numbers of edges ";
    cin >> edges;

    cout << "enter the edges ";
    for (int i = 0; i < edges; i++)
    {
        int u;
        int v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    cout << "adjency representation of the graph ";
    g.printgraph();
}
