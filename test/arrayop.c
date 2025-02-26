#include<stdio.h>

//file contains every array based operations

double magnitude(double *a){
    int i;
    double c=0;
    for(i=0;i<4;i++){
        c+=pow(a[i],2);
        printf("%lf\n",c);
    }
    c=sqrt(c);
    return c;
}

void normalize(double *a){
    int i;
    double mag=magnitude(a);
    for(i=0;i<4;i++){
        a[i]=a[i]/mag;
    }
}

double dotproduct(double *a,double *b){
    int i;
    double res;
    for(i=0;i<4;i++){
        res+=a[i]*b[i];
    }
    return res;
}

void crossproduct(double *a,double *b,double *c){
    c[0]=(a[1]*b[2])-(a[2]*b[1]);
    c[1]=(a[2]*b[0])-(a[0]*b[2]);
    c[2]=(a[0]*b[1])-(a[1]*b[0]);
    c[3]=0;
}

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

void addition(double *a,double *b,double *c){
    int i;
    for(i=0;i<4;i++)
        c[i]=a[i]+b[i];
}

void subtraction(double *a,double *b,double *c){
    int i;
    for(i=0;i<4;i++)
        c[i]=a[i]-b[i];
}


void r_2d(double (*p)[4]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
           // scanf("%d",&p[i][j]);
            switch(j){
                case 0:
                    printf("Enter the x-axis:");
                    scanf("%lf",&p[i][j]);
                    break;
                case 1:
                    printf("Enter the y-axis:");
                    scanf("%lf",&p[i][j]);
                    break;
                case 2:
                    printf("Enter the z-axis:");
                    scanf("%lf",&p[i][j]);
                    break;
                case 3:
                    printf("set '1' for point and '0' for vector:");
                    scanf("%lf",&p[i][j]);
                    break;
            }

        }
    }
}

void p_2d(double (*p)[4]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            switch(j){
                case 0:
                    printf("X-axis:%lf\n",p[i][j]);
                    break;
                case 1:
                    printf("Y-axis:%lf\n",p[i][j]);
                    break;
                case 2:
                    printf("Z-axis:%lf\n",p[i][j]);
                    break;
                case 3:
                    if(p[i][j]==0)
                        printf("It is a vector:%lf\n",p[i][j]);
                    else
                        printf("It is a point:%lf\n",p[i][j]);
                    break;
            }
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
