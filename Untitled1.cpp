#include<stdio.h>
#include<math.h>
double formnumber(char s[100],int base){
double number =0;
int k=0;
int i;
for(i=i-1;i>=0;i--){
number += pow(base,k)*( int)(s[i]-'0');
k++;
}
return number;
}
 
char* divisibilitytype(int number){
char* type= "7-type";
int divisible[12];
int k=0;
int i;
for(i=2;i<12;i++){
if(number % i == 0){
divisible[k++]=i;
}
}
i=0;
if(k==0){
return type;
}
else{
for(i=0;i<k;i++){
int temp = divisible[i];
if(temp==2||temp==4||temp==5||temp==8||temp==10){
type = "2-type";
if(temp == 2||temp == 5 || temp == 10){
type = "2-type\n1";
}
else if(temp == 4){
type = "2-type\n2";
}
else{
type = "2-type\n3";
}
}
if(temp==3||temp==9){
type= "3-type";
}
else if(temp==11){
type = "11-type";
}
else if(temp ==6 ){
type = "6-type";
}
}
}
return type;
}

int main(){
char str[100];
int n;
scanf("%s %d",&str,&n);
int num = formnumber(str,n);
printf("%d\n",n);
char* output = divisibilitytype(num);
printf("%s\n",output);
return 0;
}

