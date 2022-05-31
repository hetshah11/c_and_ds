#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
int a,b,c, chance = 5;
int upper=9, lower=1;
while(chance!=0){
srand(time(0));
b = (rand()%(upper-lower+1))+ lower;
srand(time(0) + 1);
c = (rand()%(upper-lower+1))+ lower;
printf("%d + %d =  ", b,c);
scanf("%d", &a);
if(a == b + c){
upper = upper*10;
lower = lower*10;
printf("\nThe answer is right.Next level\n");
chance = 5;

}else{
chance--;
printf("\n%d chance left\n", chance);
}
}
}
		
