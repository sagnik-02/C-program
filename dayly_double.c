#include <stdio.h>

int main()
{
  
  int amount ; // Initial amount in rupees
  int days;
  printf("Enter the amount in R.s: ");
    scanf("%d", &amount);
    printf("Enter the number of days: ");
    scanf("%d", &days);

    for (int i = 1; i <= days; i++) {
        amount *= 2; // Multiply the amount by 2 each day
        printf("Day %d: %d rupees\n", i, amount);
    
    }

    return 0;

}
