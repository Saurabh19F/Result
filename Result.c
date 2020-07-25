#include <stdio.h>
int main(void)
{
int num;
printf("Enter your mark to find your grade\n");
scanf("%d",&num);
printf("You entered %d", num);
	if(num >= 85){
	printf("\nYou got Grade A in Exam");
		}
	else if ( num >=70){
		printf("\nYou got Grade B in Exam");
		}
	else if ( num >=55){
		printf("\nYou got Grade C in Exam");
		}
           else if ( num >=40){
		printf("\nYou got Grade D in Exam");
		}
	else if ( num < 40){
		printf("\nYou got Grade F in Exam");
		}
		printf("\nHope you are satisfy with your Grades!!");
getch();
}
