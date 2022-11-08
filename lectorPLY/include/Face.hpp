#ifndef FACE_H
#define FACE_H
#pragma once
	
#include <vector>

using namespace std;

class Face  
{
	private:
	    vector<unsigned int> vertex_ind;

	public:
		Face(vector<unsigned int> vertex_ind);
		void print();

};
#endif