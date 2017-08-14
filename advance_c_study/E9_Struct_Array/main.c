#include <stdio.h>

struct weather {
    char day[10];
    float temp;
};

void sortWeather(struct weather week[]);

int main()
{

    struct weather week[7] = {
            { "Sunday", 72.5 },
            { "Monday", 68.4 },
            { "Tuesday", 75.0 },
            { "Wednesday", 73.8 },
            { "Thursday", 65.1 },
            { "Friday", 72.8 },
            { "Saturday", 75.2 }
    };
    int x;

    week[1] = week[5];

    puts("This week's forecast:");
    for(x=0;x<7;x++)
        printf("%10s %.1f degrees\n",
               week[x].day,
               week[x].temp);

    puts("Sort the temperate with coolest weather first: \n");
    sortWeather(week);
    for(x=0;x<7;x++)
        printf("%10s %.1f degrees\n",
               week[x].day,
               week[x].temp);

    return(0);
}

void sortWeather(struct weather week[]){
    int i,j;
    struct weather temp;
    for (i=6; i>=1; i--){
        for (j=i-1; j>=0; j--){
            if (week[i].temp <week[j].temp){
                temp = week[i];
                week[i] = week[j];
                week[j] = temp;
            }
        }
    }
}