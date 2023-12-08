/*prograaming to find sum and average*/
#include <stdio.h>
int main() {
    int n, i;
    float avg = 0;
    /*prompts the user to enter  total number of peoples or items*/
    printf("Enter the number of elements: ");/*prints on  screen  */
    scanf("%d", &n);/*will read an interger value from the user and store it in variable "n"*/
    for (i=1; i<=n; ++i)/*initiaizes, loop contiounos test, increment*/ {
        float num;
        printf("Enter a number: ");/*prints on screen telling the user to enter marks of stdents*/
        scanf("%f",&num);/*will read an interger value from the user and store it in variable "num*/
        avg += num;
        }
        avg /= n;
        printf("\nSum is %f\nAverage is %.2f\n",avg, avg);
        return 0;
        }