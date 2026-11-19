#include <stdio.h>
#include <string.h>
int main()
{
    int mathsBooks = 10;
    int physicsBooks = 10;
    int chemistryBooks = 10;
    char role[20];
    char studentDomain[20];
    char accessDomain[20];
    char book[20];
    int i, valid;
    while(1)
    {
        printf("Enter no Role (admin/student/exit): ");
        scanf("%s", role);
        if(strcmp(role, "exit") == 0)
        {
            printf("Exiting System...\n");
            break;
        }
        if(strcmp(role, "admin") == 0)
        {
            printf("\nADMIN:\n");
            printf("Maths Books Remaining     : %d\n", mathsBooks);
            printf("Physics Books Remaining   : %d\n", physicsBooks);
            printf("Chemistry Books Remaining : %d\n", chemistryBooks);
            printf("Total Books Remaining     : %d\n",
                   mathsBooks + physicsBooks + chemistryBooks);
            printf("\nAdmin can access all 30 books.\n");
        }
        else if(strcmp(role, "student") == 0)
        {
            printf("Enter Your Domain (maths/physics/chemistry): ");
            scanf("%s", studentDomain);
            printf("Enter Domain To Access: ");
            scanf("%s", accessDomain);
            if(strcmp(studentDomain, accessDomain) != 0)
            {
                printf("\nERROR: ACCESS DENIED!\n");
                printf("You belong to %s domain.\n", studentDomain);
                printf("Cannot access %s books.\n", accessDomain);
                continue;
            }
            printf("\nAccess Granted\n");
            printf("Available Books:\n");
            if(strcmp(studentDomain, "maths") == 0)
            {
                for(i = 1; i <= 10; i++)
                {
                    printf("MBook%d\n", i);
                }
                printf("\nEnter Book To Borrow: ");
                scanf("%s", book);
                valid = 0;
                for(i = 1; i <= 10; i++)
                {
                    char temp[20];
                    sprintf(temp, "MBook%d", i);
 
                    if(strcmp(book, temp) == 0)
                    {
                        valid = 1;
                        break;
                    }
                }
                if(valid)
                {
                    printf("\nRequest Sent To Admin For %s\n", book);
                    printf("Admin Approved Request\n");
                    printf("%s Issued Successfully\n", book);
                    mathsBooks--;
                }
                else
                {
                    printf("ERROR: Invalid Maths Book!\n");
                }
            }
            else if(strcmp(studentDomain, "physics") == 0)
            {
                for(i = 1; i <= 10; i++)
                {
                    printf("PBook%d\n", i);
                }
                printf("\nEnter Book To Borrow: ");
                scanf("%s", book);
                valid = 0;
                for(i = 1; i <= 10; i++)
                {
                    char temp[20];
                    sprintf(temp, "PBook%d", i);
 
                    if(strcmp(book, temp) == 0)
                    {
                        valid = 1;
                        break;
                    }
                }
                if(valid)
                {
                    printf("\nRequest Sent To Admin For %s\n", book);
                    printf("Admin Approved Request\n");
                    printf("%s Issued Successfully\n", book);
                    physicsBooks--;
                }
                else
                {
                    printf("ERROR: Invalid Physics Book!\n");
                }
            }
            else if(strcmp(studentDomain, "chemistry") == 0)
            {
                for(i = 1; i <= 10; i++)
                {
                    printf("CBook%d\n", i);
                }
                printf("\nEnter Book To Borrow: ");
                scanf("%s", book);
                valid = 0;
                for(i = 1; i <= 10; i++)
                {
                    char temp[20];
                    sprintf(temp, "CBook%d", i);
                    if(strcmp(book, temp) == 0)
                    {
                        valid = 1;
                        break;
                    }
                }
                if(valid)
                {
                    printf("\nRequest Sent To Admin For %s\n", book);
                    printf("Admin Approved Request\n");
                    printf("%s Issued Successfully\n", book);
                    chemistryBooks--;
                }
                else
                {
                    printf("ERROR: Invalid Chemistry Book!\n");
                }
            }
        }
        else
        {
            printf("ERROR: Invalid Role!\n");
        }
    }
    return 0;
}