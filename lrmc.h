#include <stdio.h>
#include <stdlib.h>
void findschool(FILE* csv, int s)
{
  switch(s)
    {
    case 1:
      fprintf(csv, "Loch Raven High School");
      break;
    case 2:
      fprintf(csv, "Dundulk High School");
      break;
    case 3:
      fprintf(csv, "Western Technical High School");
      break;
    case 4:
      fprintf(csv, "Lansdowne High School");
      break;
    case 5:
      fprintf(csv, "Woodlawn High School");
      break;
    case 6:
      fprintf(csv, "Overlea High School");
      break;
    case 7:
      fprintf(csv, "Kenwood High School");
      break;
    case 8:
      fprintf(csv, "Eastern Technical High School");
      break;
    case 9:
      fprintf(csv, "Franklin High School");
      break;
    case 10:
      fprintf(csv, "Owings Mills High School");
      break;
    case 11:
      fprintf(csv, "Randallstown High School");
      break;
    case 12:
      fprintf(csv, "Pikesville High School");
      break;
    case 13:
      fprintf(csv, "Towson High School");
      break;
    case 14:
      fprintf(csv, "Hereford High School");
      break;
    }
}

void findcommittee(FILE* csv, int c)
{
  switch(c)
    {
    case 1:
      fprintf(csv, "House Committee on the Judiciary,");
      break;
    case 2:
      fprintf(csv, "House Committee on Forigen Affairs,");
      break;
    case 3:
      fprintf(csv, "House Committee on Education and the Workforce,");
      break;
    case 4:
      fprintf(csv, "House Committee on Homeland Security,");
      break;
    case 5:
      fprintf(csv, "House Committee on Science Space and Technology,");
      break;
    case 6:
      fprintf(csv, "Senate Committee on the Judiciary,");
      break;
    case 7:
      fprintf(csv, "Senate Committee of Foriegn Relations,");
      break;
    case 8:
      fprintf(csv, "Senate Committee on the Enviornment and Public Works,");
      break;
    case 9:
      fprintf(csv, "Senate Committee on Health Education Labor and Pensions,");
      break;
    case 10:
      fprintf(csv, "Senate Committee of Science Commerce and Technology,");
      break;
    }
}

