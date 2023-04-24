#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define QUESTIONS 30
int main()
{
	printf("\n-----------------------Quiz Game---------------------------\n");
	printf("-----------------------Lets Begin--------------------------\n\n");
    char questions[QUESTIONS][100] = {"What is the capital of France?",
					  "What is the largest planet in the solar system?",
					  "What is the tallest mountain in the world?",
					  "What is the deepest ocean in the world?",
					  "Who painted the Mona Lisa?",
					  "Who wrote the Harry Potter series?",
					  "What is the smallest country in the world?",
					  "What is the highest waterfall in the world?",
					  "Who is the founder of Microsoft?",
					  "Who is the founder of Apple?",
					  "What is the largest country in the world by land area?",
					  "What is the currency of Japan?",
					  "What is the currency of Canada?",
					  "Who is the current president of the United States?",
					  "Who was the first person to walk on the moon?",
					  "What is the largest continent in the world?",
					  "Who painted the famous artwork 'Starry Night'?",
					  "What is the smallest continent in the world?",
					  "What is the largest ocean in the world?",
					  "What is the capital of Australia?",
					  "A MS-Word is an example of_____",
					  "What is the capital city of Brazil?",
					  "Which planet is known as the 'Red Planet'?",
					  "Who wrote the famous novel 'To Kill a Mockingbird'?",
					  "Which country has the largest population in the world?",
					  "What is the highest mountain in Africa?",
					  "Who is the founder of Tesla?",
					  "What is the chemical symbol for carbon?",
					  "Which river is the longest in the world?",
					  "What is the capital city of India?"};
    int answers[QUESTIONS] = {0,1,0,3,1,0,1,1,0,1,1,2,3,2,0,1,1,2,0,0,2,3,2,1,3,0,3,0,0,3};
    char choices[QUESTIONS][4][80] = {{"Paris", "London", "Madrid", "Rome"},
                                      {"Saturn", "Jupiter", "Uranus", "Neptune"},
                                      {"Mount Everest", "K2", "Makalu", "Cho Oyu"},
                                      {"Atlantic", "Indian", "Arctic", "Pacific"},
                                      {"Pablo Picasso", "Leonardo da Vinci", "Vincent van Gogh", "Claude Monet"},
                                      {"J.K. Rowling", "Stephen King", "George R.R. Martin", "Dan Brown"},
                                      {"Monaco", "Vatican City", "Nauru", "Tuvalu"},
                                      {"Niagara Falls", "Angel Falls", "Iguazu Falls", "Victoria Falls"},
                                      {"Bill Gates", "Steve Jobs", "Mark Zuckerberg", "Jeff Bezos"},
                                      {"Bill Gates", "Steve Jobs", "Mark Zuckerberg", "Jeff Bezos"},
                                      {"China", "Russia", "Canada", "United States"},
                                      {"Dollar", "Euro", "Yen", "Pound"},
                                      {"Dollar", "Euro", "Yen", "Canadian Dollar"},
                                      {"Donald Trump", "Barack Obama", "Joe Biden", "George W. Bush"},
                                      {"Neil Armstrong", "Buzz Aldrin", "Yuri Gagarin", "Alan Shepard"},
                                      {"Africa", "Asia", "Europe", "North America"},
                                      {"Pablo Picasso", "Vincent van Gogh", "Claude Monet", "Edvard Munch"},
                                      {"Antarctica", "Europe", "Australia", "South America"},
                                      {"Pacific", "Atlantic", "Indian", "Arctic"},
                                      {"Canberra", "Melbourne", "Sydney", "Brisbane"},
				      {"An operating system","A processing software","Application software","An input device"},
				      {"Buenos Aires","Santiago","Rio de Janeiro","Brasilia"},
				      {"Venus","Jupiter","Mars","Pluto"},
				      {"Ernest Hemingway","Harper Lee","J.D. Salinger","F. Scott Fitzgerald"},
				      {"Nepal","India","United States","China"},
				      {"Kilimanjaro","Everest","Mont Blanc","Aconcagua"},
				      {"Jeff Bezos","Mark Zuckerberg","Bill Gates","Elon Musk"},
				      {"C","Co","Ca","Cr"},
				      {"Nile","Amazon","Yangtze","Mississippi"},
				      {"Mumbai","Kolkata","Chennai","New Delhi"}};
    int i,j,num,answer,used[20],score=0;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        do 
		{
            num= rand() % 30;
        } while (used[num]); 
        used[num] = 1;
    	printf("Question no. %d.%s\n",i+1,questions[num]);
    	printf("-----------------------------------------------------------\n");
    	for(j=0;j<4;j++)
		{
			printf("%d. %s\n",j+1,choices[num][j]);	
		}
		printf("-----------------------------------------------------------\n");
		main:
		{
			scanf("%d",&answer);
			printf("-------------------------\n");
			if(answer==(answers[num]+1))
			{
				printf("Correct..\n");
				score=score+1;
				printf("-------------------------\n");
				printf("-----------------------------------------------------------\n");
			}
			else if(answer>4 || answer<1)
			{
				printf("Invalid option.....\nEnter again...\n");
				printf("-------------------------\n");
				goto main;
			}
			else
			{
				printf("Incorrect..\n");
				printf("-------------------------\n");
				printf("-----------------------------------------------------------\n");
			}
		}
	}
	printf("-----------------------------------------------------------\n");
	printf("You scored %d out of 10.\n",score);
	printf("Thank you for playing with us.\n");
	printf("-----------------------------------------------------------\n");
	return 0;	
}
