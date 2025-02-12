#include<stdio.h>
#include<math.h>
#include"arrayop.c"
#include<unistd.h>

void cannon(double (*pos)[4],double (*eg)[4]){
    normalize(pos[1]);
     while(pos[0][1]>0){
        addition(pos[0],pos[1],pos[0]);
        addition(pos[1],eg[0],pos[1]);
        addition(pos[1],eg[1],pos[1]);
        printarray(pos[0]);
        sleep(1);
   }
}

void main(){
    double pos[2][4];
    double eg[2][4];
    printf("Enter the projectile position and projectile velocity\n");
    r_2d(pos);
    printf("Enter the gravitational velocity and wind velocity\n");
    r_2d(eg);
    cannon(pos,eg);
}
