#include<stdio.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "Modi"
#define CANDIDATE2 "Rahul"
#define CANDIDATE3 "Obama"
#define CANDIDATE4 "Putin"

int votes1=0 , votes2=0,  votes3=0, votes4=0, spoiledVotes=0;

void castVote()
{
    int ch;
    printf("\n\n=====CHOOSE YOUR CANDIDATE=====\n\n");
    printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);
    printf("\n 5. %s", "None of these");

    printf("\n\nMake Your Choice:  ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: votes1++;break;
        case 2: votes2++;break;
        case 3: votes3++;break;
        case 4: votes4++;break;
        case 5: spoiledVotes++;break;
        default: printf("Error!! Wrong choice.....Please Retry!");
        getchar();
    }
    printf("\n++++++++THANKS FOR YOUR VOTE++++++++");
}

void votesCount()
{
    printf("\n\n=====VOTE STATISTICS=====");
    printf("\n %s - %d", CANDIDATE1, votes1);
    printf("\n %s - %d", CANDIDATE2, votes2);
    printf("\n %s - %d", CANDIDATE3, votes3);
    printf("\n %s - %d", CANDIDATE4, votes4);
    printf("\n %s - %d", "Spoiled Votes", spoiledVotes);
}

void leadingCandidate()
{
    printf("\n\n=====LEADING CANDIDATE=====\n\n");
    if(votes1>votes2 && votes1>votes3 && votes1>votes4)
        printf("[%s]",CANDIDATE1);
    else if(votes2>votes1 && votes2>votes3 && votes2>votes4)
        printf("[%s]",CANDIDATE2);
    else if(votes3>votes1 && votes3>votes2 && votes3>votes1)
        printf("[%s]",CANDIDATE3);
    else if(votes4>votes1 && votes4>votes2 && votes4>votes1)
        printf("[%s]",CANDIDATE4);
    else
        printf("-----WARNING !!! NO WIN SITUATION-----");
}

int main()
{
    int i;
    int ch;

    do{
        printf("\n\n=====WELCOME TO ELECTION=====");
        printf("\n\n 1. Cast The Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find Leading Candidate");
        printf("\n 0. Exit");

        printf("\n\nPlease enter your choice:  ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: castVote();break;
            case 2: votesCount();break;
            case 3: leadingCandidate();break;
            default: printf("\n Error: Invalid Choice");
        }
    }while(ch!=0);
    getchar();
    return 0;
}