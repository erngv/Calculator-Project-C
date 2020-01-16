/*
 * Program computes the following:
 *
 *      Perimeter:  Square, Rectangle, Triangle, Cirle.
 *      Area:       Square, Rectangle, Triangle, Circle
 *      Volume:     Cube, Rectangular Prism, Triangular Pyramid, Sphere.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "projectLibrary.h"

int main()
{
    int     figure, option = 1, choice = 1, menu = 1;
    float   length, side, width, sideA, sideB, sideC, base, pyramidHeight, height,
            lengthBase, widthBase, result, radius;

    printf("\n\n\tThis program computes the perimeter, area, and volume of different "
           "geometrical figures.");

    printf("\n\n\t\tMENU"
           "\n\n\t\t1) Perimeter"
           "\n\t\t2) Area"
           "\n\t\t3) Volume"
           "\n\n\t\tWhat would you like to calculate from the menu above?\n"
           "\n\t\t>> ");
    scanf("%d", &choice);

    // Allows the user to choose the calculation to be done
    while (menu == 1)
    {
        // Allows the user choose the geometrical figure to work with
        if (choice == 1)
        {
            do {
                printf("\n\t\tWhat geometrical figure would you like to use for Perimeter?\n"
                       "\n\t\t1) Square"
                       "\n\t\t2) Rectangle"
                       "\n\t\t3) Triangle"
                       "\n\t\t4) Circle\n"
                       "\n\t\t>> ");
                scanf("%d", &figure);
                printf("\n\t\tPlease enter the following values in meters:\n");

                switch (figure)
                {
                    case 1:
                            printf("\n\t\tPlease enter side: ");
                            scanf("%f", &side);
                            side = validateInput(side);

                            result = perimeterSquare(side);
                            printf("\n\t\tPerimeter is %.2f m", result);
                            break;
                    case 2:
                            printf("\n\t\tLength: ");
                            scanf("%f", &length);
                            length = validateInput(length);

                            printf("\n\t\tWidth:");
                            scanf("%f", &width);
                            width = validateInput(width);

                            result = perimeterRectangle(length, width);
                            printf("\n\t\tPerimeter is %.2f m", result);
                            break;
                    case 3:
                            printf("\n\t\tSide 1: ");
                            scanf("%f", &sideA);
                            sideA = validateInput(sideA);

                            printf("\n\t\tSide 2: ");
                            scanf("%f", &sideB);
                            sideB = validateInput(sideB);

                            printf("\n\t\tSide 3: ");
                            scanf("%f", &sideC);
                            sideC = validateInput(sideC);

                            if (sideA + sideC > sideC && sideA + sideB > sideC && sideB + sideC > sideA)
                            {
                                // This is a triangle
                                result = perimeterTriangle(sideA, sideB, sideC);
                                printf("\n\t\tPerimeter is %.2f m", result);
                            }
                            else
                            {
                                // Not a triangle
                                printf("\n\t\tERROR: These sides do not form a triangle.");
                            }
                            break;
                    case 4:
                            printf("\n\t\tRadius: ");
                            scanf("%f", &radius);
                            radius = validateInput(radius);

                            result = perimeterCircle(radius);
                            printf("\n\t\tPerimeter is %.2f m\n", result);
                            break;
                    default:
                            printf("\n\t\t\tInvalid option.\n");
                } // switch perimeter ends here

                printf("\n\n\t\t\tWould you like to calculate Perimeter again?\n"
                       "\t\t\tEnter 1 for YES or 2 for NO.\n"
                       "\t\t\t>> ");
                scanf("%d", &option);

                if (option == 1)
                {
                    continue;
                }
                else if (option == 2)
                {
                    printf("\n\t\t\tWould you like to go to the main menu?\n"
                           "\t\t\tEnter 1 for YES or 2 for NO.\n"
                           "\t\t\t>> ");
                    scanf("%d", &menu);

                    if (menu == 1)
                    {
                        main();
                    }
                    else if (menu == 2)
                    {
                        printf("\n\t\t\t******  Thank you for using this calculator. Goodbye.  ******\n\n");
                    }
                    return 0;
                }
            } while (choice == 1);
        
        }
        else if (choice == 2)
        {
            do {
                printf("\n\t\tWhat geometrical figure would you like to use for Area?\n"
                       "\n\t\t1) Square"
                       "\n\t\t2) Rectangle"
                       "\n\t\t3) Triangle"
                       "\n\t\t4) Circle\n"
                       "\n\t\t>> ");
                scanf("%d", &figure);
                printf("\n\t\tPlease enter the following values in meters:\n");

                switch (figure)
                {
                    case 1:
                            printf("\n\t\tSide: ");
                            scanf("%f", &side);
                            side = validateInput(side);

                            result = areaSquare(side);
                            printf("\n\t\tArea is %.2f m^2", result);
                            break;
                    case 2:
                            printf("\n\t\tLength: ");
                            scanf("%f", &length);
                            length = validateInput(length);

                            printf("\n\t\tWidth: ");
                            scanf("%f", &width);
                            width = validateInput(width);

                            result = areaRectangle(length, width);
                            printf("\n\t\tArea is %.2f m^2", result);
                            break;
                    case 3:
                            printf("\n\t\tBase: ");
                            scanf("%f", &base);
                            base = validateInput(base);

                            printf("\n\t\tHeight: ");
                            scanf("%f", &height);
                            height = validateInput(height);

                            result = areaTriangle(base, height);
                            printf("\n\t\tArea is %.2f m^2", result);
                            break;
                    case 4:
                            printf("\n\t\tRadius: ");
                            scanf("%f", &radius);
                            radius = validateInput(radius);

                            result = areaCircle(radius);
                            printf("\n\t\tArea is %.2f m^2", result);
                            break;
                    default:
                            printf("\n\t\t\tInvalid option.\n");
                } // switch area ends here

                printf("\n\n\t\t\tWould you like to calculate Area again?\n"
                       "\t\t\tEnter 1 for YES or 2 for NO.\n"
                       "\t\t\t>> ");
                scanf("%d", &option);

                if (option == 1)
                {
                    continue;
                }
                else if (option == 2)
                {
                    printf("\n\t\t\tWould you like to go to the main menu?\n"
                           "\t\t\tEnter 1 for YES or 2 for NO.\n"
                           "\t\t\t>> ");
                    scanf("%d", &menu);

                    if (menu == 1)
                    {
                        main();
                    }
                    else if (menu == 2)
                    {
                        printf("\n\t\t\t******  Thank you for using this calculator. Goodbye.  ******\n\n");
                    }
                    return 0;
                }
            } while (choice == 2);
        
        }
        else if (choice == 3)
        {
            do {
                printf("\n\t\tWhat geometrical figure would you like to use for Volume?\n"
                        "\n\t\t1) Cube"
                        "\n\t\t2) Rectangular Prism"
                        "\n\t\t3) Triangular Pyramid"
                        "\n\t\t4) Sphere\n"
                        "\n\t\t>> ");
                scanf("%d", &figure);
                printf("\n\t\tPlease enter the following values in meters:\n");

                switch (figure)
                {
                    case 1:
                            printf("\n\t\tSide: ");
                            scanf("%f", &side);
                            side = validateInput(side);

                            result = volumeCube(side);
                            printf("\n\t\tVolume is %.2f m^3", result);
                            break;
                    case 2:
                            printf("\n\t\tLength: ");
                            scanf("%f", &length);
                            length = validateInput(length);

                            printf("\n\t\tWidth: ");
                            scanf("%f", &width);
                            width = validateInput(width);

                            printf("\n\t\tHeight: ");
                            scanf("%f", &height);
                            height = validateInput(height);

                            result = volumeRectangularPrism(length, width, height);
                            printf("\n\t\tVolume is %.2f m^3", result);
                            break;
                    case 3:
                            printf("\n\t\tLength of base: ");
                            scanf("%f", &lengthBase);
                            lengthBase = validateInput(lengthBase);

                            printf("\n\t\tWidth of base: ");
                            scanf("%f", &widthBase);
                            widthBase = validateInput(widthBase);

                            printf("\n\t\tHeight: ");
                            scanf("%f", &pyramidHeight);
                            pyramidHeight = validateInput(pyramidHeight);

                            result = volumeTriangularPyramid(pyramidHeight, lengthBase, widthBase);
                            printf("\n\t\tVolume is %.2f m^3", result);
                            break;
                    case 4:
                            printf("\n\t\tRadius: ");
                            scanf("%f", &radius);
                            radius = validateInput(radius);

                            result = volumeSphere(radius);
                            printf("\n\t\tVolume is %.2f m", result);
                            break;
                    default:
                            printf("\n\t\t\tInvalid option.\n");
                } // switch volume ends here

                printf("\n\n\t\t\tWould you like to calculate Volume again?\n"
                       "\t\t\tEnter 1 for YES or 2 for NO.\n"
                       "\t\t\t>> ");
                scanf("%d", &option);

                if (option == 1)
                {
                    continue;
                }
                else if (option == 2)
                {
                    printf("\n\t\t\tWould you like to go to the main menu?\n"
                           "\t\t\tEnter 1 for YES or 2 for NO.\n"
                           "\t\t\t>> ");
                    scanf("%d", &menu);

                    if (menu == 1)
                    {
                        main();
                    }
                    else if (menu == 2)
                    {
                        printf("\n\t\t\t******  Thank you for using this calculator. Goodbye.  ******\n\n");
                    }
                    return 0;
                }
            } while (choice == 3);
        }
    }

    printf("\n\t\t\t******  Thank you for using this calculator. Goodbye.  ******\n\n");
    return 0;
}
