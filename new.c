#include<stdio.h>
#include<string.h>




void main(){
  char source[100];
  char dest[100];
  char dest1[100];


char  str1[]="* * * * * ";
   char str2[]=" >> ";
  FILE *fp;
//  printf("Welcome to CronStack\n");
int ch=0;
int choice=1;

  /* code */
begin:
  printf("Welcome to CronStack\n\n\n");
  printf("**************************\n");
  printf("**********MENU************\n");
  printf("**************************\n");
  printf("\n");
  printf("1.Delete temporary files\n");
  printf("2.Detection & Deallocation of Zombie Process\n");
  printf("3.Cookie data Dumping\n");
  printf("4.Set up a new CronStack\n");
  printf("5.Delete an existing CronStack\n");
  printf("6.Terminate CronStack\n");
  printf("\n");
  printf("\n");
  printf("Enter choice \n");

  printf("\n");


  scanf("%d",&ch);
  switch (ch) {


case 1:

  system("/home/workstation/bin/1.sh");
  printf("Do you want to continue? \n");
  scanf("%d",&choice);
  if(choice==1){
    goto begin;
  }

  //goto begin;
break;
  case 2:

  system("/home/workstation/bin/2.sh");
  printf("Do you want to continue? \n");
  scanf("%d",&choice);
  if(choice==1){
    goto begin;
  }
//goto begin;
  break;
  case 3:

printf("Script");
  //system("/home/workstation/bin/2.sh");
  printf("Do you want to continue? \n");
  scanf("%d",&choice);
  if(choice==1){
    goto begin;
  }
  break;

case 4:
printf("Enter the complete path of the source file\n");
//gets(source);
scanf("%s",&source);

//gets(dest1);

    fp=fopen("/home/workstation/bin/cronfile.txt","a+");

    strcat(dest,str1);
    strcat(dest,source);
    strcat(dest,str2);
    strcat(dest,"/home/workstation/bin/dump1.txt");
    fprintf(fp, "%s\n", dest);
    fclose(fp);
    system("crontab /home/workstation/bin/cronfile.txt");
    printf("CronStack Scheduled\n" );
    printf("Do you want to continue? \n");
    scanf("%d",&choice);
    if(choice==1){
      goto begin;
    }
    break;
    case 5:
    system("crontab -r");
    printf("CronStack Removed\n");
    printf("Do you want to continue? \n");
    scanf("%d",&choice);
    if(choice==1){
      goto begin;
    }
    break;
    case 6:
    exit(0);
  default:
  printf("Invalid option Entered\n");
  printf("Do you want to continue\n");
  scanf("%d",&choice);
  if(choice==1){
    goto begin;
  }
}
}
