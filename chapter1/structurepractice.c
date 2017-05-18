#include <stdio.h>

int main(int argc, char *argv[]) 
{
	struct teams {
		char name[30];
		int goalsScored;
		int goalsConceded;
		char topScorer[30];
	};
	union info {
		struct teams st;
	};
	union info set;

	printf("\nEnter Team Name: ");
	scanf("%s", set.st.name);
   	printf("\nEnter Goals Scored: ");
   	scanf("%d", &set.st.goalsScored);
	printf("\nEnter Goals Conceded: ");
   	scanf("%d", &set.st.goalsConceded);
   	printf("\nEnter Top Scorer: ");
   	scanf("%s", set.st.topScorer);

   	printf("\nName : %s", set.st.name);
   	printf("\nGoals Scored: %d", set.st.goalsScored);
   	printf("\nGoals Conceded: %d", set.st.goalsConceded);
   	printf("\nTop Scorer : %s\n", set.st.topScorer);
}
