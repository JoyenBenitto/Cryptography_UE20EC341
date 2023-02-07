
void max(int a, int b, int *maximum, int *minimum){

    if (a>=b){
        *maximum= a;
        *minimum= b; 
        }
    else
    {
        *maximum= b;
        *minimum= a;
    }
          
}


// a function that calculates the GCD of two numbers using the Euclidean algorithm
int euclid_GCD(int num1,int num2)   
{   
    int a,b;
    int reminder=1;
    int gcd =0;
    max(num1,num2,&a,&b);
    while(reminder != 0){
        reminder= a%b;
        a=b;
        b=reminder;
    }

    return a;
}

int extended_euclid(int num1,int num2, int *gcdd, int *inverse){
    int a,b,r,t1,t2,t,q;
    q=0;
    t1=0;
    t2=1;

    if(euclid_GCD(num1,num2)==1)
    {
        //inverse exists ---> proceed calculation
        max(num1,num2,&a,&b);   //a== max value, b== min value
        while(r != 0)
        {
            q=a/b;
            r=a%b;
            t=t1-t2*q;
            a=b;
            b=r;
            t1=t2;
            t2=t;

        }
        *gcdd = a;
        *inverse= t1;
        return 1;
    }

    else{
        return 0;
    }
}

int CRT()
{
    return 0;
}