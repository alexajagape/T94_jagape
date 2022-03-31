#include <stdio.h>
int lexa(int db[3][2],int id, int pin){
    int us = 0;
    for(int i = 0; i<3; i++){
        if(id == db[i][0] && pin == db[i][1]){
            us = 1;
        }
    }
    return us;
}
int main(){
    int db[3][2] = {{4567,2222},{1234,3333},{2341,4444}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(lexa(db,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}