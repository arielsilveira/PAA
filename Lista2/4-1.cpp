#include <bits/stdc++.h>

using namespace std;

void bubble(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
}

void selectionSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int index = i;
        for (int j = index; j < v.size(); j++)
        {
            if (v[j] < v[index])
            {
                index = j;
            }
        }

        swap(v[i], v[index]);
    }
}

int main(int argc, const char *argv[])
{

    int size;

    cin >> size;
    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        int j;
        cin >> j;
        v.push_back(j);
    }

    cout << "Vetor desordenado: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    selectionSort(v);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}