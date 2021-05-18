#include<stdio.h>
main()
{
    int i=1000,j=2000,k=3000,l=4000,a=5000,m,pass,t,num,acn,tm1=2000,tm2=2000,tm3=2000,tm4=2000,tm5=2000,count,q;
    int p1=1,p2=2,p3=3,p4=4,p5=5;
    printf("Welcome To The ATM. \n");
    printf("Enter Your Id: ");
    scanf("%d",&m);
    if(m==i)
    {
        printf("Enter your Password: ");
        scanf("%d",&pass);
        if(pass==p1)
        {
           printf("You r successfully logged in\n");
           printf("Your Total Balance is: %d Taka",tm1);
           printf("\nDude What u wanna do?");
           printf("\nEnter 1 for Transaction");
           printf("\nEnter 2 for Withdraw\n");
           scanf("%d",&num);
           if(num==1){
            printf("Yo u r ready to go\n");
            printf("In which account u wanna transact?\n");
            printf("Enter The Account Number: ");
            scanf("%d",&acn);
            if(acn==3000||acn==2000||acn==4000||acn==5000){
                printf("\nHow much money u wanna transact: ");
                scanf("%d",&t);
            if(t>1000){
                printf("\nInsufficient Amount!");
            }
            else{
                    count=tm1-t;
                    printf("\nYour Transaction is done.");
                    printf("\nYour Current Balance is %d Taka",count);
            }
           }
           else
            printf("\nInvalid Account");
           }
            if(num==2)
            {
           printf("Yo u r ready to go");
           printf("\nHow  much u wanna withdraw: ");
           scanf("%d",&t);
           if(t>500){
            printf("Insufficient Balance!\n");
           }
           else{
                count =tm1-t;
           printf("Your Current Balance is %d Taka\n",count);
            printf("Your withdraw has successfully done");
           }
        }
        }
        else
            {
            printf("Wrong Password\n");
        }
    }
    else if (m==j)
    {
        printf("Enter your Password: ");
        scanf("%d",&pass);
        if(pass==p2)
        {
           printf("You r successfully logged in\n");
           printf("Your Total Balance is: %d Taka",tm2);
           printf("\nDude What u wanna do?");
           printf("\nEnter 1 for Transaction");
           printf("\nEnter 2 for Withdraw\n");
           scanf("%d",&num);
           if(num==1){
            printf("Yo u r ready to go\n");
            printf("In which account u wanna transact?\n");
            printf("Enter The Account Number: ");
            scanf("%d",&acn);
            if(acn==3000||acn==1000||acn==4000||acn==5000){
                printf("\nHow much money u wanna transact: ");
                scanf("%d",&t);
            if(t>1000){
                printf("\nInsufficient Amount!");
            }
            else{
                    count=tm2-t;
                    printf("\nYour Transaction is done.");
                    printf("\nYour Current Balance is %d Taka",count);
            }
           }
           else
            printf("\nInvalid Account");
           }
            if(num==2)
            {
           printf("Yo u r ready to go");
           printf("\nHow  much u wanna withdraw: ");
           scanf("%d",&t);
           if(t>500){
            printf("Insufficient Balance!\n");
           }
           else{
                count =tm2-t;
           printf("Your Current Balance is %d Taka\n",count);
            printf("Your withdraw has successfully done");
           }
        }
        }
        else
            {
            printf("Wrong Password\n");
    }
    }
    else if(m==k)
    {
        printf("Enter your Password: ");
        scanf("%d",&pass);
        if(pass==p3)
        {
           printf("You r successfully logged in\n");
           printf("Your Total Balance is: %d Taka",tm3);
           printf("\nDude What u wanna do?");
           printf("\nEnter 1 for Transaction");
           printf("\nEnter 2 for Withdraw\n");
           scanf("%d",&num);
           if(num==1){
            printf("Yo u r ready to go\n");
            printf("In which account u wanna transact?\n");
            printf("Enter The Account Number: ");
            scanf("%d",&acn);
            if(acn==2000||acn==1000||acn==4000||acn==5000){
                printf("\nHow much money u wanna transact: ");
                scanf("%d",&t);
            if(t>1000){
                printf("\nInsufficient Amount!");
            }
            else{
                    count=tm3-t;
                    printf("\nYour Transaction is done.");
                    printf("\nYour Current Balance is %d Taka",count);
            }
           }
           else
            printf("\nInvalid Account");
           }
            if(num==2)
            {
           printf("Yo u r ready to go");
           printf("\nHow  much u wanna withdraw: ");
           scanf("%d",&t);
           if(t>500){
            printf("Insufficient Balance!\n");
           }
           else{
                count =tm3-t;
           printf("Your Current Balance is %d Taka\n",count);
            printf("Your withdraw has successfully done");
           }
        }
        }
        else
            {
            printf("Wrong Password\n");
    }
    }
    else if (m==l)
    {
        printf("Enter your Password: ");
        scanf("%d",&pass);
        if(pass==p4)
        {
           printf("You r successfully logged in\n");
           printf("Your Total Balance is: %d Taka",tm4);
           printf("\nDude What u wanna do?");
           printf("\nEnter 1 for Transaction");
           printf("\nEnter 2 for Withdraw\n");
           scanf("%d",&num);
           if(num==1){
            printf("Yo u r ready to go\n");
            printf("In which account u wanna transact?\n");
            printf("Enter The Account Number: ");
            scanf("%d",&acn);
            if(acn==3000||acn==1000||acn==2000||acn==5000){
                printf("\nHow much money u wanna transact: ");
                scanf("%d",&t);
            if(t>1000){
                printf("\nInsufficient Amount!");
            }
            else{
                    count=tm4-t;
                    printf("\nYour Transaction is done.");
                    printf("\nYour Current Balance is %d Taka",count);
            }
           }
           else
            printf("\nInvalid Account");
           }
            if(num==2)
            {
           printf("Yo u r ready to go");
           printf("\nHow  much u wanna withdraw: ");
           scanf("%d",&t);
           if(t>500){
            printf("Insufficient Balance!\n");
           }
           else{
                count =tm4-t;
           printf("Your Current Balance is %d Taka\n",count);
            printf("Your withdraw has successfully done");
           }
        }
        }
        else
            {
            printf("Wrong Password\n");
    }
    }
    else if(m==a)
    {
        printf("Enter your Password: ");
        scanf("%d",&pass);
        if(pass==p5)
        {
           printf("You r successfully logged in\n");
           printf("Your Total Balance is: %d Taka",tm5);
           printf("\nDude What u wanna do?");
           printf("\nEnter 1 for Transaction");
           printf("\nEnter 2 for Withdraw\n");
           scanf("%d",&num);
           if(num==1){
            printf("Yo u r ready to go\n");
            printf("In which account u wanna transact?\n");
            printf("Enter The Account Number: ");
            scanf("%d",&acn);
            if(acn==3000||acn==1000||acn==4000||acn==2000){
                printf("\nHow much money u wanna transact: ");
                scanf("%d",&t);
            if(t>1000){
                printf("\nInsufficient Amount!");
            }
            else{
                    count=tm5-t;
                    printf("\nYour Transaction is done.");
                    printf("\nYour Current Balance is %d Taka",count);
            }
           }
           else
            printf("\nInvalid Account");
           }
            if(num==2)
            {
           printf("Yo u r ready to go");
           printf("\nHow  much u wanna withdraw: ");
           scanf("%d",&t);
           if(t>500){
            printf("Insufficient Balance!\n");
           }
           else{
                count =tm5-t;
           printf("Your Current Balance is %d Taka\n",count);
            printf("Your withdraw has successfully done");
           }
        }
       }
        else
            {
            printf("Wrong Password\n");
    }
    }
    else{
            printf("Check Ur Account Number Again.");
    }
    printf("\nThanks for using our ATM.");
}

