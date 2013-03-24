#include <stdio.h>
#include <stdlib.h>
void findschool(FILE* csv, int s)
{
  switch(s)
    {
    case 1:
      fprintf(csv, "Loch Raven High School");
    case 2:
      fprintf(csv, "Towson High School");
    case 3:
      fprintf(csv, "Perry Hall High School");
    case 4:
      fprintf(csv, "Kenwood High School");
    case 5:
      fprintf(csv, "Eastern Technical High School");
    case 6:
      fprintf(csv, "Western Technical High School");
    case 7:
      fprintf(csv, "Pikesville High School");
    case 8:
      fprintf(csv, "Lansdowne High School");
    case 9:
      fprintf(csv, "Randallstown High School");
    case 10:
      fprintf(csv, "Milford Mill High School");
    case 11:
      fprintf(csv, "Dundalk High School");
    case 12:
      fprintf(csv, "Catonsville High School");
    case 13:
      fprintf(csv, "Franklin High School");
    }
}

void findcommittee(FILE* csv, int c)
{
  switch(c)
    {
    case 1: 
      fprintf(csv, "House Committee of Urban Affairs and Public Works,");
    case 2:
      fprintf(csv, "House Committee of the Judiciary,");
    case 3:
      fprintf(csv, "House Committee of Forigen Relations,");
    case 4:
      fprintf(csv, "House Committee of the Armed Forces,");
    case 5:
      fprintf(csv, "House Committee of Science and Techonology,");
    case 6:
      fprintf(csv, "Senate Committee of Foriegn Relations,");
    case 7:
      fprintf(csv, "Senate Committee of the Judiciary,");
    case 8:
      fprintf(csv, "Senate Committee of Education and Human Resources,");
    case 9:
      fprintf(csv, "Senate Committee of Energy and the Enviornment,");
    case 10:
      fprintf(csv, "Senate Committee of Science and Technology,");
    }
}
