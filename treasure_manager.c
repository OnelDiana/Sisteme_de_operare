#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>

typedef struct{

  char treasureID[32];
  char userName[32];
  char clueText[128];
  float latitude, longitude;
  int value;

}TREASURE;

void detaliiTreasure(TREASURE treasure)
{
  printf("Treasure ID: %s\n", treasure.treasureID);
  printf("User Name: %s\n", treasure.userName);
  printf("Treasure Clue Text: %s\n", treasure.clueText);
  printf("Treasure Coordinates: LATITUDE - %f | LONGITUDE - %f\n", treasure.latitude, treasure.longitude);
  printf("Treasure Value: %d\n", treasure.value);
  printf("\n");
}


int main(int argc, char **argv)
{
  /*if(argc < 2)
    {
      printf("Numarul de argumente este gresit!\n");
      return 0;
      }*/
  return 0;
}
