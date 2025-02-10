#include<stdio.h>
#include<math.h>


void scalar(double *a){
    int d,i;
    double v;
    printf("Multiplication[1] Division[2]:");
    scanf("%d",&d);
    printf("Enter the value:");
    scanf("%lf",&v);
    if(d==1){
        for(i=0;i<3;i++){
            a[i]=v*a[i];
        }
    }
    else if(d==2){
        for(i=0;i<3;i++){
            a[i]=a[i]/v;
        }
    }
}

void negate(double *a){
    int i;
    for(i=0;i<3;i++)
        a[i]=a[i]*-1;
}


void arithmetic(double *a,double *b,double *c){
    int d,i;
    printf("Addition[1] Subtraction[2]:");
    scanf("%d",&d);
        if(d==1){
            for(i=0;i<4;i++)
                c[i]=a[i]+b[i];
        }
        else if(d==2){
            for(i=0;i<4;i++)
                c[i]=a[i]-b[i];
        }
        else
            printf("Enter an value between 1 and 2\n");
}


void fillarray(double *a){
    for(int i=0;i<4;i++){
        switch(i){
            case 0:
                printf("Enter the x-axis:");
                scanf("%lf",&a[0]);
                break;
            case 1:
                printf("Enter the y-axis:");
                scanf("%lf",&a[1]);
                break;
            case 2:
                printf("Enter the z-axis:");
                scanf("%lf",&a[2]);
                break;
            case 3:
                printf("set '1' for point and '0' for vector:");
                scanf("%lf",&a[3]);
                break;
        }
    }
}

void printarray(double *a){
    for(int i=0;i<4;i++){
         switch(i){
            case 0:
                printf("X-axis:%lf\n",a[0]);
                break;
            case 1:
                printf("Y-axis:%lf\n",a[1]);
                break;
            case 2:
                printf("Z-axis:%lf\n",a[2]);
                break;
            case 3:
                if(a[3]==0)
                printf("It is a vector:%lf\n",a[3]);
                else
                printf("It is a point:%lf\n",a[3]);
                break;
        }
    }
}

void main(){
    double a[4];
    double b[4];
    double c[4];
    fillarray(a);
   // fillarray(b);
   // arithmetic(a,b,c);
    scalar(a);
    printarray(a);
}
