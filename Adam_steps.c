#include<stdio.h>
#include<string.h>
 /*Adam has just started learning how to walk (with some help from his brother Omar), 
 and he falls down a lot. In order to balance himself, 
 he raises his hands up in the air (that’s a true story), 
 and once he puts his hands down, he falls.
You are given a string, each character represents a step he walks, 
if that character is ‘U’ that means his hands are up in this step, 
if this character is ‘D’ that means his hands are down and he fell down in this step. 
 Your task is to count how many steps he will walk before falling down for the first time.*/

int steps(){
    char step[100];
    int count=0;
    printf("The letters must either be u/d");
    printf("Enter the steps of adam U/D: ");
    scanf("%s",step);
    for (int j=0; j<=strlen(step); j++){
        if(step[j]=='U'|| step[j]=='u'){
            count=count+1;
            
        }
        if(step[j]=='d' || step[j]=='D'){
            break;
        }
        
    }
    printf("number of steps before falling down= %d\n",count);
    }
    

int main(){
    int n;
    printf("Enter the number of times you want to count Adam's step: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        steps();
    }
    return 0;
}