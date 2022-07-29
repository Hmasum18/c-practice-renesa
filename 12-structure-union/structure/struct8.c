#include <stdio.h>
#include<string.h>

struct player {
    char name[80];
    int matchPlayed;
    int goalScored;
    int goalConceded;
    char position[20];
};

struct team {
    char name[80];
    int matchPlayed;
    int goalScored;
    int goalConceded;
    int matchesWon;
    int matchesDrawn;
    int matchesLost;
    int totalPoint;
    struct player goalKeeper;
    struct player forward;
    // for 11 players
    // struct player players[11];
};

int main() {
    struct player gk;
    strcpy(gk.name, "Emiliano_Martinez");
    gk.matchPlayed = 10;
    gk.goalScored = 0;
    gk.goalConceded = 2;
    strcpy(gk.position, "GoalKeeper");
    struct player fw = {"Messi", 10, 10, 0, "Forward"};
    struct team t;
    strcpy(t.name, "Argentina");
    t.matchPlayed = 10;
    t.goalScored = 25;
    t.goalConceded = 2;
    t.matchesWon = 10;
    t.matchesDrawn = 0;
    t.matchesLost = 0;
    t.totalPoint = 30;
    t.goalKeeper = gk;
    t.forward = fw;
    printf("%s %s %s\n", t.name, t.goalKeeper.name, t.forward.name);
    return 0;
}
