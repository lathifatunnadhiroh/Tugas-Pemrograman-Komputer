#ifndef RUMUSKALIBAGI_H_INCLUDED
#define RUMUSKALIBAGI_H_INCLUDED
#include <stdio.h>

int kali(int x,int y){
return x*y;
}

int bagi(int x,int y){
return x/y;
}

int faktorial(int x){
int i,y=1;
for (i=1;i<=x;i++)//looping
y=i*y;
return y;
}

#endif // RUMUSKALIBAGI_H_INCLUDED
