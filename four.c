//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
int main(){
float P1,R1,T1,S1,A1,C1;
float P2,R2,T2,S2,A2,C2;
printf("Enter the principal amount");
scanf("%f",&P1);
printf("Enter the rate of interest");
scanf("%f",&R1);
printf("Enter the time");
scanf("%f",&T1);
S1=(P1*R1*T1)/100;
printf("Simple interest:%f",S1);
A1=P1*(1+R1/100)*(1+R1/100);
C1=A1-P1;
printf("Compound interest:%f",C1);
printf("Enter the principal");
scanf("%f",&P2);
printf("Enter the rate of interest");
scanf("%f",&R2);
printf("Enter the time");
scanf("%f",&T2),
S2=(P2*R2*T2)/100;
printf("Simple interest:%f",S2);
A2=P2*(1+R2/100)*(1+R2/100)*(1+R2/100);
C2=A2-P2;
printf("Compound interest:%f",C2);
return 0;
}
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
int s1,m1,h1;
int s2,m2,h2;
printf("Enter time in seconds");
scanf("%d",&s1);
h1= s1/3600;
s1= s1 % 3600;
m1= s1/60;
s1= s1 % 60;
printf("Hours:Minutes:Seconds%d:%d:%d",h1,m1,s1);
printf("\nEnter time in seconds");
scanf("%d",&s2);
h2= s2/3600;
s2= s2 % 3600;
m2= s2/60;
s2= s2 % 60;
printf("Hours:Minutes:Seconds%d:%d:%d",h2,m2,s2);
return 0;
}