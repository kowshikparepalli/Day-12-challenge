#include <stdio.h>
int main()
{
    int num_students, i, choice, last_student = 0;
    float sub1, sub2, sub3, total, avg, class_total = 0, class_avg = 0, highest_avg = 0, lowest_avg = 0, pass_count =0, fail_count = 0, student_no = 0, last_avg = 0;
    //input
    printf("Enter number of students = ");
    scanf("%d",&num_students);
    i = 1;
    while(i <= num_students)
    {
        printf("Enter the marks of sub1 = ");
        scanf("%f",&sub1);
        printf("Enter the marks of sub2 = ");
        scanf("%f",&sub2);
        printf("Enter the marks of sub3 = ");
        scanf("%f",&sub3);

        total = sub1 + sub2 + sub3;
        avg = total/3.0;
        class_total = class_total + avg;
        if (avg > highest_avg)
        highest_avg = avg;
        if (avg < lowest_avg)
        lowest_avg = avg;
        if (avg >= 50)
        pass_count++;
        else
        fail_count++;
        last_avg = avg;
        last_student = i;
        i++;
    }
    while(1)
    {
        printf("1. View All Results\n");
        printf("2. View Class Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1)
        {
            int n, j;
            float s1, s2, s3, t, a;
            j = 1;
            while (j <= num_students)
            {
                printf("Enter the marks of s1 =" );
                scanf("%d",&s1);
                printf("Enter the marks of s2 = ");
                scanf("%d",&s2);
                printf("Enter the marks of s3 = ");
                scanf("%d",&s3);
                t = s1 + s2 + s3;
                a = t/3.0;
                printf("Student %d: Avg = %.1f → ", j, a);
                if (a >= 90)
                    printf("Grade A+\n");
                else if (a >= 80)
                    printf("Grade A\n");
                else if (a >= 70)
                    printf("Grade B\n");
                else if (a >= 60)
                    printf("Grade C\n");
                else if (a >= 50)
                    printf("Grade D\n");
                else
                    printf("Fail\n");
                    j++;
            }
        }
                else if (choice == 2)
                {
                class_avg = class_total/num_students;
                printf("Total Students: %d\n", num_students);
                printf("Passed: %d\n", pass_count);
                printf("Failed: %d\n", fail_count);
                printf("Class Average: %.1f\n", class_avg);
                printf("Highest Average: %.1f\n", highest_avg);
                printf("Lowest Average: %.1f\n", lowest_avg);
                }
                else if(choice == 3)
                {
                    printf("Total Students: %d\n", num_students);
                    printf("Final Class Average: %.1f\n", class_total / num_students);
                    printf("Highest Average: %.1f\n", highest_avg);
                    printf("Lowest Average: %.1f\n", lowest_avg);
                    break;
                }
                else
                {
                    printf("invalid choice");
                }
            
        
    }
    return 0;
}