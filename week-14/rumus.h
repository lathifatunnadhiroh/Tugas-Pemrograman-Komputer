#ifndef RUMUS_H_INCLUDED
#define RUMUS_H_INCLUDED

float kali(float x,float y){
return x*y;
}

float pangkat(float x,int y){
float z=1;
for(int i=1;i<=y;i++)
    z=z*x;
return z;
}

#endif // RUMUS_H_INCLUDED
