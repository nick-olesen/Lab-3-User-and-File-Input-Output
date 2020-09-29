//***************************************
//***************************************
/*
* Nicholas Olesen
* C++ 2020
* Due: September 28th 2020
* Lab 3 User and File I/O
* Writng an interactive C++ program that computes and outputs the mean and population standard deviation
of a set of four integers inputted by a file called inMeanStd.dat
*/
//****************************************
//****************************************

#include <iostream>
#include <fstream>  //This is the file iput/output 
#include <cmath>  //This is used for the power function in calculus standard deviation


using namespace std; 

float meanfunc(int data1, int data2, int data3, int data4); // This is the funciton prototype of the mean function 
float stdfunc(int data1, int data2, int data3, int data4, float mean); // This is the funciton prototype of the Population standard deviation function 





int main()
{
	int data1;
	int data2;
	int data3;
	int data4;
	string inputFileName = "C:/Users/noles/Documents/C++ Labs/Lab 3 User and File Input Output/inMeanStd.dat";
	string outputFileName = "C:/Users/noles/Documents/C++ Labs/Lab 3 User and File Input Output/OutMeanStd.dat";
	ifstream inFile; 
	ofstream outFile; 


	inFile.open(inputFileName); //Assumes input file is in the project folder
	outFile.open(outputFileName); // Places output file in the project folder 

	 inFile >> data1 >> data2 >> data3 >> data4; 
	  

	 cout << "This is the mean of the numbers from the input file: " << meanfunc(data1, data2, data3, data4)<< endl;
	 cout << "this is the standard deviation of the numbers from the input file: " << stdfunc(data1, data2, data3, data4, meanfunc(data1, data2, data3, data4)) << endl << endl;

	 outFile << "This is the mean of the numbers from the input file: " << meanfunc(data1, data2, data3, data4) << endl;
	 outFile << "this is the standard deviation of the numbers from the input file: " << stdfunc(data1, data2, data3, data4, meanfunc(data1, data2, data3, data4)) << endl << endl;

	 cout << "Input four integers. Make sure to hit enter inbetween each integer: " << endl;

	 cin >> data1 >> data2 >> data3 >> data4;

	 cout << "This is your mean: " << meanfunc(data1, data2, data3, data4) << endl;
	 cout << "This is your Standard Deviation: " << stdfunc(data1, data2, data3, data4, meanfunc(data1, data2, data3, data4));

     outFile << "This is your mean: " <<meanfunc(data1, data2, data3, data4) << endl;
	 outFile << "This is your Standard Deviation: " << stdfunc(data1, data2, data3, data4, meanfunc(data1, data2, data3, data4));






}

float meanfunc(int data1, int data2, int data3, int data4) // Taking 4 data points from the code, and then inputting them into the below function to calculate the mean
{
	return float(data1 + data2 + data3 + data4) / float(4);
}

float stdfunc(int data1, int data2, int data3, int data4, float mean) 
{
	return (sqrt((pow((float(data1) - mean), 2)+ pow((float(data2) - mean), 2)+ pow((float(data3) - mean), 2)+ pow((float(data4) - mean), 2))/ float(4))); // Taking 4 data points from the code and then using the mean to find the population standard deviation

}


