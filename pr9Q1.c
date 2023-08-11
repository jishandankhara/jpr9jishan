#include<stdio.h>
void main(){
FILE *p1,*p2;
int j;
p1 = fopen("even_txt","w");
if(p1 != NULL){
	printf("File Created even.txt\n");
}else{
	printf("File does not created\n");
}for(j=50;j<=70;j++){
if(j%2=0){
fprintf(p1,"%d\n",j);
}}
p2 = fopen("odd_txt","w");
if(p2 != NULL){
	printf("File Created odd.txt\n");
}else{
	printf("File does not created\n");
}for(i = 50; i <= 70; i++){
if(i % 2 != 0){
fprintf(p2,"%d\n",i);
}
}
}
