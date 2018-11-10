#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    double m,n,o,p,q,r,s,t,u,v,w,x,y,z,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10,z11,z12,z13,z14,z15;
    printf("Please enter X1, X2, X3 and Const. : \n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("\nPlease enter X1, X2, X3 and Const. : \n");
    scanf("%lf %lf %lf %lf",&e,&f,&g,&h);
    printf("\nPlease enter X1, X2, X3 and Const. : \n");
    scanf("%lf %lf %lf %lf",&i,&j,&k,&l);

    m=a/a,n=b/a,o=c/a,p=d/a;

    printf("\n\n(STEP : 1)Normalizing 1st Equation: \n\n");
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",m,n,o,p);

    q=e-m*e,r=f-e*n,s=g-e*o,t=h-e*p;
    u=i-m*i,v=j-n*i,w=k-i*o,x=l-i*p;

    printf("\n\n(STEP : 2)");
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",m,n,o,p);
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",q,r,s,t);
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",u,v,w,x);

    y=r/r,z=s/r,z1=t/r;

    printf("\n\n(STEP : 3)Normalizing 2nd Equation: \n\n");
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",q,y,z,z1);

    z2=m-q,z3=n-n*y,z4=o-z*n,z5=p-n*z1;
    z6=q-u,z7=v-v*y,z8=w-z*v,z9=x-z1*v;

    printf("\n\n(STEP : 4)");
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",z2,z3,z4,z5);
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",q,y,z,z1);
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",z6,z7,z8,z9);

    z10=z8/z8,z11=z9/z8;

    printf("\n\n(STEP : 5)Normalizing 3rd Equation: \n\n");
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",z6,z7,z10,z11);

    z14=z4-z4*z10,z15=z5-z11*z4;
    z12=z-z*z10,z13=z1-z*z11;

    printf("\n\n(STEP : 6)");
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",z2,z3,z14,z15);
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",q,y,z12,z13);
    printf("\n\n %lf X1 %lf X2 %lf X3 = %lf",z6,z7,z10,z11);


    printf("\n\n    RESULT      \n\n");
    printf("THE VALUE OF X1 = %lf,\n             X2 = %lf and\n             X3 = %lf\n\n",z15,z13,z11);
    return 0;
}

