#include<iostream>
#include"quickunion.h"
using namespace std;

bool print_array(int* input_array)
{

	std::cout<<endl;
	for(int i = 0;i<MAX_ELEMENTS;++i)
	{
		std::cout<<input_array[i]<<"\t";
	}

	std::cout<<endl;
}

bool initialize_data(int* input_array)
{
	input_array[0] = 19;
	input_array[1] = 12;
	input_array[2] = 19;
	input_array[3] = 19;
	input_array[4] = 19;
	input_array[5] = 19;
	input_array[6] = 19;
	input_array[7] = 19;
	input_array[8] = 19;
	input_array[9] = 19;
	input_array[10] = 19;
	input_array[11] = 19;
	input_array[12] = 19;
	input_array[13] = 19;
	input_array[14] = 19;
}


int main()
{
	int array[MAX_ELEMENTS];
	initialize_data(array);
	print_array(array);

	return 0;
}
