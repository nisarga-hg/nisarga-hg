
#include <stdio.h>

int main()
{
    int answer;
    char choice;
    int score;

    do
    {
        score = 0;

        printf("===== QUIZ GAME =====\n");
        printf("Instructions:\n");
        printf("1. There are 5 questions.\n");
        printf("2. Each question has 4 options (1-4).\n");
        printf("3. Enter the correct option number.\n");

        printf("\nAre you ready? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y')
        {
            printf("Okay, come back later!\n");
            return 0;
        }

        /* Question 1 */
        printf("\nQuestion 1:\n");
        printf("2 + 3 = ?\n");
        printf("1) 4   2) 5   3) 6   4) 7\n");

        while (1)
        {
            printf("Enter your answer (1-4): ");

            if (scanf("%d", &answer) != 1)
            {
                printf("Invalid input! Enter a number.\n");
                while (getchar() != '\n');
                continue;
            }

            if (answer < 1 || answer > 4)
            {
                printf("Invalid option! Choose 1-4.\n");
                continue;
            }

            break;
        }

        if (answer == 2)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }

        /* Question 2 */
        printf("\nQuestion 2:\n");
        printf("10 - 5 = ?\n");
        printf("1) 4   2) 5   3) 6   4) 7\n");

        while (1)
        {
            printf("Enter your answer (1-4): ");

            if (scanf("%d", &answer) != 1)
            {
                printf("Invalid input! Enter a number.\n");
                while (getchar() != '\n');
                continue;
            }

            if (answer < 1 || answer > 4)
            {
                printf("Invalid option! Choose 1-4.\n");
                continue;
            }

            break;
        }

        if (answer == 2)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }

        /* Question 3 */
        printf("\nQuestion 3:\n");
        printf("3 * 3 = ?\n");
        printf("1) 8   2) 5   3) 9   4) 7\n");

        while (1)
        {
            printf("Enter your answer (1-4): ");

            if (scanf("%d", &answer) != 1)
            {
                printf("Invalid input! Enter a number.\n");
                while (getchar() != '\n');
                continue;
            }

            if (answer < 1 || answer > 4)
            {
                printf("Invalid option! Choose 1-4.\n");
                continue;
            }

            break;
        }

        if (answer == 3)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }

        /* Question 4 */
        printf("\nQuestion 4:\n");
        printf("20 / 4 = ?\n");
        printf("1) 4   2) 5   3) 6   4) 7\n");

        while (1)
        {
            printf("Enter your answer (1-4): ");

            if (scanf("%d", &answer) != 1)
            {
                printf("Invalid input! Enter a number.\n");
                while (getchar() != '\n');
                continue;
            }

            if (answer < 1 || answer > 4)
            {
                printf("Invalid option! Choose 1-4.\n");
                continue;
            }

            break;
        }

        if (answer == 2)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }

        /* Question 5 */
        printf("\nQuestion 5:\n");
        printf("29 + 3 = ?\n");
        printf("1) 44   2) 38   3) 35   4) 32\n");

        while (1)
        {
            printf("Enter your answer (1-4): ");

            if (scanf("%d", &answer) != 1)
            {
                printf("Invalid input! Enter a number.\n");
                while (getchar() != '\n');
                continue;
            }

            if (answer < 1 || answer > 4)
            {
                printf("Invalid option! Choose 1-4.\n");
                continue;
            }

            break;
        }

        if (answer == 4)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }

        printf("\n=====================================\n");
        printf("Quiz completed!\n");
        printf("Your score: %d/5\n", score);
        printf("=====================================\n");

        while (1)
        {
            printf("Do you want to play again? (y/n): ");

            if (scanf(" %c", &choice) != 1)
            {
                return 0;
            }

            if (choice == 'y' || choice == 'Y' ||
                choice == 'n' || choice == 'N')
            {
                break;
            }

            printf("Invalid choice! Enter y or n.\n");
        }

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for playing!\n");

    return 0;
}
