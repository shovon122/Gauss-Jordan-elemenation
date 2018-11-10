#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    double m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    double temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12,temp13,temp14,temp15,temp16,temp17;
    printf("Please enter x1, x2, x3 and const. : \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("\nPlease enter x1, x2, x3 and const. : \n");
    scanf("%d %d %d %d",&e,&f,&g,&h);
    printf("\nPlease enter x1, x2, x3 and const. : \n");
    scanf("%d %d %d %d",&i,&j,&k,&l);
    if(a<0 || e<0 || i<0)
    {
        a=a*-1;
        e=e*-1;
        i=i*-1;
    }
    else{};



    if(a>e && a>i){

    m=(a*e-e*a);
    n=(b*e-f*a);
    o=(c*e-g*a);
    p=(d*e-h*a);
    printf("\n\n_______________ ELIMINATING X1 __________________\n\n");
    printf("\n %lf %lf %lf %lf \n",m,n,o,p);
    q=e*i-i*e;
    r=f*i-j*e;
    s=(g*i-k*e);
    t=(h*i-l*e);
    printf("\n %lf %lf %lf %lf ",q,r,s,t);
    if(n<0 || r<0)
    {
        n=n*-1;
        r=r*-1;
    }
    else{};



    if(n>r){
    u=n*r-r*n;
    v=o*r-s*n;
    w=p*r-t*n;

    printf("\n\n____________________ ELIMINATING X2 _____________________\n\n");
    printf("\n %lf %lf %lf %lf",m,u,v,w);
    printf("\n\n__________________ ANSWER ________________________ \n\n");
    if(v==1)
    {
        printf("\n\n x3 = %lf ",w);
        x=w;
    }
    else
    {
        printf("\n\n x3 = %lf ",w/v);
        x=w/v;

    }
    if(r==1)
    {
        y=t-s*x;
        printf("\n\n x2 = %lf ",y);
    }
    else
    {
        y=(t-s*x)/r;
        printf("\n\n x2 = %lf ",y);
    }
    if(a==1)
    {
        z=d-(c*x)-(b*y);
        printf("\n\n x1 = %lf ",z);
    }
    else
    {
        z=(d-(c*x)-(b*y))/a;
        printf("\n\n x1 = %lf \n",z);
    }
    }
    else
    {
        temp9=n,temp10=o,temp11=p;
        n=r,o=s,p=t;
        r=temp9,s=temp10,t=temp11;
    u=n*r-r*n;
    v=o*r-s*n;
    w=p*r-t*n;

    printf("\n\n____________________ ELIMINATING X2 _____________________\n\n");
    printf("\n %lf %lf %lf %lf",m,u,v,w);
    printf("\n\n__________________ ANSWER ________________________ \n\n");
    if(v==1)
    {
        printf("\n\n x3 = %lf ",w);
        x=w;
    }
    else
    {
        printf("\n\n x3 = %lf ",w/v);
        x=w/v;

    }
    if(r==1)
    {
        y=t-s*x;
        printf("\n\n x2 = %lf ",y);
    }
    else
    {
        y=(t-s*x)/r;
        printf("\n\n x2 = %lf ",y);
    }
    if(a==1)
    {
        z=d-(c*x)-(b*y);
        printf("\n\n x1 = %lf ",z);
    }
    else
    {
        z=(d-(c*x)-(b*y))/a;
        printf("\n\n x1 = %lf \n",z);
    }

    }


}    else if(e>a && e>i)
    {
        temp1=a,temp2=b,temp3=c,temp4=d;
        a=e,b=f,c=g,d=h;
        e=temp1,f=temp2,g=temp3,h=temp4;

    m=(a*e-e*a);
    n=(b*e-f*a);
    o=(c*e-g*a);
    p=(d*e-h*a);
    printf("\n\n_______________ ELIMINATING X1 __________________\n\n");
    printf("\n %lf %lf %lf %lf \n",m,n,o,p);
    q=e*i-i*e;
    r=f*i-j*e;
    s=(g*i-k*e);
    t=(h*i-l*e);
    printf("\n %lf %lf %lf %lf ",q,r,s,t);
    if(n>r)
    {
    u=n*r-r*n;
    v=o*r-s*n;
    w=p*r-t*n;
    printf("\n\n____________________ ELIMINATING X2 _____________________\n\n");

    printf("\n %lf %lf %lf %lf",m,u,v,w);
    printf("\n\n__________________ ANSWER ________________________ \n\n");
    if(v==1)
    {
        printf("\n\n x3 = %lf ",w);
        x=w;
    }
    else
    {
        printf("\n\n x3 = %lf ",w/v);
        x=w/v;

    }
    if(r==1)
    {
        y=t-s*x;
        printf("\n\n x2 = %lf ",y);
    }
    else
    {
        y=(t-s*x)/r;
        printf("\n\n x2 = %lf ",y);
    }
    if(a==1)
    {
        z=d-(c*x)-(b*y);
        printf("\n\n x1 = %lf ",z);
    }
    else
    {
        z=(d-(c*x)-(b*y))/a;
        printf("\n\n x1 = %lf \n",z);
    }
    }
    else
    {
       temp12=n,temp13=o,temp14=p;
        n=r,o=s,p=t;
        r=temp12,s=temp13,t=temp14;
    u=n*r-r*n;
    v=o*r-s*n;
    w=p*r-t*n;

    printf("\n\n____________________ ELIMINATING X2 _____________________\n\n");
    printf("\n %lf %lf %lf %lf",m,u,v,w);
    printf("\n\n__________________ ANSWER ________________________ \n\n");
    if(v==1)
    {
        printf("\n\n x3 = %lf ",w);
        x=w;
    }
    else
    {
        printf("\n\n x3 = %lf ",w/v);
        x=w/v;

    }
    if(r==1)
    {
        y=t-s*x;
        printf("\n\n x2 = %lf ",y);
    }
    else
    {
        y=(t-s*x)/r;
        printf("\n\n x2 = %lf ",y);
    }
    if(a==1)
    {
        z=d-(c*x)-(b*y);
        printf("\n\n x1 = %lf ",z);
    }
    else
    {
        z=(d-(c*x)-(b*y))/a;
        printf("\n\n x1 = %lf \n",z);
    }

    }
    }
    else if(i>a && i>e)
    {
        temp5=a,temp6=b,temp7=c,temp8=d;
        a=i,b=j,c=k,d=l;
        i=temp5,j=temp6,k=temp7,l=temp8;
    m=(a*e-e*a);
    n=(b*e-f*a);
    o=(c*e-g*a);
    p=(d*e-h*a);
    printf("\n\n_______________ ELIMINATING X1 __________________\n\n");
    printf("\n %lf %lf %lf %lf \n",m,n,o,p);
    q=e*i-i*e;
    r=f*i-j*e;
    s=(g*i-k*e);
    t=(h*i-l*e);
    printf("\n %lf %lf %lf %lf ",q,r,s,t);
    if(n>r)
    {


    u=n*r-r*n;
    v=o*r-s*n;
    w=p*r-t*n;
    printf("\n\n____________________ ELIMINATING X2 _____________________\n\n");
    printf("\n %lf %lf %lf %lf",m,u,v,w);
    printf("\n\n__________________ ANSWER ________________________ \n\n");
    if(v==1)
    {
        printf("\n\n x3 = %lf ",w);
        x=w;
    }
    else
    {
        printf("\n\n x3 = %lf ",w/v);
        x=w/v;

    }
    if(r==1)
    {
        y=t-s*x;
        printf("\n\n x2 = %lf ",y);
    }
    else
    {
        y=(t-s*x)/r;
        printf("\n\n x2 = %lf ",y);
    }
    if(a==1)
    {
        z=d-(c*x)-(b*y);
        printf("\n\n x1 = %lf ",z);
    }
    else
    {
        z=(d-(c*x)-(b*y))/a;
        printf("\n\n x1 = %lf \n",z);
    }
    }
    else
    {
        temp15=n,temp16=o,temp17=p;
        n=r,o=s,p=t;
        r=temp15,s=temp16,t=temp17;
         u=n*r-r*n;
    v=o*r-s*n;
    w=p*r-t*n;
    printf("\n\n____________________ ELIMINATING X2 _____________________\n\n");
    printf("\n %lf %lf %lf %lf",m,u,v,w);
    printf("\n\n__________________ ANSWER ________________________ \n\n");
    if(v==1)
    {
        printf("\n\n x3 = %lf ",w);
        x=w;
    }
    else
    {
        printf("\n\n x3 = %lf ",w/v);
        x=w/v;

    }
    if(r==1)
    {
        y=t-s*x;
        printf("\n\n x2 = %lf ",y);
    }
    else
    {
        y=(t-s*x)/r;
        printf("\n\n x2 = %lf ",y);
    }
    if(a==1)
    {
        z=d-(c*x)-(b*y);
        printf("\n\n x1 = %lf ",z);
    }
    else
    {
        z=(d-(c*x)-(b*y))/a;
        printf("\n\n x1 = %lf \n",z);
    }

    }



    return 0;
    }
}

