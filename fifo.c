#include<stdio.h>
int main()
{
printf("Hello, Please enter number of processes\n");
int n;
scanf("%d",&n);
int a[n][2];
int i;
for (i=1;i<=n;i++)
{
printf("Process %d :\n",i);
printf("Enter Burst time : ");
scanf("%d", &a[i][0]);
printf("\n");
printf("Enter intime : ");
scanf("%d", &a[i][1]);
printf("\n");
}
int b[n];
printf("Enter the sequence of arrival:\n");
for (i=1;i<=n;i++){
scanf("%d",&b[i]);
}
int total_time=0;
total_time=a[b[1]][0];
for (i=2;i<=n;i++){

if (a[b[i]][1]>total_time){
total_time=a[b[i]][1];
}

total_time=total_time+a[b[i]][0];

}
printf("Average waiting time is : ");
printf("%d\n",total_time/n);
}
