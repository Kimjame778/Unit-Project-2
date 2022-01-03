#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function overloading WOW FACTOR!!!
int isCorrect(float ans, float correctAns)
{

	if (ans == correctAns)
	{
		printf("\033[3;42;30mcorrect!\033[0m");
		return 10;
	}
	else
	{
		printf("\x1B[31mIncorrect!\033[0m");
		return 0;
	}

}

// Function overloading WOW FACTOR!!!
int isCorrect(string ans, string correctAns)
{

	if (ans == correctAns)
	{
		printf("\033[3;42;30mcorrect!\033[0m");
		return 10;
	}
	else
	{
		printf("\x1B[31mIncorrect!\033[0m");
		return 0;
	}

}

// distictive answer as well as char
int grade(char ans, char correctAns)
{

	if (ans == correctAns)
	{
		printf("\033[3;42;30mYou got it RIGHT!\033[0m");
		return 10;
	}
	else if (ans == 'b')
	{
		printf("\x1B[31mYOU SHOULD TRY AGAIN\033[0m");
		return 0;
	}
	else if (ans == 'a')
	{
		printf("\x1B[31mHMMMMMMMMMMM?!?!\033[0m");
		return 0;
	}
	return 0;
}

char gradeByLetter(int grade)
{

	if (grade > 100 || grade < 0)
	{
		return 'E';
	}
	else if (grade == 100)
	{
		return 'S';
	}
	else if (grade >= 80)
	{
		return 'A';
	}
	else if (grade >= 70)
	{
		return 'B';
	}
	else if (grade >= 60)
	{
		return 'C';
	}
	else if (grade >= 50)
	{
		return 'D';
	}
	else if (grade >= 0)
	{
		return 'F';
	}
}

string questOne(string asnOne)
{
	//converting the answer to lowercase making the cin accept all answers in lower and uppercase
	transform(asnOne.begin(), asnOne.end(), asnOne.begin(), ::tolower);
	return asnOne;
}



string questFive(string asnFive)
{
	//converting the answer to lowercase making the cin accept all answers in lower and uppercase
	transform(asnFive.begin(), asnFive.end(), asnFive.begin(), ::tolower);
	return asnFive;
}



int main()
{
	//score 
	int score;
	score = 0;


	string numOne, numTwo, numFive, numSix;
	int numThree;
	char numFour, numSeven, numEight, numNine, numTen;



	//Question 1

	cout << "1.";
	cout << "What is my name? (type the correct answer.)\n\n" << endl;
	cout << "1)Jarred" << endl;
	cout << "2)Dylan" << endl;
	cout << "3)James" << endl;


	cin >> numOne;

	numOne = questOne(numOne);

	score += isCorrect(numOne, "james");


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100" << endl;

	system("pause");
	system("cls");

	//Question 2

	cout << "2.";
	cout << "WHat is 10 in binary?\n\n" << endl;
	cout << "1)1234" << endl;
	cout << "2)1010" << endl;
	cout << "3)0101\n\n" << endl;


	cin >> numTwo;


	questOne(numTwo);

	score += isCorrect(numTwo, "1010");


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100" << endl;

	system("pause");
	system("cls");

	//Question 3

	cout << "3.";
	cout << "What is 1 + 1?\n" << endl;
	cout << "1)1" << endl;
	cout << "2)2" << endl;
	cout << "3)3" << endl;


	cin >> numThree;

	score += isCorrect(numThree, 2);


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100" << endl;


	system("pause");
	system("cls");

	//Question 4

	cout << "4.";
	cout << "What is a Color?\n" << endl;
	cout << "a)Sky" << endl;
	cout << "b)Cube" << endl;
	cout << "c)Purple" << endl;


	cin >> numFour;

	score += grade(numFour, 'c');


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100" << endl;

	system("pause");
	system("cls");

	//Question 5

	cout << "5.";
	cout << "Are you Smart" << endl;
	cout << "True or False\n\n" << endl;


	cin >> numFive;

	numFive = questFive(numFive);

	score += isCorrect(numFive, "false");


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100";

	system("pause");
	system("cls");

	//Question 6

	cout << "6.";
	cout << "What year are we in?" << endl;
	cout << "a)2012" << endl;
	cout << "b)2010" << endl;
	cout << "c)2021" << endl;


	cin >> numSix;

	score += isCorrect(numSix, "2021");


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100";

	system("pause");
	system("cls");

	//Question 7

	cout << "7.";
	cout << "Where do we live?" << endl;
	cout << "a)Mexico" << endl;
	cout << "b)Here" << endl;
	cout << "c)There" << endl;


	cin >> numSeven;

	score += isCorrect(numSeven, 'c');


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100";

	system("pause");
	system("cls");

	//Question 8

	cout << "8.";
	cout << "What is my favourite thing?" << endl;
	cout << "a)thing" << endl;
	cout << "b)thang" << endl;
	cout << "c)thoong" << endl;


	cin >> numEight;

	score += isCorrect(numEight, 'a');


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100";

	system("pause");
	system("cls");

	//Question 9

	cout << "9.";
	cout << "What is my favourite water?" << endl;
	cout << "a)Salt Water" << endl;
	cout << "b)Lemon Water" << endl;
	cout << "c)Water" << endl;


	cin >> numNine;

	score += isCorrect(numNine, 'b');


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100";

	system("pause");
	system("cls");

	//Question 10

	cout << "10.";
	cout << "What is my favourite water?" << endl;
	cout << "a)Salt Water" << endl;
	cout << "b)Lemon Water" << endl;
	cout << "c)Water" << endl;


	cin >> numNine;

	score += isCorrect(numNine, 'c');


	//Score for Correct answers
	cout << "Your Total score is " << score << "/100";

	system("pause");
	system("cls");

	cout << "Your Total score is " << score << "/100" << endl;
	cout << "Your Grade By Letter Is " << gradeByLetter(score);
}