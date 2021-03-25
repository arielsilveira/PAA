#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int v)
{

    visited[v] = true;
    for (int i = 0; i < graph[v].size(); i++)
    {
        int pos = graph[v][i];
        if (visited[pos])
        {
            return dfs(i);
        }
    }
}

bool SequentialSearch2(int n, vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            return true;
        }
    }

    return false;
}

bool BruteForceStringMatch(string text, string t)
{
    for (int i = 0; i < text.size(); i++)
    {
        int pos = i;
        for (int j = 0; j < t.size(); j++)
        {
            if (text[pos] == t[j])
            {
                pos++;
            }
            else
            {
                pos = 0;
                break;
            }
        }

        if (pos)
        {
            return true;
        }
    }

    return false;
}

int main(int argc, char const *argv[])
{

    string a = "kjashdkjahsdkahjskdah";
    string b = "kjahsd";

    bool val = BruteForceStringMatch(a, b);

    if (val)
    {
        cout << "oi" << endl;
    }
    else
    {
        cout << "tchau" << endl;
    }

    return 0;
}
