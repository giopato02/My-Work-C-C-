/*
CH-230-A
a3 p9.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// double sum25(double v[], int n)
// {
//     // Checks if positions 2 and 5 are valid
//     if (n < 6)
//     {
//         printf("Positions 2 and 5 are not valid in the array.\n");
//         return -111; // Return -111 if not valid
//     }

//     // Calculate the sum of elements at position 2 and 5
//     return v[2] + v[5];
// }

// int main()
// {
//     int n;
//     double arr[20];

//     // Read the number of elements
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     // Ensure n is within bounds
//     if (n < 1 || n > 20)
//     {
//         printf("Invalid number of elements. Please enter a value between 1 and 20.\n");
//         return 1; // Exit the program
//     }

//     // Read n double values into the array
//     printf("Enter %d values:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lf", &arr[i]);
//     }

//     // Calls the function
//     double result = sum25(arr, n);
//     if (result != -111)
//     {
//         printf("Sum of elements at positions 2 and 5 = %f\n", result);
//     }

//     return 0;
// }