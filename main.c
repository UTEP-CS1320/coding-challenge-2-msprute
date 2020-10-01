/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  
  // I haven't added the curly brackets on the if statements because if it requires little space, I don't wanna waste extra lines
  // when I don't need them.
  if (s > d){
    if (s < 120 && d < 80)
      printf("Normal\n");
    else if ((s >= 120 && s <= 129) && d < 80)
      printf("Elevated\n");
    else if ((s >= 130 && s <= 139) && (d >= 80 && d <= 89))
      printf("Stage 1 Hypertension\n");
    // Here I've had to put the last case before Stage 2 since it was conflicting with some of the outputs.
    else if (s >= 180 || d >= 120)
      printf("Hypertensive Crysis\n");
    // Here I've had to add a couple ranges although it's not included in the chart so that the proper cases would be outputted
    else if ((s >= 140 && s < 180) || (d >= 90 && d < 120))
      printf("Stage 2 Hypertension\n");
  }
  else
    printf("ERROR\n");
}
