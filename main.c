#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("Please pick you favorite order");
    printf("\n[1]Mountain dew (P100) \n[2]Milk tea (P120) \n[3]Nestle Juice (P95) \nChoice:");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 100;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Mountain dew Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("I'm sorry to inform you Ma'am/sir your product has been sold out");
}
    break;
    
    case 2:
    price = 120;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Succes! Enjoy your Milk tea Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{ 
    printf("I'm sorry to inform you Ma'am sir your product has been sold out");
}
     break;
   
    
     case 3:
    price = 95;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Nice! Enjoy your Nestle Juice Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("I'm sorry Ma'am/sir your product has been sold out");
}
  break;
   default:
   printf("Were sorry to inform you that that product you wanted does not exist anymore");
}
return 0;
}