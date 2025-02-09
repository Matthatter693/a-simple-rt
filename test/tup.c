#include<stdio.h>
#include<stdlib.h>

typedef struct{
    float x;
    float y;
    float z;
    float w;
}tuple;

void add(tuple *tup,int t){
    for (int i=0;i<t-1;i++){
        tup[t-1].x+=tup[i].x;
        tup[t-1].y+=tup[i].y;
        tup[t-1].z+=tup[i].z;
        tup[t-1].w+=tup[i].w;
    }
}


void main(){
    int t=3;
    tuple *tup =malloc(t*sizeof(tuple));

    for (int i=0;i<t-1;i++) {
        printf("Enter %d\n: ", i + 1);
        scanf("%f %f %f %f", &tup[i].x, &tup[i].y,&tup[i].z,&tup[i].w);
    }
    add(tup,t);
    printf("%f %f %f %f\n", tup[t-1].x, tup[t-1].y,tup[t-1].z,tup[t-1].w);
    free(tup);
}
