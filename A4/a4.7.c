/*
CH-230-A
a4 p7.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// #define MAX_SIZE 30

// // Function printing the matrix
// void Matrix(int matrix[MAX_SIZE][MAX_SIZE], int n)
// {
//     printf("The entered matrix is:\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Function ptinting the elements under diagonal
// void Under_Diagonal(int matrix[MAX_SIZE][MAX_SIZE], int n)
// {
//     printf("Under the main diagonal:\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         { // j < i means below the diagonal
//             printf("%d ", matrix[i][j]);
//         }
//     }
//     printf("\n");
// }

// int main()
// {
//     int n;
//     int matrix[MAX_SIZE][MAX_SIZE];

//     // Input code
//     printf("Enter the size of the matrix: ");
//     scanf("%d", &n);

//     // Matrix elements
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Utilize the functions
//     Matrix(matrix, n);
//     Under_Diagonal(matrix, n);

//     return 0;
// }