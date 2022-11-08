#include <iostream>
#include <vector>
#include "../include/Face.hpp"

Face::Face(vector<unsigned int> vertex_ind)
{
    this->vertex_ind = vertex_ind;
}

void Face::print()
{
    for (int i = 0; i < vertex_ind.size(); i++)
    {
        cout << vertex_ind[i] << " ";
    }
    cout << endl;
}
