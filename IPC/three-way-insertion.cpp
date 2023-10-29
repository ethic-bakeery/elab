
 #include <stdio.h>
#include<math.h>
int main(void) {
 // your code goes here
 int t;
 scanf("%d",&t);
 while(t-->0){
     int n,a1,a2,b1,b2,c1,c2;
     float n1,n2,n3;
     scanf("%d",&n);
     scanf("%d%d",&a1,&a2);
     scanf("%d%d",&b1,&b2);
     scanf("%d%d",&c1,&c2);
     n1=(double)(sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2)));
     n2=(double)(sqrt((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2)));
     n3=(double)(sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2)));
     if(n2<=n && n3<=n || n1<=n && n3<=n)
         printf("yes\n");
      
     else if(n1<=n && n2<=n)
        printf("yes\n");
     else
        printf("no\n");
 }
 return 0;
}


