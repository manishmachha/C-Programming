#include <stdio.h> 
  
int main() 
{ 
    int A, B, C; 
  
    printf("Enter the numbers A, B and C: "); 
    scanf("%d %d %d", &A, &B, &C); 
  
    if (A >= B && A >= C) 
        printf("%d is the largest number.", A); 
  
    if (B >= A && B >= C) 
        printf("%d is the largest number.", B); 
  
    if (C >= A && C >= B) 
        printf("%d is the largest number.", C); 

    if (A <= B && A <= C) 
        printf("\n%d is the smallest number.", A); 
  
    if (B<= A && B <= C) 
        printf("\n%d is the smallest number.", B); 
  
    if (C <= A && C <= B) 
        printf("\n%d is the smallest number.", C); 
  
    return 0; 
} 