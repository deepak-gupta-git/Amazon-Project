#include <stdio.h>

int main() {
    int number, firstDigit, secondDigit, sum;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 1; // Exit the program with an error code
    }

    // Extract the two digits
    firstDigit = number / 10;
    secondDigit = number % 10;

    // Calculate the sum of the two digits
    sum = firstDigit + secondDigit;

    printf("The sum of the digits in %d is %d + %d = %d\n", number, firstDigit, secondDigit, sum);

    return 0;
}



#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    // Calculate the sum of the array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series for the first %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}


