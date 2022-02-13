/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int dis,x,y,totalfee;

  printf("Enter the distance=");
  scanf("%d",&dis);
  
  if(dis<=30){

x=50*dis;
totalfee=x;

printf("Total fee=%d",totalfee);
  }

if(dis>30){

y=(dis-30)*40;

totalfee=y+1500;

printf("Total fee=%d",totalfee);
}
  return 0;
}
