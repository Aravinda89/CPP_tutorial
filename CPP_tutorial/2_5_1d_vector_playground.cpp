//TODO: Use this as a playground to practice with vectors


//TODO:
// Fill out your program's header. The header should contain any necessary
// include statements and also function declarations
#include <iostream>
#include <vector>

using namespace std;

//TODO:
// Write your main program. Remember that all C++ programs need
// a main function. The most important part of your program goes
// inside the main function. 

vector<float> substract_vectors(vector<float> vector_1, vector<float> vector_2);
vector<float> multiply_vectors(vector<float> vector_1, vector<float> vector_2);

int main(){
	vector<float> vector_1 (3);
	vector_1[0] = 5;
	vector_1[1] = 10;
	vector_1[2] = 27;

	vector<float> vector_2 (3);
	vector_2[0] = 3;
	vector_2[1] = 17;
	vector_2[2] = 12;

	vector<float> sub1 (vector_1.size());
    sub1 = substract_vectors(vector_1, vector_2);

    cout << "Substraction" << endl;
	for (int i = 0; i < sub1.size(); ++i)
	{
        cout<< sub1[i]<< endl;
	}

	vector<float> mul (vector_1.size());
	mul = multiply_vectors(vector_1, vector_2);
    
    cout << "\n";
    cout << "Multification" << endl;
	for (int i = 0; i <vector_1.size(); ++i)
	{
		cout<< mul[i] << endl;
	}


	return 0;
}

vector<float> substract_vectors(vector<float> vector_1, vector<float> vector_2){
	vector<float> substraction (vector_1.size());

	for (int i = 0; i < vector_1.size(); ++i)
	{
		substraction[i] = vector_1[i] - vector_2[i];
	}
    return substraction;
}

vector<float> multiply_vectors(vector<float> vector_1, vector<float> vector_2){

	vector<float> mutification (vector_1.size());

	for (int i = 0; i < vector_1.size(); ++i)
	{
		mutification[i] = vector_1[i] * vector_2[i];
	}
	return mutification;
}
