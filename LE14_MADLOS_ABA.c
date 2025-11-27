#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int id, choice = 1;
    char name[100], section[50];

    fp = fopen("student_records.txt", "a");
    if (fp == NULL) {
        printf("ERROR! Unable to open the file.\n");
        return 1;
    }

    while (choice == 1) {
        printf("Enter Student Number: ");
        scanf("%d", &id);
        getchar();

        printf("Enter Complete Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '0';

        printf("Enter Section: ");
        fgets(section, sizeof(section), stdin);

        fprintf(fp, "ID Number: %d", id);
        fprintf(fp, "\nComplete Name: %s", name);
        fprintf(fp, "\nSection: %s\n\n", section);

        printf("\nRecord added and saved successfully.\n\n");
        
        printf("----------------------------------------------------\n");
        printf("Add another student? [Enter 1 for Yes, 0 for No]: ");
        scanf("%d", &choice);
        getchar();
        printf("\n");
    }

    fclose(fp);

    printf("All student records have been saved.\n");

    return 0;
}
