#include<stdio.h>
#include<stdint.h>
main()
{
    int name1,name2,name3,address,address1,address2,mobile1,mobile2,mobile3,index;

    printf("halting hunger\n");
    printf("service index\t\tservicename\n");
    printf("\n1 \t\t needer");
    printf("\n2 \t\t helper");
    printf("\n3 \t\t volunteer");
    printf("\n4 \t\t exit");
    printf("enter your choice:");
    scanf("%d",&index);
    switch(index)
    {
    case 1:
    printf("<---------------------------------halting hunger---------------------------------->\n");
    printf("\t\t\t NEEDER DETAILS\n");
    printf("\t\t\t-----------------------------------\n");

    printf("NAME                   :");
    scanf("%s",&name1);
    printf("address        :");
    scanf("%s %d",address);
    printf("mobile number : ");
    scanf("%d",&mobile1);
    int quan1;
     printf("quantity    :\n");
     scanf("%s",&quan1);
    printf("\nneeder details\n");
    printf("name    :%s\n",name1);
    printf("address    :%s %d\n",address);
    printf("mobile number   :%d\n",mobile1);
    printf("quantity:%d",quan1);
    break;
    case 2:
    printf("<---------------------------------halting hunger---------------------------------->\n");
    printf("\t\t\t HELPER DETAILS\n");
    printf("\t\t\t-----------------------------------\n");

    printf("NAME                   :");
    scanf("%s",&name2);
    printf("address        :");
    scanf("%s %d",address1);
    printf("mobile number : ");
    scanf("%d",&mobile2);
    int quan2,phoneno1;
    printf("quantity OF FOOD IS THERE:\n");
    scanf("%s",&quan2);
    printf("\nneeder details\n");
    printf("name    :%s\n",name1);
    printf("address    :%s %d\n",address1);
    printf("mobile number   :%d\n",mobile2);
    printf("quantity:%d",quan2);
    break;
    case 3:
    printf("<---------------------------------halting hunger---------------------------------->\n");
    printf("\t\t\t volinter DETAILS\n");
    printf("\t\t\t-----------------------------------\n");
    printf("NAME                   :");
    scanf("%s",&name3);
    printf("address        :");
    scanf("%s %d",address2);
    printf("mobile number : ");
    scanf("%d",&mobile3);
    int location;
    printf("location    :\n");
    scanf("%s",&location);
    printf("\nneeder details\n");
    printf("name    :%s\n",name3);
    printf("address    :%s %d\n",address2);
    printf("mobile number   :%d\n",mobile3);
    printf("location:%d",location);
    end:
        printf("thanku for using halting hunger");

    }





}
