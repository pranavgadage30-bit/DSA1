// Recursion - a function calling itself is called recursion 
// You can stop the infiniite loop via using base condition 

#include <stdio.h>
void test(int a){
    printf("Main FUnction");
    test();             //This will create a infinite loop 
}
int main(){
    int a = 1;
    while(a<=5){
        printf("\nMain Function");
        a++;
    }
}



//You will not use looping methods to solve the problem 

// WAP to print n to 1 using recursion 
// WAP to print table of given num using recursion

#include<stdio.h>
void user(int n){
    if(n>0){
        printf("\n%d", n);
    }
    if(n == 1){
        return;
    }
    user(--n);
}


int main(){
    int n;
    printf("Enter the number from which you want reverse order: \n");
    scanf("%d", &n);
    user(n);
}

// Table 

#include<stdio.h>
void table(int n, int t){
    if(n>0){
        printf("\n%d * %d = %d", n,t,n*t);
    if(t==10){
        return;
    }
    }
    table(n, ++t);

}


int main(){
    int n;
    printf("Enter the number of which you want table: ");
    scanf("%d", &n);

    table(n,1);

}



// Factorial 

#include<stdio.h>

void fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
     
    int num=5;
    int factorial=fact(num);
    printf("Factorial of %d is %d", num,factorial);
    return 0;
}


// Fibonacci 

#include<stdio.h>
void fibo(int First, int Second, int Third, int sum){
    {
        third = first + second;
        return fibo();
    }
    if(sum == last){
        return 0;
    }
}

int main(){
    int First = 0;
    int Second = 1;
    int last = 10;
    int sum;
    First = 0;
    Second = 1;

    fibo(First)


}