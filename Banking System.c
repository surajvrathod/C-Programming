#include<stdio.h>
//#include<conio.h>
main(){
    int at,b,co=0,amt,fa=0,kk=0,mm=0,sr=0;
    char nom[50]="Not Registered";
    float bal=0;
    long long int an,ps;
    while(1>0){
            int count=0;
    printf("\n                                   Welcome in State Bank of India\n");
    printf("  Select Your Account Type: ");
    printf("\n  1. Saving \n  2. Current\n");
    scanf("%d",&at);
    while(co==0){
    printf("\n  Enter Account number: ");
    scanf("%lld",&an);
    printf("\n        Enter Password: ");
    scanf("%lld",&ps);
    if(an==1111 && ps==1111 || an==2222 && ps==2222 || an==3333 && ps==3333|| an==4444 && ps==4444){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n Logged in Successfully\n");
    re:
    printf("\n 1. Account Details\n");
    printf(" 2. Deposit Money\n");
    printf(" 3. Withdraw Money\n");
    printf(" 4. Account Statements\n");
    printf(" 5. E-Services/Request\n");
    printf(" 6. Help\n");
    printf(" 7. Log Out\n\n\n");
    co++;
    }
    else{
        printf("\n  Please Enter Correct Credentials !!!\n");
        co==0;
    }
    }

   if(an==1111){
        bal=48562.65;
    }
    if(an==2222){
        bal=55965.59;
    }
    if(an==3333){
        bal=20565.59;
    }
    if(an==4444){
        bal=85565.59;
    }

while(count==0){
            scanf("%d",&b);

    switch(b){
    case 1:
        if(an==1111){
        printf(" Account No:       %lld",an);
        printf("\n Account Holder:   Mr.Warren Buffet");
        if(at==1){
            printf("\n Account Type:     Saving - Singly Operated");
        }
        else
            printf("\n Account Type:     Current - Business Account");
        printf("\n Account Balance=  %.2f INR\n",bal);
        printf(" Nominee:          %s\n",nom);
    }
    if(an==2222){
        printf(" Account No:      %lld",an);
        printf("\n Account Holder:  Mr.Elon Musk");
        if(at==1){
            printf("\n Account Type:    Saving - Singly Operated");
        }
        else{
            printf("\n Account Type:    Current - Joint");
        }
        printf("\n Account Balance= %.2f INR\n",bal);
        printf(" Nominee:          %s\n",nom);
    }
    if(an==3333){
        printf(" Account No:      %lld",an);
        printf("\n Account Holder:  Mr.Jeff Bezos");
        if(at==1){
            printf("\n Account Type:    Saving - Singly Operated");
        }
        else{
            printf("\n Account Type:    Current - Joint");
        }
        printf("\n Account Balance= %.2f INR\n",bal);
        printf(" Nominee:          %s\n",nom);
    }
     if(an==4444){
        printf(" Account No:       %lld",an);
        printf("\n Account Holder:   Mr.Sundar Pichai");
        if(at==1){
            printf("\n Account Type:     Saving - Singly Operated");
        }
        else
            printf("\n Account Type:     Current - Business Account");
        printf("\n Account Balance=  %.2f INR\n",bal);
        printf(" Nominee:          %s\n",nom);
    }
        break;
    case 2:
        printf(" Enter Amount: ");
        scanf("%d",&amt);
        printf(" \n Money Deposited successfully");
        bal=bal+amt;
        printf(" \n Available Balance: %.2f\n",bal);
        break;
    case 3:
        printf(" Enter Amount: ");
        scanf("%d",&amt);
        printf(" \n Money Withdraw successfully");
        bal=bal-amt;
        printf(" \n Available Balance: %.2f\n",bal);
        break;
    case 4:
        printf(" No Account Statements Available for your Account\n");
        break;
    case 5:
        printf("\nRequest/ Services\n\n");
        printf("1. ATM Card Services");
        printf("\n2. Online Deposits FD/SD");
        printf("\n3. Check Book Request");
        printf("\n4. New Passbook Request");
        printf("\n5. Add Nominee online");
        printf("\n6. Transfer Account\n");
        printf("7. Exit\n");
        while(mm==0){
        scanf("%d",&sr);
        if(sr==1){
            printf("\n\n   ATM Request Send Successfully\n");
        }
        else if(sr==3){
            printf("\n\n   New Checkbook Request Send Successfully\n");
            }
            else if(sr==4){
                    printf("\n\n   New Passbook Request Send Successfully\n");
            }
            else if(sr==2){
                    printf("\n\n   This Facility Not Available Now, Sorry for Inconvience\n");
            }
            else if(sr==5){
                    printf("Enter Nominee Name: ");
                    scanf("%s",nom);
                    printf("\n   Nominee Registered Successfully\n   You can check in Account Details\n");
            }
            else if(sr==6){
                    printf("\n\n   Please Visit Nearest SBI Branch\n");
            }
            else if(sr==7){
                mm==1;
                goto re;
            }
            else{
                printf("\n   Ohho!! %d: Not Found\n",sr);
            }
        }
        break;

    case 6:
        printf("Costemer Support Number: +918888888888\n Branch STD No.293-896541\n Email: sbicprogram.gmail.com");
        printf("\nFAQ's\n    1. Account Related Problems such as, Open Account, Block Account");
        printf("\n    2. ATM Related Problems such as, Request ATM, Block ATM, ATM Not delivered");
        printf("\n    3. Any Other Problems Contacts to Branch\n");
        printf("    4. Exit\n");
        while(kk==0){
        scanf("%d",&fa);
        if(fa==1){
            printf("\n\n   You can open account Offline/ Online mode\n   You can block Account by calling on this number:2222\n");
        }
        else if(fa==2){
            printf("\n\n   You can Request using Online banking\n   You can block ATM by calling on this number:2222\n   If ATM Not Delivered Visit Postman\n");
            }
            else if(fa==3){
                    printf("\n\n   For Other queries visit Branch and call on this number:2222\n");
            }
            else if(fa==4){
                kk==1;
                goto re;
            }
            else{
                printf("\n   Ohho!! %d: Not Found\n",fa);
            }
        }

        break;
    case 7:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\n    Logged Out Successfully!!!  Thank You For Using SBI Services.\n\n");
        count++;
        co=0;


    }
    }
    }
}
