#include<stdio.h>

int main(){
  int dec, bin, temp[50], i=0, j;
  printf("Enter the decimal number : ");
  scanf("%d",&dec);

  do{
    temp[i]=dec%2;
    dec/=2;
    i++;
  }while(dec>0);

  printf("The binary number is : ");
  for(j=i-1;j>=0;j--){
    printf("%d",temp[j]);
  }

  return 0;
}
