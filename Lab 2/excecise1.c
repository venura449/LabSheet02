#include <stdio.h>
int main()
{
	// this program takes two scores and display the overall marks for the course
	int examScore, homeworkScore;
	float scoreH, scoreE, overallScore;
	
	printf("Please enter the marks earned for the exam : "); 
	scanf("%d", &examScore);
	printf("Please enter the marks earned for homework: ");
	scanf("%d", &homeworkScore);
	
	scoreE = examScore * 50 / 100.0;
	scoreH = homeworkScore * 50 / 100.0; 
	
	overallScore = (scoreH + scoreE);
	printf( "Overall course score is %.2f", overallScore );
	
	return 0;
 }
