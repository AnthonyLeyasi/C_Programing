
#include <stdio.h>

#define PI 3.14159

//* Problem 1 *//

int prob1() {
    float radius = 2.5;

    float area = PI * radius * radius;

    printf("The area of the circle with a radius of %.2f is %.2f\n", radius,area);

}


//* Problem 2 *//



void printResult(int board[3][3], int spacesBetween, int linesAfter) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", board[i][j]);
    
            for(int k = 0; k < spacesBetween; k++) {
                printf(j < 2 ? " " : ""); 
                printf(j < 2 && spacesBetween > 1 ? "\t" : ""); 
            }
        }
        printf("\n");
        for (int l = 0; l < linesAfter; l++) {
            if (i < 2) { 
                printf("\n");
            }
        }
    }
}

int TikTakToe() {
    int board1[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int board2[3][3] = {{0, 0, 1}, {0, 1, 0}, {1, 0, 0}};
    int board3[3][3] = {{0, 1, 0}, {1, 0, 0}, {0, 0, 1}};

    
    printResult(board1, 1, 0);
    printf("\n\n"); 

    printResult(board2, 2, 1);
    printf("\n\n"); 

    printResult(board3, 3, 2);

    return 0;
}

//* Problem 3 *//




int  TriangleArea() {
    float base, height, area;


    printf("Enter the base and height of the triangle separated by a space: ");
    scanf("%f %f", &base, &height);


    area = 0.5 * base * height;

    printf("The area of the triangle with base %.2f and height %.2f is %.2f\n", base, height, area);

    return 0;
}

//* Problem 4 *//


int MilesToKilometers() {
    float miles, kilometers;
    const float conversionFactor = 1.60934;


    printf("Enter the distance in miles: ");
    scanf("%f", &miles);


    kilometers = miles * conversionFactor;
    printf("%.2f miles is equivalent to %.2f kilometers.\n", miles, kilometers);


    miles = 60;
    kilometers = miles * conversionFactor;
    printf("Example: %.2f miles is equivalent to %.2f kilometers.\n", miles, kilometers);


    miles = 30;
    kilometers = miles * conversionFactor;
    printf("Example: %.2f miles is equivalent to %.2f kilometers.\n", miles, kilometers);

    return 0;
}  

//* Problem 5 *//



int Sig() {
    printf("   A     LLLL \n");
    printf("  A A    L   L\n");
    printf(" AAAAA   LLLL \n");
    printf("A     A  L   L\n");
    printf("A     A  LLLL \n");
    return 0;
}




int Smile() {
    printf("  *****  \n");
    printf(" *     * \n");
    printf("* -   - *\n");
    printf("*   o   *\n");
    printf(" *     * \n");
    printf("  *****  \n");
    return 0;
}



int UpIT() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);


    int doubleUp = number * 2;
    int quadrupleUp = number * 4;

    printf("\\~Double up is %d~\\-----/~Quadruple up is %d~/\n", doubleUp, quadrupleUp);


    printf("\nChallenge: Up It for numbers 1 through 10\n");
    for (int i = 1; i <= 10; i++) {
        doubleUp = i * 2;
        quadrupleUp = i * 4;
        printf("%d: \\~Double up is %d~\\-----/~Quadruple up is %d~/\n", i, doubleUp, quadrupleUp);
    }

    return 0;
}
