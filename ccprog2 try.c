#include <stdio.h>

typedef struct {
    int priority;
    char name[50];
    char id[20];
    char dropOff[50];
} Passenger;

void fillEmbarkationCard(Passenger *p) {
    printf("\nFill Out Embarkation Card\n");

    do {
        printf("Enter Priority Number : ");
        scanf("%d", &p->priority);
        if (p->priority < 1 || p->priority > 6) {
            printf("? Invalid priority. Enter a value between 1-6.\n");
        }
    } while (p->priority < 1 || p->priority > 6);

    printf("Enter Name: ");
    scanf(" %[^\n]", p->name);  
    
    printf("Enter ID Number: ");
    scanf("%s", p->id);

    printf("Enter Drop-Off Point: ");
    scanf(" %[^\n]", p->dropOff);

    printf("\nEmbarkation Card Completed!\n");
}

void displayEmbarkationCard(Passenger p) {
    printf("\nEmbarkation Card Summary:\n");
    printf("Priority: %d\n", p.priority);
    printf("Name: %s\n", p.name);
    printf("ID Number: %s\n", p.id);
    printf("Drop-Off Point: %s\n", p.dropOff);
}

int main() {
    Passenger p;
    
    fillEmbarkationCard(&p);

    displayEmbarkationCard(p);

    return 0;
}

