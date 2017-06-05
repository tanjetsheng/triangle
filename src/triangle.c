#include "triangle.h"
/*find short and long side of triangle*/
 char *validtriangle(int a,int b,int c,int *short1ptr,int *short2ptr,int *long1ptr){
  if(a>b&&a>c){
    *long1ptr = a;
    *short1ptr = b;
    *short2ptr = c;
    
  }
  else if (b>a&&b>c){
    *long1ptr = b;
    *short1ptr = a;
    *short2ptr = c;
    
  }
  else if (c>a&&c>b){
    *long1ptr = c;
    *short1ptr = a;
    *short2ptr = b;

  }
  else{
    return "invalid";
  }
  if(*short1ptr + *short2ptr>*long1ptr){
    return "valid";
  }
  else {
    return "invalid";
  }

 
}
char *checktype(int a, int b,int c){
  int s1,s2,l1;
  validtriangle(a,b,c,&s1,&s2,&l1);
  printf("short1:%d\n",s1);
  printf("short2:%d\n",s2);
  printf("long1:%d\n",l1);
  if(((s1*s1)+(s2*s2))>(l1*l1)){
    return "obtuse";
  }
  else if(((s1*s1)+(s2*s2))<(l1*l1)){
    return "accute";
  }
  else if(((s1*s1)+(s2*s2))==(l1*l1)){
    return "rightangle";
  }
}

