#pragma once

/*Problem 4: Create a Cat class with a private char variable called m_name. Then create a public constructor that has no arguments. You will need one more function of return type void called NameMe,
this takes in a character as an argument and needs to assign this character to the value of m_name.
Once you have your class created, Create an array of type Cat of size 26.
Then populate the names of these cats each with a different letter of the alphabet starting with capital A and every other cats name should be a lowercase letter (A,b,C,d,E,f,G,...).
You cannot use a for loop and you cannot print to the console.
Note: A is 32 lower than a.
A = 65, Z = 87; a = 97; z = 122 */
class Cat
{

private:
	char m_name;


public:
	Cat() {};
	void NameMe()
	{
		char name = m_name;
		Cat catArray[26];
		int i = 65;
		int j = 1;
		while (j < 26)
		{
			if (i < 97 && i > 65)
			{
				catArray[j]
			}
			if (i > 97)
			{

			}
		}

	}


};
