//CSE-16-126
//Searching element using arrary
#include<stdio.h>
int main(){
int array[5]={2,4,6,7,9};
int i;
for(i=0;i<5;i++){
if(array[i]==6){
printf("element found %d\n",i);
return;
}
else{
printf("not found\n");
}
}
}
