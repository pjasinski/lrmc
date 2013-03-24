#include "lrmc.h"
int main(void)
{
  char fname[255];
  char lname[255];
  char bill[255];
  int school;
  int committee;

  FILE* csv = fopen("./lrmc.csv", "w");
  int a = 0;
    if (csv != NULL)
      {
	  while (a = 0)
	    {
	      printf("Enter first name: ");
	      scanf("%s", fname);
	      fprintf(csv, "%s,", fname);
      
	      printf("Enter last name: ");
	      scanf("%s", lname);
	      fprintf(csv, "%s,", lname);
      
	      printf("Enter bill title: ");
	      scanf("%s", bill);
	      fprintf(csv, "%s,", bill);
      
	      printf("Enter committe number: ");
	      scanf("%d", &committee);
	      findcommittee(csv, committee);

	      printf("Enter school number: ");
	      scanf("%d", &school);
	      findschool(csv, school);

	      printf("Done?");
	      scanf("%d", &a);
	  }
      }
    else{
      printf("Couldn't open the file.");
    }
}


