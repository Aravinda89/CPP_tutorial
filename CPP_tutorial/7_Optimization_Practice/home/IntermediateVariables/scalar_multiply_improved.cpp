#include "scalar_multiply_improved.hpp"
using namespace std;

vector< vector<int> > scalar_multiply_improved(vector< vector<int> > matrix, int scalar) {
    
  	// OPTIMIZATION: Instead of creating a new variable
    // called resultmatrix, update the input matrix directly
    
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
    return matrix;
}
