/*
#include <iostream>\
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Coordinates {
    int x;
    int y;
public:
    Coordinates(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
};

Coordinates s_map (vector<vector<char> > in, char target)
{
    for(int i = 0; i < in.size(); ++i)
    {
        for(int j = 0; i < in[i].size(); ++i)
        {
            if (in[i][j] == target)
            {
                Coordinates out = new Coordinates(j, i);
                return out;
            }
        }
    }
}

queue<Coordinates> s_neighbours (vector<vector<char> > in,
                                 vector<vector<bool> > visited,
                                 Coordinates pos)
{
    queue<Coordinates> out;
    if (in[pos.x + 1][pos.y + 1] == '.' && !visited[pos.x + 1][pos.y + 1])
        out.push(Coordinates(pos.x + 1, pos.y + 1));
    if (in[pos.x - 1][pos.y + 1] == '.' && !visited[pos.x - 1][pos.y + 1])
        out.push(Coordinates(pos.x - 1, pos.y + 1));
    if (in[pos.x + 1][pos.y - 1] == '.' && !visited[pos.x + 1][pos.y - 1])
        out.push(Coordinates(pos.x + 1, pos.y - 1));
    if (in[pos.x - 1][pos.y - 1] == '.' && !visited[pos.x - 1][pos.y - 1])
        out.push(Coordinates(pos.x - 1, pos.y - 1));
    return out;
}

Coordinates c_neighbours (vector<vector<char> > in, Coordinates pos)
{
    if (in[pos.x + 1][pos.y + 1] == 'X')
        return Coordinates(pos.x + 1, pos.y + 1);
    if (in[pos.x - 1][pos.y + 1] == 'X')
        return Coordinates(pos.x - 1, pos.y + 1);
    if (in[pos.x + 1][pos.y - 1] == 'X')
        return Coordinates(pos.x + 1, pos.y - 1);
    if (in[pos.x - 1][pos.y - 1] == 'X')
        return Coordinates(pos.x - 1, pos.y - 1);
    return Coordinates(-1, -1)
}


int main()
{
    int size;
    cin >> size;


    // Initaliser of base map
    vector<vector<char> > map_in;
    map_in.resize(size, vector<char>(size, ' '));
    vector<vector<bool> > visited;
    visited.resize(size, vector<bool>(size, false));

    // Input lines to array
    for(int i = 0; i < size; ++i)
    {
        string buffer;
        getline(cin, buffer);
        for(int j = 0; j < size; ++j)
        {
            map_in[i][j] = buffer[j];
        }
    }
    */
/*
    I wasn't able to figure out how to create multiple queue instances for the
    different paths. I have finished the input section, but not the output
    formatting. The code is currently non-functional, and I will resubmit if I
    get it working.
*/
/*
    // Find positions of ball and ending spot
    Coordinates ball = s_map(map_in, '@');

    if (c_neighbours(map_in, ball) != Coordinates(-1, -1))
    {

    }
    // Search through all points, pushing unseen possible paths to a queue
    queue<Coordinates> s_queue;
    s_queue.push(ball);

    while

    return 0;
}

*/

#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int V; // # of vertices

    list<int> *adj; // Pointer to an array containing adjacency lists
public:
    Graph(int V); // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    // Mark all the verticies as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Vreate a queue for BFS
    list <int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i will be used to get all adjacent
    // verticies of a vertex
    list <int>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex s. If a adjacent has not been
        //visited, then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

void create_graph

int main()
{
    // Create a graph given in the above diagram
    int startVertex = 2;
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(3, 0);

    cout << "Following is Breadth First Traversal "
            << "(starting from vertex " << startVertex << ") \n";
    g.BFS(startVertex);

    return 0;
}
