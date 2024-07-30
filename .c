#include <stdio.h>
#include <string.h>

// Funktion zur Ausführung der Lotterie
void Nummer(){
    int zahl1, zahl2, zahl3;
    printf("Bitte wähle eine Zahl zwischen 1 und 49: ");
    scanf("%i", &zahl1);
    printf("Bitte wähle eine Zahl zwischen 1 und 49: ");
    scanf("%i", &zahl2);
    printf("Bitte wähle eine Zahl zwischen 1 und 49: ");
    scanf("%i", &zahl3);
    
    // Gewinnzahlen: Zahl1 ist 4, Zahl2 ist 7, Zahl3 ist 19
    if (zahl1 > 49 || zahl2 > 49 || zahl3 > 49){
        printf("Leider hast du eine falsche Zahl eingegeben\n\n");
        return; // Beendet die Funktion, wenn eine falsche Zahl eingegeben wurde
    }
    if (zahl1 == 4 && zahl2 == 7 && zahl3 == 19){
        printf("Herzlichen Glückwunsch, du hast 100€ gewonnen\n\n");
    } else if ((zahl1 == 4 && zahl2 == 7) || (zahl1 == 4 && zahl3 == 19) || (zahl2 == 7 && zahl3 == 19)){
        printf("Herzlichen Glückwunsch, du hast 70€ gewonnen\n\n");
    } else if (zahl1 == 4 || zahl2 == 7 || zahl3 == 19){
        printf("Herzlichen Glückwunsch, du hast 30€ gewonnen\n\n");
    } else{
        printf("Leider hast du verloren...\n\n");
    }
}

// Funktion zur Abfrage, ob der Spieler nochmal spielen möchte
int Fragestellen(){
    char antwort[4];
    printf("Möchten Sie nochmal spielen? (Ja/Nein): ");
    scanf("%4s", antwort);
    if (strcmp(antwort, "Ja") == 0 || strcmp(antwort, "ja") == 0){
        return 1; 
    } else{
        printf("Dankeschön, dass Sie hier waren\n");
        return 0; // Beendet das Spiel
    }
}

// Hauptfunktion
int main() {
    printf("Willkommen in der Lotterie!\n\n");
    
    while (1) { 
        Nummer();
        if (Fragestellen() == 0) { 
            break;
        }
    }
    
    return 0;
}
