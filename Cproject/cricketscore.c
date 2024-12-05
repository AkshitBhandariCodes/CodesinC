//Made a cricket scorecard as a project of PPS
#include <stdio.h>
#include <stdlib.h>

void display_result(int team1_runs, int team2_runs, int target, int total_balls, char team1[], char team2[], int team1_wickets, int team2_wickets);

int main() {
    int overs, total_overs;
    int total_balls, team1_runs = 0, team2_runs = 0;
    int team1_wickets = 10, team2_wickets = 10;
    int balls = 0;
    int target;
    
    // Team ke naam
    char team1[20], team2[20];
    
    // Kitne over ka match set krna hai 
    printf("Enter total overs to be played: ");
    scanf("%d", &total_overs);
    
    // Total balls 
    total_balls = total_overs * 6; 
    
    printf("\nEnter the batting team's name: ");
    scanf("%s", team1);
    
    printf("Enter the bowling team's name: ");
    scanf("%s", team2);
    
    // Pheli Bating
    printf("\n--- First Innings ---\n");
    printf("%s is batting, %s is bowling.\n", team1, team2);
    
    // Runs per ball
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
            balls--; // ball count nhi hogi 
        } else if (input[0] == 'n') {
            printf("No ball! 1 extra run added.\n");
            team1_runs++;
            balls--; // ball count nhi hogi 
        } else {
            int runs_on_ball = atoi(input);  //ASCII to Integer
            if (runs_on_ball < 0) {
                printf("Invalid input. Runs cannot be negative. Please try again.\n");
                balls--;  // ball count nhi hogi 
                continue;
            }
            team1_runs += runs_on_ball;
        }
    }
    
    target = team1_runs + 1;  // target set
    printf("\n%s set the target to %d runs.\n", team1, target);

    // doosri batting
    printf("\n--- Second Innings ---\n");
    printf("%s is batting, %s is bowling.\n", team2, team1);
    
   //Runs per ball for second innings
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
            balls--; // ball count nhi hogi 
        } else if (input[0] == 'n') {
            printf("No ball! 1 extra run added.\n");
            team2_runs++;
            balls--; // ball count nhi hogi 
        } else {
            int runs_on_ball = atoi(input); //ASCII to Integer
            if (runs_on_ball < 0) {
                printf("Invalid input. Runs cannot be negative. Please try again.\n");
                balls--;  // ball count nhi hogi 
                continue;
            }
            team2_runs += runs_on_ball;
        }
        
        // target is achieved
        if (team2_runs >= target) {
            printf("\n%s has achieved the target of %d runs.\n", team2, target);
            break;
        }
    }

    // result function call
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
