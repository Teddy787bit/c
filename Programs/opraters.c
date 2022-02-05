#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a,b,c;
    printf("\n Enter the value of a:-");
    scanf("%d",&a);
    printf("\n Enter the value of b:-");
    scanf("%d",&b);
    
    //Arethmatic Oprators
    printf("\n--------Arethmatic Oprators----------\n");
    printf("\n Additional     '+'   :-%d",a+b);
    printf("\n Substraction   '-'   :-%d",a-b);
    printf("\n Multiplication '*'   :-%d",a*b);
    printf("\n Division       '/'   :-%d",a/b);
    printf("\n Mode           '%%'   :-%d",a%b);
a++;
    printf("\n Increment      '++'  :-%d",a);
a--;
    printf("\n Decrement      '--'  :-%d",a);
    
    //Relational Oprators
    printf("\n--------Relational Oprators----------\n");
    if(a==b){
         printf("\n'==' Opretor");
        printf("\na is equal to b");
    }
    if(a!=b){
         printf("\n'!=' Opretor");
        printf("\na is not  equal to b");
    }
     if(a<b){
         printf("\n'<' Opretor");
        printf("\n b is grater then a");
    }
    if(a>b){
         printf("\n'>' Oprator");
        printf("\n a is grater then b");
    }
    // Assignment Oprator
    printf("\n--------Assignment Oprators----------\n");
    c=a;
    printf("\n= Oprator a=c:- %d",c);
    
    c+=a;
    printf("\n += (i.e c=c+a) Oprator:- %d",c);

    c-=a;
    printf("\n -= (i.e c=c-a) Oprator:- %d",c);   

    c*=a;
    printf("\n *= (i.e c=c*a) Oprator:- %d",c);

    c/=a;
    printf("\n /= (i.e c=c/a) Oprator:- %d",c);
  
    c%=a;
    printf("\n = (i.e c=c%%a) Oprator:- %d",c);
   
    c<<=2;
    printf("\n<<= (i.e c=c<<2) Oprator:- %d",c);
  
    c>>=2;
    printf("\n>>= (i.e c=c>>2) Oprator:- %d",c);
  
    c&=2;
    printf("\n &= (i.e c=c&2) Oprator:-  %d",c);
return 0;
}
