#include <stdio.h>
#include <stdlib.h>

void display_result(int team1_runs, int team2_runs, int target, int total_balls, char team1[], char team2[], int team1_wickets, int team2_wickets);

int main() {
    int overs, total_overs;
    int total_balls, team1_runs = 0, team2_runs = 0;
    int team1_wickets = 10, team2_wickets = 10;
    int balls = 0;
    int target;
    
    // Declare team names
    char team1[20], team2[20];
    
    // Get match details from user
    printf("Enter total overs to be played: ");
    scanf("%d", &total_overs);
    
    total_balls = total_overs * 6; // Total balls = overs * 6
    
    printf("\nEnter the batting team's name: ");
    scanf("%s", team1);
    
    printf("Enter the bowling team's name: ");
    scanf("%s", team2);
    
    // First innings: Batting team sets the target
    printf("\n--- First Innings ---\n");
    printf("%s is batting, %s is bowling.\n", team1, team2);
    
    // Ask user to enter runs for each ball
    for (balls = 1; balls <= total_balls && team1_wickets > 0; balls++) {
        printf("Enter runs for ball %d (or enter 'o' for out, 'w' for wide, 'n' for no-ball): ", balls);
        char input[10];
        scanf("%s", input);
        
        if (input[0] == 'o') {
            printf("Batter is out!\n");
            team1_wickets--;
        } else if (input[0] == 'w') {
            printf("Wide ball! 1 extra run added.\n");
            team1_runs++;
            balls--; // Don't count wide ball as a legitimate delivery
        } else if (input[0] == 'n') {
            printf("No ball! 1 extra run added.\n");
            team1_runs++;
            balls--; // Don't count no ball as a legitimate delivery
        } else {
            int runs_on_ball = atoi(input);
            if (runs_on_ball < 0) {
                printf("Invalid input. Runs cannot be negative. Please try again.\n");
                balls--;  // Re-enter the current ball
                continue;
            }
            team1_runs += runs_on_ball;
        }
    }
    
    target = team1_runs + 1;  // Set the target for team2 to chase
    printf("\n%s set the target to %d runs.\n", team1, target);

    // Second innings: Team2 chases the target
    printf("\n--- Second Innings ---\n");
    printf("%s is batting, %s is bowling.\n", team2, team1);
    
    // Ask user to enter runs for each ball
    for (balls = 1; balls <= total_balls && team2_wickets > 0; balls++) {
        printf("Enter runs for ball %d (or enter 'o' for out, 'w' for wide, 'n' for no-ball): ", balls);
        char input[10];
        scanf("%s", input);
        
        if (input[0] == 'o') {
            printf("Batter is out!\n");
            team2_wickets--;
        } else if (input[0] == 'w') {
            printf("Wide ball! 1 extra run added.\n");
            team2_runs++;
            balls--; // Don't count wide ball as a legitimate delivery
        } else if (input[0] == 'n') {
            printf("No ball! 1 extra run added.\n");
            team2_runs++;
            balls--; // Don't count no ball as a legitimate delivery
        } else {
            int runs_on_ball = atoi(input);
            if (runs_on_ball < 0) {
                printf("Invalid input. Runs cannot be negative. Please try again.\n");
                balls--;  // Re-enter the current ball
                continue;
            }
            team2_runs += runs_on_ball;
        }
        
        // If the target is achieved, end the game early
        if (team2_runs >= target) {
            printf("\n%s has achieved the target of %d runs.\n", team2, target);
            break;
        }
    }

    // Display the result of the match
    display_result(team1_runs, team2_runs, target, total_balls, team1, team2, team1_wickets, team2_wickets);

    return 0;
}

void display_result(int team1_runs, int team2_runs, int target, int total_balls, char team1[], char team2[], int team1_wickets, int team2_wickets) {
    printf("\nFinal Score:\n");
    printf("%s runs: %d (Wickets fallen: %d)\n", team1, team1_runs, 10 - team1_wickets);
    printf("%s runs: %d (Wickets fallen: %d)\n", team2, team2_runs, 10 - team2_wickets);
    
    if (team2_runs == target) {
        printf("\nMatch Result: DRAW (Scores level at the end of the overs)\n");
    }
    else if (team2_runs > team1_runs) {
        printf("\n%s wins by %d runs.\n", team2, team2_runs - team1_runs);
    }
    else {
        printf("\n%s wins by %d runs.\n", team1, team1_runs - team2_runs);
    }
}
