#include <stdio.h>

int main() 
{
int c,b,t,price,hours_spent_in_parking_lot,parking_charge;
char type;
  printf(" Type of Vehicle : (c,C-Car, b,B-Bus, t,T-Truck): ");
  scanf("%c",&type);
  printf("Hours spent:");
  scanf("%d",&hours_spent_in_parking_lot);

    if(type=='c'||type=='C'){
    price=2;}
    else if(type=='b'||type=='B'){
    price=3;}
    else if(type=='t'||type=='T'){
    price=4;}
     

  parking_charge=price*hours_spent_in_parking_lot;
    printf("Charge:%d",parking_charge);
    
return 0;
  
}