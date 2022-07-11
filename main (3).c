#include<stdio.h>
#include<math.h>
int main() {
 int a[10], b[10];             //declaring the variable
 int c[10],d[10];               //declaring the variable
 int n, i,e1=0;
 float magnitude,angle,a1,b1,c1;
 printf("Enter elements of vector a:\n");
 for(i = 0; i < 2; i++)              //getting input from user for first vector
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for(i = 0; i < 2; i++)             //getting input from user for second vector
    scanf("%d", &b[i]);
    for (i = 0; i < 2; i++)
      c[i] = a[i] + b[i];             //adding the two vectors
    printf("Addition vector:");
    for (i = 0; i < 2; i++)
      printf("%d ", c[i]);            //printing the the addition of two vector
      magnitude=sqrt(pow(c[0],2)+pow(c[1],2)); //finding the magnitude of the two vectors
      printf("\nMagnitude of c vector is %f\n",magnitude);//printing the magnitude of the two vector
      //finding the angle between the vector
       //cos 0 = a.b/|a||b|
      for(i=0;i<2;i++)
      {
          d[i]=a[i]*b[i];             //finding the numerator
          e1=e1+d[i];
      }
     
      a1=sqrt(pow(a[0],2)+pow(a[1],2));        
       printf("%f\n",a1);
      b1=sqrt(pow(b[0],2)+pow(b[1],2));        
       printf("%f\n",b1);  
      c1=a1*b1;                         //finding the denominator
       angle=e1/c1;                      //finding the angle
       printf("angle between the vector is cos θ = %f",angle); //printing the angle
}
       
       
       /* APPLICATION
      - it is used to find the angle and magnitude of vectors.*/
