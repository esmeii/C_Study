 #include<stdio.h>

int maint(){
  int input, change;
  int x500,x100,x50,x10;
  
  scanf("%d",&input);
  change = input - 5000;
  
  x500 = change/500;
  change %=500;
  x100 = change/100;
  change %=100;
  x50 = change/50;
  change %=50;
  x10 = change/10;
  change %=10;
  
  printf("%d %d %d %d\n",x500,x100,x50,x10);
  
  return 0;
}
