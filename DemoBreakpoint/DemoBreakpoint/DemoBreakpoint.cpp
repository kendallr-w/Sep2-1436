#include <iostream>
#include <fstream> //f strands for file
//what is a stream?

using namespace std;

int main()
{
	cout << "Hello World!\n";
	
	ofstream outputFile("outputFileName.txt"); //relative filepath

	//while (true) //danger, Will Robinson!
	{
		outputFile << "a";
	}

}