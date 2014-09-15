/****************************************************************
*				PROGRAM ONE:  PERSONALITY TEST					*
*				AUTHOR:       Emmanuel J Fillers				*
*				DATE:         2/7/2014							*
*	DESCRIPTION:  The program will ask the user 12 questions	*
*				to find out if he or she is an					*
*				1 - introvert / extrovert						*
*				2 - positive / negative							*
*				3 - silly / serious								*
*				4 - spontaneous / planner						*
****************************************************************/


#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{

	char runProgram='y';
	
	while (runProgram=='y'||runProgram=='Y')
	{
		//variable definitions
		int introvertExtrovert=0, sillySerious=0, positiveNegative=0, spontaneousPlanner=0;
		char answer, question1='y', question2='y', question3='y', question4='y', question5='y', question6='y';
		char question7='y', question8='y', question9='y', question10='y', question11='y', question12='y';
		
		//introduction and heading output
		cout<<string(50, '-')<<"\n	PERSONALITY TEST\n"<<string(50,'-');
		cout<<"\nPlease answer the following questions by typing in the letter\n";
		cout<<"that corresponds to your answer and pressing enter.\n\n";
		
		//question 1
		cout<<"When you go to a party you like to walk around and talk to everyone.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question1=='y'||question1=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				introvertExtrovert=introvertExtrovert-2;//update introvert/extrovert spectrum
				question1='n';//terminate question 1 loop
			}
			else if(answer=='b'||answer=='B')
			{
				introvertExtrovert=introvertExtrovert-1;//update introvert/extrovert spectrum
				question1='n';//terminate question 1 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question1='n';//terminate question 1 loop
			else if(answer=='d'||answer=='D')
			{
				introvertExtrovert=introvertExtrovert+1;//update introvert/extrovert spectrum
				question1='n';//terminate question 1 loop
			}
			else if(answer=='e'||answer=='E')
			{
				introvertExtrovert=introvertExtrovert+2;//update introvert/extrovert spectrum
				question1='n';//terminate question 1 loop
			}
			else//user input check leave question 1 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		

		cout<<"\n\n\nYou prefer to study in a large study group.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question2=='y'||question2=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				introvertExtrovert=introvertExtrovert-2;//update introvert/extrovert spectrum
				question2='n';//terminate question 2 loop
			}
			else if(answer=='b'||answer=='B')
			{
				introvertExtrovert=introvertExtrovert-1;//update introvert/extrovert spectrum
				question2='n';//terminate question 2 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question2='n';//terminate question 2 loop
			else if(answer=='d'||answer=='D')
			{
				introvertExtrovert=introvertExtrovert+1;//update introvert/extrovert spectrum
				question2='n';//terminate question 2 loop
			}
			else if(answer=='e'||answer=='E')
			{
				introvertExtrovert=introvertExtrovert+2;//update introvert/extrovert spectrum
				question2='n';//terminate question 2 loop
			}
			else//user input check leave question 2 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nYou like to meet new people.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question3=='y'||question3=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				introvertExtrovert=introvertExtrovert-2;//update introvert/extrovert spectrum
				question3='n';//terminate question 3 loop
			}
			else if(answer=='b'||answer=='B')
			{
				introvertExtrovert=introvertExtrovert-1;//update introvert/extrovert spectrum
				question3='n';//terminate question 3 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question3='n';//terminate question 3 loop
			else if(answer=='d'||answer=='D')
			{
				introvertExtrovert=introvertExtrovert+1;//update introvert/extrovert spectrum
				question3='n';//terminate question 3 loop
			}
			else if(answer=='e'||answer=='E')
			{
				introvertExtrovert=introvertExtrovert+2;//update introvert/extrovert spectrum
				question3='n';//terminate question 3 loop
			}
			else//user input check leave question 3 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nAfter taking a big test you feel like you have done badly.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question4=='y'||question4=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				positiveNegative=positiveNegative+2;//update introvert/extrovert spectrum
				question4='n';//terminate question 4 loop
			}
			else if(answer=='b'||answer=='B')
			{
				positiveNegative=positiveNegative+1;//update introvert/extrovert spectrum
				question4='n';//terminate question 4 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question4='n';//terminate question 4 loop
			else if(answer=='d'||answer=='D')
			{
				positiveNegative=positiveNegative-1;//update introvert/extrovert spectrum
				question4='n';//terminate question 4 loop
			}
			else if(answer=='e'||answer=='E')
			{
				positiveNegative=positiveNegative-2;//update introvert/extrovert spectrum
				question4='n';//terminate question 4 loop
			}
			else//user input check leave question 4 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nWhen you start a new project you anticipate\ngetting a good grade.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question5=='y'||question5=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				positiveNegative=positiveNegative-2;//update introvert/extrovert spectrum
				question5='n';//terminate question 5 loop
			}
			else if(answer=='b'||answer=='B')
			{
				positiveNegative=positiveNegative-1;//update introvert/extrovert spectrum
				question5='n';//terminate question 5 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question5='n';//terminate question 5 loop
			else if(answer=='d'||answer=='D')
			{
				positiveNegative=positiveNegative+1;//update introvert/extrovert spectrum
				question5='n';//terminate question 5 loop
			}
			else if(answer=='e'||answer=='E')
			{
				positiveNegative=positiveNegative+2;//update introvert/extrovert spectrum
				question5='n';//terminate question 5 loop
			}
			else//user input check leave question 5 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nYou like to start the day with a smile.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question6=='y'||question6=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				positiveNegative=positiveNegative-2;//update introvert/extrovert spectrum
				question6='n';//terminate question 6 loop
			}
			else if(answer=='b'||answer=='B')
			{
				positiveNegative=positiveNegative-1;//update introvert/extrovert spectrum
				question6='n';//terminate question 6 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question6='n';//terminate question 6 loop
			else if(answer=='d'||answer=='D')
			{
				positiveNegative=positiveNegative+1;//update introvert/extrovert spectrum
				question6='n';//terminate question 6 loop
			}
			else if(answer=='e'||answer=='E')
			{
				positiveNegative=positiveNegative+2;//update introvert/extrovert spectrum
				question6='n';//terminate question 6 loop
			}
			else//user input check leave question6 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nYou try to turn every sentence into a pun.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question7=='y'||question7=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				sillySerious=sillySerious-2;//update introvert/extrovert spectrum
				question7='n';//terminate question 7 loop
			}
			else if(answer=='b'||answer=='B')
			{
				sillySerious=sillySerious-1;//update introvert/extrovert spectrum
				question7='n';//terminate question 7 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question7='n';//terminate question 7 loop
			else if(answer=='d'||answer=='D')
			{
				sillySerious=sillySerious+1;//update introvert/extrovert spectrum
				question7='n';//terminate question 7 loop
			}
			else if(answer=='e'||answer=='E')
			{
				sillySerious=sillySerious+2;//update introvert/extrovert spectrum
				question7='n';//terminate question 7 loop
			}
			else//user input check leave question 7 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nYou dance to the music when I am wearing headphones.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always, even in public\n\n";
		while (question8=='y'||question8=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				sillySerious=sillySerious-2;//update introvert/extrovert spectrum
				question8='n';//terminate question 8 loop
			}
			else if(answer=='b'||answer=='B')
			{
				sillySerious=sillySerious-1;//update introvert/extrovert spectrum
				question8='n';//terminate question 8 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question8='n';//terminate question 8 loop
			else if(answer=='d'||answer=='D')
			{
				sillySerious=sillySerious+1;//update introvert/extrovert spectrum
				question8='n';//terminate question 8 loop
			}
			else if(answer=='e'||answer=='E')
			{
				sillySerious=sillySerious+2;//update introvert/extrovert spectrum
				question8='n';//terminate question 8 loop
			}
			else//user input check leave question 8 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nYou do not always understand jokes because I take them \ntoo literally.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question9=='y'||question9=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				sillySerious=sillySerious+2;//update introvert/extrovert spectrum
				question9='n';//terminate question 9 loop
			}
			else if(answer=='b'||answer=='B')
			{
				sillySerious=sillySerious+1;//update introvert/extrovert spectrum
				question9='n';//terminate question 9 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question9='n';//terminate question 9 loop
			else if(answer=='d'||answer=='D')
			{
				sillySerious=sillySerious-1;//update introvert/extrovert spectrum
				question9='n';//terminate question 9 loop
			}
			else if(answer=='e'||answer=='E')
			{
				sillySerious=sillySerious-2;//update introvert/extrovert spectrum
				question9='n';//terminate question 9 loop
			}
			else//user input check leave question 9 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"\n\n\nYou tend to go with the flow.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question10=='y'||question10=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				spontaneousPlanner=spontaneousPlanner-2;//update introvert/extrovert spectrum
				question10='n';//terminate question 10 loop
			}
			else if(answer=='b'||answer=='B')
			{
				spontaneousPlanner=spontaneousPlanner-1;//update introvert/extrovert spectrum
				question10='n';//terminate question 10 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question10='n';//terminate question 10 loop
			else if(answer=='d'||answer=='D')
			{
				spontaneousPlanner=spontaneousPlanner+1;//update introvert/extrovert spectrum
				question10='n';//terminate question 10 loop
			}
			else if(answer=='e'||answer=='E')
			{
				spontaneousPlanner=spontaneousPlanner+2;//update introvert/extrovert spectrum
				question10='n';//terminate question 10 loop
			}
			else//user input check leave question 10 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"You hate being late.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question11=='y'||question11=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				spontaneousPlanner=spontaneousPlanner+2;//update introvert/extrovert spectrum
				question11='n';//terminate question 11 loop
			}
			else if(answer=='b'||answer=='B')
			{
				spontaneousPlanner=spontaneousPlanner+1;//update introvert/extrovert spectrum
				question11='n';//terminate question 11 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question11='n';//terminate question 11 loop
			else if(answer=='d'||answer=='D')
			{
				spontaneousPlanner=spontaneousPlanner-1;//update introvert/extrovert spectrum
				question11='n';//terminate question 11 loop
			}
			else if(answer=='e'||answer=='E')
			{
				spontaneousPlanner=spontaneousPlanner-2;//update introvert/extrovert spectrum
				question11='n';//terminate question 11 loop
			}
			else//user input check leave question 11 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		
		
		cout<<"You dislike surprises that interfere with your schedule.\n";
		cout<<"a) Never\nb) Usually not\nc) Sometimes\nd) Usually\ne) Always\n\n";
		while (question12=='y'||question12=='Y')
		{
			cin>>answer;//get answer
			if (answer=='a'||answer=='A')
			{
				spontaneousPlanner=spontaneousPlanner-2;//update introvert/extrovert spectrum
				question12='n';//terminate question 12 loop
			}
			else if(answer=='b'||answer=='B')
			{
				spontaneousPlanner=spontaneousPlanner-1;//update introvert/extrovert spectrum
				question12='n';//terminate question 12 loop
			}
			else if(answer=='c'||answer=='C')//neutral answer no need for spectrum update
				question12='n';//terminate question 12 loop
			else if(answer=='d'||answer=='D')
			{
				spontaneousPlanner=spontaneousPlanner+1;//update introvert/extrovert spectrum
				question12='n';//terminate question 12 loop
			}
			else if(answer=='e'||answer=='E')
			{
				spontaneousPlanner=spontaneousPlanner+2;//update introvert/extrovert spectrum
				question12='n';//terminate question 12 loop
			}
			else//user input check leave question 12 variable as Y
				cout<<"Invalid Answer. Please try again.\n";
		}
		//results
		cout<<"\n"<<string(50, '-')<<"\n	RESULTS\n"<<string(50,'-');
		//introvert/extrovert results
		if (introvertExtrovert<0)
			cout<<"\nYou are an introvert.\n";
		else if(introvertExtrovert>0)
			cout<<"\nYou are an extrovert.\n";
		else if (introvertExtrovert==0)
			cout<<"\nYou are neither an introvert nor an extrovert.\n";
		//positive/negative results
		if (positiveNegative<0)
			cout<<"You are a negative person.\n";
		else if(positiveNegative>0)
			cout<<"You are a positive person.\n";
		else if (positiveNegative==0)
			cout<<"You are neither a positive nor a negative person.\n";
		//silly/serious results
		if (sillySerious<0)
			cout<<"You are a serious person.\n";
		else if(sillySerious>0)
			cout<<"You are a silly person.\n";
		else if (sillySerious==0)
			cout<<"You are neither a silly nor a serious person.\n";
		//spontaneous/planner results
		if (spontaneousPlanner<0)
			cout<<"You are a planner.\n";
		else if(spontaneousPlanner>0)
			cout<<"You are a spontaneous person.\n";
		else if (spontaneousPlanner==0)
			cout<<"You are neither spontaneous nor a planner.\n";
		cout<<string(50,'-');
		// close the while loop
		cout<<"\n\nDo you want to run the program again?(y/n)\n";
		cin>>runProgram;
		system("CLS");
	
	}

	return 0;
}