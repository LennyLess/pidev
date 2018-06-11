#include <stdio.h>

int getinput()
{
	char input[20];
	int num;
        while (1)
	{
		fgets(input, 20, stdin);
		if (sscanf(input, "%d", &num) == 1) break;
		else printf("Not valid. Enter again.\n");
	}
        return num;
}

char getname()
{
        char input[20];
        char name[20];

        fgets(input, 20, stdin);

        sscanf(input, "%s", name);

        return *name;
}


void instructions(int start)
{
        printf("Welcome to the Trivia Quiz App!\n");
	printf("You will be asked 5 questions and you will answer either true or false\n");
        printf("Enter the number '5' when you would like to start\n");
        start = getinput();
	while(1)
	  {
	    if (start == 5)
	      {
                printf("\nLet's begin!\n\n");
		break;
	      }
	    else
	      {
		printf("Not Valid \n");
		start = getinput();
	      }
	  }

}

int question1(int q1a)
{
	printf("China has the largest population\n");
	printf("1: True         2: False\n");
	q1a = getinput();
	return q1a;
}

int question2(int q2a)
{
	printf("Banging your head against the wall burns 170 calories\n");
	printf("1: True         2: False\n");
	q2a = getinput();
	return q2a;
}

int question3(int q3a)
{
	printf("When Hippos are upset, their sweat turns red\n");
	printf("1: True         2: False\n");
	q3a = getinput();
	return q3a;
}

int question4(int q4a)
{
	printf("Pteronophobia is fear of being tickled by sticks\n");
	printf("1: True         2: False\n");
	q4a = getinput();
	return q4a;
}

int question5(int q5a)
{
	printf("Walmart has a lower acceptance rate than Harvard\n");
	printf("1: True         2: False\n");
	q5a = getinput();
	return q5a;
}

int checkTrue(int score, int answer)
{
	if (answer == 1)
	{
		printf("Correct! +100 points!\n\n");
	        score = score + 100;
	}
	else
	{
		printf("Incorrect! Next question.\n\n");
	}
	return score;
}

int checkFalse(int score, int answer)
{
        if (answer == 2)
        {
                printf("Correct! +100 points!\n\n");
	        score = score + 100;
        }
        else
        {
                printf("Incorrect! Next question.\n\n");
        }
	return score;
}

void overall()
{
	int q1a = 0;
	int q2a = 0;
	int q3a = 0;
	int q4a = 0;
	int q5a = 0;
	int start = 0;
	int score = 0;
	int answer = 1;
	FILE *fp;


	instructions(start);

	answer = question1(q1a);
	score =	checkTrue(score, answer);

	answer = question2(q2a);
	score = checkFalse(score, answer);

	answer = question3(q3a);
	score = checkTrue(score, answer);

        answer = question4(q4a);
        score = checkFalse(score, answer);

        answer = question5(q5a);
        score = checkTrue(score, answer);

	printf("Congratulations! Your total score is %d points!\n", score);
	printf("What is your first initial? ");

	char b = getname();

	fp = fopen("/home/student1/website/student1/output.txt","a");

	fprintf(fp,"%c ", b);
	fprintf(fp, "%d \n", score);

	fclose(fp);
}
