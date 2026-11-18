#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    const char password[] = "admin";  // Mot de passe faible pour l'exemple

    printf("Entrez le mot de passe : ");
    scanf("%19s", input);

    // Illustration du if / else
    if (strcmp(input, password) == 0) {
        printf("Accès autorisé.\n");
    } else {
        printf("Accès refusé ! Tentative suspecte.\n");
    }

    return 0;
}

