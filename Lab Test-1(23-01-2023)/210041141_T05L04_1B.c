#include<stdio.h>
#include<math.h>

#define MAX_LEN 500
struct city{
    char name[MAX_LEN];
    float x_coord;
    float y_coord;
    float distance;
};

void swap(struct city city1[], struct city city2[])
{
    struct city temp = *city1;
    *city1 = *city2;
    *city2 = temp;
}

// sort ascending
void bubble_sort_asc(struct city target[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            
            // If the total mark for each student is unique: students with higher marks get a better rank
            if (target[j].distance > target[j + 1].distance)
            {
                swap(&target[j], &target[j + 1]);
            }
}


int main(){
    struct city cities[MAX_LEN];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %f %f", &cities[i].name, &cities[i].x_coord, &cities[i].y_coord);
        cities[i].distance = sqrt(pow(abs(cities[0].x_coord - cities[i].x_coord), 2) + pow(abs(cities[0].y_coord - cities[i].y_coord), 2));
    }

    bubble_sort_asc(cities, n);
    
    for(int j = 0; j < n; j++){
        printf("%s %.2f\n", cities[j].name, cities[j].distance);
    }
}