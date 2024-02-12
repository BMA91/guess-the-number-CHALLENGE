#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand (time(0));
  int num = (rand()% 100) ;
  char name[10];
  printf("player 1 ara asmk: ");
  scanf("%s",&name);

  printf("ya %s guess the number between 0 and 100 with the least possible tries \n",name);
  int i=1,unum;
  scanf("%d",&unum);
  while(unum!=num)
  {
     if (i==10)
     {
        printf("hbb ay mtwla l7ala w9il el3b khfif \nsaha douka ") ;
         if (unum<num)
         {
            printf("go upper: ");
         }
         else if (unum>num)
         {
             printf("go lower: ");
         }
     }
     
          
    else if (unum<num)
    {
      printf("go upper: ");
    }
    else if (unum>num)
    {
      printf("go lower: ");
    }
    i++;
    scanf("%d",&unum);
  }
   switch (i)
   {
     case 1:
    printf("yakhaaaah babaha direct mera lwlaaaa yadra sahbk kifh\n");
    break;
    case 2 ...  4:
    printf("ababaaaa 9lil li jabha fl mera %d hbb yadra sahbk kifh",i);
    break;
   
    default:
    printf("you couldve done better bsh maelish ak jbtha f %d tries yadra sahbk kifh  ",i);
    break;
   }
  
   srand (time(0));
  int num1 = (rand()% 100) ;
  char name2[10];
  printf("\nsaha douka player2  ara asmk: ");
  scanf("%s",&name2);

  printf("\nya %s guess the number between 0 and 100 with the least possible tries \n",name2);
  int j=1,unum1;
  scanf("%d",&unum1);
  while(unum1!=num1)
  {
     if (j==10)
     {
        printf("hbb ay mtwla l7ala w9il el3b khfif \nsaha douka ") ;
         if (unum1<num1)
         {
            printf("go upper: ");
         }
         else if (unum1>num1)
         {
             printf("go lower: ");
            
         }
     }
     
          
    else if (unum1<num1)
    {
      printf("go upper: ");
    }
    else if (unum1>num1)
    {
      printf("go lower: ");
    }
    j++;
    scanf("%d",&unum1);
  }
   switch (j)
   {
     case 1:
    printf("yakhaaaah babaha direct mera lwlaaaa\n");
    break;

   case 2 ...  4:
    printf("ababaaaa 9lil li jabha fl mera %deme hbb\n",j);
    break;
   
   default:
    printf("you couldve done better bsh maelish ak jbtha f %d tries \n",j);
    break;
   }
  if (j>i)
  {
    printf("%s ya noob yal kaeba %s yrbhk",name2,name);
  }
  else if (i>j)
  {
    printf("%s ya noob yal kaeba %s yrbhk",name,name2);
  }
  else
  {
    printf("ababa jbtou nul khawty");
  }
    return 0;
}