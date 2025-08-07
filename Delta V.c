#include <stdio.h>
#include <math.h>

int main(void)
{
    /* container counts per stage */
    int small, medium, semiLarge, large;
    int smallG, mediumG, semiLargeG, largeG;

    /* thrusters per stage */
    int thrustersSmall, thrustersMedium, thrustersLarge;

    float propellantMass = 0.0f;  /* total propellant mass for the stage  */
    float dryMassStage   = 0.0f;  /* dry mass for the stage               */
    float shipMass       = 0.0f;  /* total ship mass at stage start       */

    double isp            = 0.0;  /* average Isp for the stage            */
    double deltaVStage    = 0.0;  /* Δv produced by the stage             */
    double deltaVMission  = 0.0;  /* accumulated Δv for the mission       */

    int stageNumber   = 1;
    int keepGoing     = 1;        /* 1 = ask next stage, 0 = terminate    */

    while (keepGoing)
    {
        /* ---------- USER INPUT ------------------------------------------- */
        printf("\n----- New Stage %d -----\n", stageNumber);

        printf("Enter number of propellant containers for this stage\n");
        printf(" 1) Small        : ");  scanf("%d", &small);
        printf(" 2) Medium       : ");  scanf("%d", &medium);
        printf(" 3) Semi-Large   : ");  scanf("%d", &semiLarge);
        printf(" 4) Large        : ");  scanf("%d", &large);
        printf(" 5) Small-G (6 Wide)      : ");  scanf("%d", &smallG);
        printf(" 6) Medium-G (6-Wide)     : ");  scanf("%d", &mediumG);
        printf(" 7) Semi-Large-G (6-Wide) : ");  scanf("%d", &semiLargeG);
        printf(" 8) Large-G (6-Wide)      : ");  scanf("%d", &largeG);

        printf("\nEnter number of thrusters active in this stage\n");
        printf(" Small (Kolibri) : ");  scanf("%d", &thrustersSmall);
        printf(" Medium (Valiant): ");  scanf("%d", &thrustersMedium);
        printf(" Large (Hawk)    : ");  scanf("%d", &thrustersLarge);

        printf("\nTotal ship mass at start of this stage: ");
        scanf("%f", &shipMass);

        /* ---------- CALCULATIONS ----------------------------------------- */
        propellantMass = (small      *  5.0f)  + (medium      * 10.0f) +
                         (semiLarge  * 15.0f)  + (large       * 20.0f) +
                         (smallG     *  7.5f)  + (mediumG     * 15.0f) +
                         (semiLargeG * 22.5f)  + (largeG      * 30.0f);

        dryMassStage  = (small      *  0.5f)   + (medium      *  1.0f) +
                        (semiLarge  *  1.5f)   + (large       *  2.0f) +
                        (smallG     *  0.75f)  + (mediumG     *  1.5f) +
                        (semiLargeG *  2.25f)  + (largeG      *  3.0f);

        /* dry mass of the entire ship at the end of the burn */
        dryMassStage = shipMass - (propellantMass - dryMassStage);

        /* weighted average Isp */
        double thrustTotal =  (15.0 * thrustersSmall) +
                              (40.0 * thrustersMedium) +
                              (120.0 * thrustersLarge);

        double massFlow = (thrustersSmall * 0.057) +
                          (thrustersMedium * 0.1428) +
                          (thrustersLarge * 0.5);

        isp = thrustTotal / massFlow;

        deltaVStage   = log(shipMass / dryMassStage) * (isp * 9.8);
        deltaVMission += deltaVStage;

        /* ---------- OUTPUT ----------------------------------------------- */
        printf("\nStage Δv:           %.2f m/s\n", deltaVStage);
        printf("Total Δv after %d stage(s): %.2f m/s\n", stageNumber, deltaVMission);

        /* ---------- CONTINUE OR FINISH ----------------------------------- */
        printf("\nAdd another stage?  (1 = Yes, 0 = No): ");
        scanf("%d", &keepGoing);
        stageNumber++;
    }

    puts("\nProgram finished");
    return 0;
}
