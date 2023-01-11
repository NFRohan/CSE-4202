#include <stdio.h>

// declare student struct
struct stud
{
    char name[50];
    int numML;
    int numDS;
    int numNet;
    int totalnum;
} student[50];

// swap
void swap(struct stud student1[], struct stud student2[])
{
    struct stud temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}

// sort descending
void bubble_sort_des(struct stud target[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            
            // If the total mark for each student is unique: students with higher marks get a better rank
            if (target[j].totalnum < target[j + 1].totalnum)
            {
                swap(&target[j], &target[j + 1]);
            }
            
            // If total marks are the same, then students with higher marks in Machine Learning get a better rank.
            else if (target[j].totalnum == target[j + 1].totalnum)
            {
                if (target[j].numML < target[j + 1].numML)
                {
                    swap(&target[j], &target[j + 1]);
                }
            }
            
            // If total marks are the same and marks in Machine Learning are also the same, then students with better marks in Data Structures get a better rank.
            else if (target[j].totalnum == target[j + 1].totalnum)
                if (target[j].numML == target[j + 1].numML)
                {
                    if (target[j].numDS < target[j + 1].numDS)
                        swap(&target[j], &target[j + 1]);
                }
}

int main()
{

    int studentCount;
    // get number of students
    scanf("%d", &studentCount);

    // fill array with data
    for (int i = 0; i < studentCount; i++)
    {
        scanf("%s %d %d %d", &student[i].name, &student[i].numML, &student[i].numDS, &student[i].numNet);
        student[i].totalnum = student[i].numML + student[i].numDS + student[i].numNet;
    }

    // sort array
    bubble_sort_des(student, studentCount);
    printf("\n");
    
    // print array
    for (int j = 0; j < studentCount; j++)
    {
        printf("%d %s\n", (j + 1), student[j].name);
    }
}