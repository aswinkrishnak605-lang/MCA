#include <stdio.h>
int main()
{
int arr1[50],arr2[50],merged[100];
int n1,n2,i,j;
printf("Entrer no of elements in the first array:");
scanf("%d",&n1);
printf("Enter %d elements:\n",n1);
for(i=0;i<n1;i++){
scanf("%d",&arr1[i]);
}
printf("Enter no of elements in second array :");
scanf("%d",&n2);
printf("Enter %d elements :\n",n2);
for(i=0;i<n2;i++){
scanf("%d",&arr2[i]);
}
for(i=0;i<n1;i++){
merged[i]=arr1[i];
}
for(j=0;j<n2;j++){
merged[i]=arr2[j];
i++;
}
printf("Merged array :\n");
for(i=0;i<n1+n2;i++){
printf("%d",merged[i]);
}
printf("\n");
return 0;
}

