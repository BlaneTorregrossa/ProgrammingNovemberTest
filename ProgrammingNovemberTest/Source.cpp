#include <iostream>
#include "Header.h"


//Problem 1: Create a function that takes in 3 numbers and returns the sum of those numbers multiplied by 5 (This function should work for both integer and floating point values).
float sumMult()
{
	float numa = 5, numb = 1.5f, numc = 3; // Three Variables of type float of values 5, 1.5, and 3.
	float Sum = numa + numb + numc;	// Variable of type float that is assigned the value of the sum of variables numa, nub, and numc.
	float SumMult = Sum * 5;	// Variable of type float that is assigned the value of varible Sum multiplied by 5.
	return SumMult;	// Returning Varible SumMult.
}

// Problem 2: Write a function that takes two parameters (a pointer to an array and the number of elements) then populate the array with all even numbers.
void evenNums(int * num[], int size)
{
	size = 0;
	for (int i = 0; i < 11; i++)
	{
		if (i % 2 == 0)
		{

		}
	}
}

//Problem 3: Create a function that takes in a character array and reverses the string stored inside of it.
void stringReverse()
{
	char name[] = "kroWdlouhSI"; //A char array with a string of "Hello" contained.
	int size = 11; // variable of type int with a value of 5.
	for (int i = 0; i < size / 2; i++) // A for loop that increments variable i of type int if it's value is less than half of variable size's value.
	{
		char temp = name[i]; // Assigns interger temp of type int the value of the array at the index of i
		name[i] = name[(size - i) - 1]; // Assigns the value of i the value of what was the array's size minus the value of i minus 1.
		name[(size - i) - 1] = temp; // Assigns value of what was the array's size minus the value of i minus 1 to equal what the variable temp's value was.
	}
}




//Problem 5: Create a function that takes in two arguments, One that points to an array of integers and one for the size of the array. 
//This function will return the value in the array that appears the most times
void highestValue()
{

}


//Problem 6: Create a function that swaps the value of two integers without the use of a temporary variable.
void integerSwap()
{
	int numa = 4, numb = 1;
}


//Problem 7: Create an array of strings then sort each string in alpabetical order.
void ABCStrings()
{

}


int main()
{
	sumMult();
	evenNums(0, 11);
	stringReverse();
	highestValue();
	integerSwap();
	ABCStrings();
}