//
//  3_5_matrix_mul.cpp
//  CPP_tutorial
//
//  Created by Aravinda Gayan on 11/24/19.
//  Copyright © 2019 Aravinda Gayan. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// vector< vector <float> > multipy(vector< vector <float> > mat1, vector< vector <float> >mat2);
void print_vec(vector< vector <float> >mat);

int main(){

	vector< vector <float> > vec_1 (4, vector <float> (3, 2));
	vector< vector <float> > vec_2 (3, vector <float> (3, 3));
	print_vec(vec_1);
	cout << "\n";
	print_vec(vec_2);

	return 0;
}

vector< vector <float> > multipy(vector< vector <float> > mat1, vector< vector <float> >mat2){
	if (mat1.size() == mat2[0].size()){
		

	}else{
		cout<< " Matrices doesn't match! "<<endl;
	}
}

void print_vec(vector< vector <float> >mat){
    for(int row=0; row<mat.size(); row++){
    	for(int col=0; col<mat[row].size(); col++){
    		cout << mat[row][col]<< " ";
    	}
    cout << "\n";
    }
}
