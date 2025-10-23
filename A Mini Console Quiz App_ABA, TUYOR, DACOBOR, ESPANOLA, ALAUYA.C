    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    char questions[10][100] = {
        "What is the correct data type for storing text?",
        "What does the int data type store?",
        "Which of the following stores a True or False value?",
        "What will be the data type of 3.14?",
        "Which of the following is used to take input from the user?",
        "Which symbol is used to end a statement in C?",
        "What is the correct syntax to output text in C?",
        "Which of the following is a loop in C?",
        "What header file is needed for printf() and scanf()?",
        "What is the index of the first element in an array?"};

    char choices[10][4][200] = {
        {"a) int",
        "b) string",
        "c) char",
        "d) float"},
        {"a) Decimal number",
        "b) Whole number",
        "c) Text",
        "d) True/False"},
        {"a) int",
        "b) char",
        "c) float",
        "d) bool"},
        {"a) integer",
        "b) string",
        "c) float",
        "d) char"},
        {"a) printf()",
        "b) scanf()",
        "c) input()",
        "d) output()"},
        {"a) ,",
        "b) .",
        "c) ;",
        "d) :"},
        {"a) print()",
        "b) echo()",
        "c) printf()",
        "d) cout<<"},
        {"a) repeat",
        "b) for",
        "c) loop",
        "d) iterate"},
        {"a) <stdio.h>",
        "b) <conio.h>",
        "c) <stdlib.h>",
        "d) <math.h>"},
        {"a) 1",
        "b) 0",
        "c) -1",
        "d) depends on compiler"}};

    char answers[10] = {'b', 'b', 'd', 'c', 'b', 'c', 'c', 'b', 'a', 'b'};
    void start_quiz(char username[])
    {
        FILE *records_file = fopen("records.txt", "a+");

        printf("\n\tHello %s! You may now start answering the questions.\n", username);

        char answer;
        int score = 0;
        for (int i = 0; i < 10; i++)
        {
            printf("\n\t\t\t%d: %s\n", (i + 1), questions[i]);

            for (int j = 0; j < 4; j++)
            {
                printf("\t\t\t\t%s\n", choices[i][j]);
            }

            printf("\t\t\tEnter your answer: ");
            scanf(" %c", &answer);
            if (answer == answers[i])
            {
                score++;
            }
        }

        printf("\n\t\t---------------------------- RESULTS -----------------------\n");
        printf("\t\t\tCorrect answers:\n");
        for (int j = 0; j < 10; j++)
        {
            printf("\t\t\t%d: %c\n", (j + 1), answers[j]);
        }

        printf("\t\t\tYour final score: %d out of 10\n", score);
        printf("\t\t\tScore is recorded! Thank you for taking the quiz.\n");
        printf("\t\t------------------------------------------------------------\n");

        fprintf(records_file, "\nStudent: %s, Score: %d", username, score);
        fclose(records_file);
    }

    void read_records()
    {
        FILE *file = fopen("records.txt", "r");

        if (!file)
        {
            printf("\t\t\tNo records found.\n");
        }
        else
        {
            char lines[1024];
            printf("\n\n\t\t-----------------------------------------------------\n");
            printf("\t\t\tRecords\n");
            printf("\t\t-----------------------------------------------------\n");

            while (fgets(lines, sizeof(lines), file))
            {
                printf("\t\t%s\n", lines);
            }
        }
        printf("\n\n");
        fclose(file);
    }

    void login_as_prof()
    {
        char id_number[50];
        char password[50];

        char account_id[] = "2025300703";
        char account_pass[] = "1001";
        printf("\n\n\t\t--------------------------------------------------------------\n");
        printf("\t\t\tTo view student's scores you must login as a prof");
        printf("\n\t\t--------------------------------------------------------------\n");

        printf("\t\t\tID Number: ");
        scanf("%50s", id_number);
        printf("\t\t\tPassword: ");
        scanf("%50s", password);

        if (strcmp(id_number, account_id) == 0 && strcmp(password, account_pass) == 0)
        {
            printf("\t\t\tLogin successfully\n");
            read_records();
        }
        else
        {
            printf("\t\t\tInvalid credentials.\n");
        }
    }

    int main()
    {
        char username[50];

        while (1)
        {
            int choice;

            printf("\n\t\t--------------------------------------------------------------");
            printf("\n\t\t\t\tWelcome to the Console Quiz App!");
            printf("\n\t\t--------------------------------------------------------------\n");
            printf("\t\t\t1 -> View scores\n");
            printf("\t\t\t2 -> Take the quiz\n");
            printf("\t\t\t3 -> Exit\n");

            printf("\t\t\t[]: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                login_as_prof();
            }
            else if (choice == 3)
            {
                printf("\t\t\tThank you for using this program!\n");
                break;
            }
            else
            {
                while (1)
                {
                    printf("\n\t\t--------------------------------------------------------------");
                    printf("\n\t\t\t\t\t  IT1R6 QUIZ!");
                    printf("\n\t\t--------------------------------------------------------------\n");
                    printf("\t\t\tEnter 'exit' to end the program.\n");
                    printf("\t\t\tEnter your surname: ");
                    getchar();
                    fgets(username, sizeof(username), stdin);
                    username[strcspn(username, "\n")] = '\0';

                    char lowercased_username[50];
                    strcpy(lowercased_username, strlwr(username));

                    if (strcmp(lowercased_username, "exit") == 0)
                    {
                        printf("\t\t\tThank you for taking up the quiz! Good Bye :)!");
                        break;
                    }

                    start_quiz(username);
                }
            }
        }
        return 0;
    }