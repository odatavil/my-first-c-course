#include <stdio.h>
#include <stdlib.h>

void formattedOutput() {
    char characterName[50];
    int characterAge;

    printf("Enter the character's name: ");
    fgets(characterName, sizeof(characterName), stdin);

    printf("Enter the character's age: ");
    scanf("%d", &characterAge);

    printf("\n--- Story ---\n");
    printf("There once was a person named %s", characterName);
    printf("They were %d years old.\n", characterAge);
    printf("They really liked the name %s", characterName);
    printf("but did not like being %d.\n", characterAge);
}
