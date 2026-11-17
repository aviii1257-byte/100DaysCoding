//Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main(){
int days;
int fine=0;
printf("Enter number of late days:");
scanf("%d",&days);
if(days<=0){
    printf("No fine\n");
}
else if(days<=5){
    fine= 2*days;
    printf("Fine:%d rupees\n", fine);
}
else if(days<=30){
    // First 5 days @ 2 rupees + next 5 days @ 4 rupees + remaining days @ 6 rupees/day
    fine= (5*2) + (5*4) + ((days-10)*6);
    printf("Fine: %d rupees\n",fine);
}
else{
    printf("Membership Cancelled.\n");
}
return 0;
}
//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>
int main(){
    int units;
    float bill=0;
    printf("Enter electricity units consumed:");
    scanf("%d",&units);
if(units<=0){
    bill=0;
}
else if(units<=100){
bill= 5*units;
}
else if(units<=200){
    //First 100 @ 5 rupees + remaining @ 7 rupees
    bill= (100*5) + ((units-100)*7);
}
else if(units<=300){
    // First 100 @ 5 rupees + next 100 @ 7 rupees + remaining @ 10 rupees
    bill= (100*5) + (100*7) + ((units-200)*10);
}
else{
    //First 100 @ 5 rupees + next 100 @ 7 rupees + next 100 @ 10 rupees + remaining @ 12 rupees
    bill= (100*5) + (100*7) + (100*10) + ((units-300)*12);
}
printf("Total Electricity Bill: %0.2f rupees\n",bill);
return 0;
}
