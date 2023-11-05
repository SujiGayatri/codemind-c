#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    char str[200];
    scanf("%s",str);
    for(int i = 0 ; i < n-1 ; i++){
        c+=abs(int(str[i+1])-int(str[i]));
    }
    c = n-c-1;
    if(c%3==0){
        printf("Sudhir");
    }
    else{
        printf("Ashok");
    }
}