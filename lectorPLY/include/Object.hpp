#ifndef ONJECT_H
#define OBJECT_H
#pragma once

#include <string>
#include <vector>
#include "Vertex.hpp"
#include "Face.hpp"

using namespace std;

class Object 
{
    private:
        vector<Face> faces;
        vector<Vertex> vertices;
        vector<string> splitSingle (const string &s, char delim);
    public:
        Object(string file);
        void print();
            
};
#endif