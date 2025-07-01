#include<stdio.h>
//#include<conio.h>
#include<windowS.h>
#include<string.h>
#include<stdlib.h>
void form();
struct bot
{
	char name[20],symptom[40],cure[40],address[50],specialist[20],prev[5],appointment[10],ans[20];
	int days,age;
	unsigned contact;
}p[10];
int main()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);
//	system("appointments");
	int choice;
	int i;
	for(i=1;i<=10;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);
		system("cls");
		printf("\t\tWelcome to the AI enabled hospital!\n\t\t***********************************\n Please fill the following form:\n\n");
		printf("What's your name?  ");
		scanf(" %[^\n]s",&p[i].name); 
		printf("What's your age?  ");
		scanf("%d",&p[i].age);
		printf("What's your contact no.?  ");
		scanf("%u",&p[i].contact);
		printf("What's your address?  ");
		scanf(" %[^\n]s",&p[i].address);
			
		printf("Did you visit Bot before?  ");
		scanf("%s",&p[i].prev);
		if(strcmpi(p[i].prev,"yes")==0)
		{
		printf("When was your last appointment?	 ");
		scanf("%s",&p[i].appointment);
		}
		system("appointments");
		form();
		printf("\n\nWhich specialist do you want to access? \n 1.dentist\n 2.opthamologist\n 3.pediatrician\n 4.dermatologist\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: //dentist
			{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN);
				system("cls");
		printf("Hi. Im AI-enabled dentist. Pleasure to assist you.\n");
		printf("What is your symptom? ");
		scanf(" %[^\n]s",&p[i].symptom);
		printf("\nHow long has it been? ");
		scanf("%d",&p[i].days);
		printf("\nOkay..");
	 if((strcmpi(p[i].symptom,"bleeding gums")==0) || (strcmpi(p[i].symptom,"bleeding")==0) || (strcmpi(p[i].symptom,"gums")==0))
     {
         system("cls");
         printf("For best recovery you have to : \n rinse mouth with Hydrogen Peroxide solution (for 30 seconds twice a week) \n apply tumeric paste to stop bleeding \n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"mouth burn")==0) || (strcmpi(p[i].symptom,"burn")==0) || (strcmpi(p[i].symptom,"burning sensation")==0))
     {
     	 system("cls");
         printf("\nCure ==> apply Somogel 1+1+1 (after every meal) \n avoid hot drinks.\n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"gum pain")==0) || (strcmpi(p[i].symptom,"pain in gum")==0) || (strcmpi(p[i].symptom,"pain")==0))
     {
     	 system("cls");
         printf("\ncure==> take panadol 1+1 \n avoid sweets \n");
         printf("\nPress Enter to continue");
         getch();
         break;
	 }
	  else
	 {
	  system("cls");
         printf("\nSorry. Cure not available! \n");
         printf("\nPress Enter to continue");
         getch();
	 }
	 break;
			}
			case 2: //opthamologist
			{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN);
				system("cls");
		printf("Hi. Im AI-enabled opthamologist. Pleasure to assist you.\n");
		printf("What is your symptom?");
		scanf(" %[^\n]s",&p[i].symptom);
		printf("\nHow long has it been?");
		scanf("%d",&p[i].days);
		printf("\nOkay..\n");
	 if((strcmpi(p[i].symptom,"swollen eye")==0) || (strcmpi(p[i].symptom,"swelling")==0) || (strcmpi(p[i].symptom,"eye swelling")==0))
     {
         system("cls");
         printf("for best recovery you have to : \n cool compress (preferably using an ice-pack) 1+1 (day and night) \n rinse with saline solution (in case of discharge) 1+1 (day and night) \n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"watery eye")==0) || (strcmpi(p[i].symptom,"discharge from eye")==0) || (strcmpi(p[i].symptom,"eye watering")==0))
     {
     	 system("cls");
         printf("\n\n Cure ==> apply oil-based eye drops 1+1+1 (8 hour interval) \nmassage eyelids with damp washcloth \navoid screens/any form of eye-strain\n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"redness")==0) || (strcmpi(p[i].symptom,"irritation")==0) || (strcmpi(p[i].symptom,"red eye")==0))
     {
     	 system("cls");
         printf("\nCure ==> anti-histamine eye-drops 1+1 (day and night) \n use decongestant eye-drops once daily (for three days ONLY) \n");
         printf("\nPress Enter to continue");
         getch();
         break;
	 }
	  else
	 {
	  system("cls");
         printf("\nSorry. Cure not available! \n");
         printf("\nPress Enter to continue");
         getch();
	 }
	 break;
			}
			case 3: //pediatrician
			{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN);
				system("cls");
		printf("Hi. Im AI-enabled pediatrician. Pleasure to assist you.\n");
		printf("What is your child's symptom?");
		scanf(" %[^\n]s",&p[i].symptom);
		printf("\nHow long has it been?");
		scanf("%d",&p[i].days);
		printf("Did you give any medicine for it?");
		printf(" %[^\n]s",&p[i].ans);
		printf("\nOkay..");
	 if((strcmpi(p[i].symptom,"cough")==0) || (strcmpi(p[i].symptom,"sore throat")==0) || (strcmpi(p[i].symptom,"coughing")==0))
     {
        system("cls");
         printf("for best recovery give your child : \n Tixylix syrup 1+1 (day and night) \n luke warm milk with tumeric and honey 1+1 (day and night) \n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"fever")==0) || (strcmpi(p[i].symptom,"cold")==0) || (strcmpi(p[i].symptom,"temperature")==0))
     {
     	 system("cls");
         printf("\nCure ==> Panadol syrup 1+1+1 (day, evening and night)\n Arinac syrup (day and night)\n sponge bath as per temperaure increase\n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"trouble breathing")==0) || (strcmpi(p[i].symptom,"breathing difficulty")==0) || (strcmpi(p[i].symptom,"lung congestion")==0))
     {
     	 system("cls");
         printf("\nCure ==> Nebulize  1+1 (day and night) \n keep head raised on pillows \n keep hydration levels high \n");
         printf("\nPress Enter to continue");
         getch();
         break;
	 }
	 else
	 {
	  system("cls");
         printf("\nSorry. Cure not available! \n");
         printf("\nPress Enter to continue");
         getch();
	 }
	 break;
			}
			case 4: //dermatologist
			{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN);
				system("cls");
		printf("Hi. Im AI-enabled dermatologist. Pleasure to assist you.\n");
		printf("What is your symptom?");
		scanf(" %[^\n]s",&p[i].symptom);
		printf("\nHow long has it been?");
		scanf("%d",&p[i].days);
		printf("\nOkay..");
	 if((strcmpi(p[i].symptom,"dry patches")==0) || (strcmpi(p[i].symptom,"dryness")==0) || (strcmpi(p[i].symptom,"dry skin")==0))
     {
         system("cls");
         printf("for best recovery you have to apply: \nSkin Aqua moisturizer SPF 40 1+1 (day and night) \n Vaseline petroleum jelly (before bed daily) \n");
         printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"rashes")==0) || (strcmpi(p[i].symptom,"redness")==0) || (strcmpi(p[i].symptom,"burning sensation")==0))
     {
     	 system("cls");
 		 printf("for best recovery you have to apply: \nwash with lukewarm water 1+1 (day and night) \n aloe-vera gel on affected area 1+1 (day and night) \n");
 		 printf("\nPress Enter to continue");
         getch();
         break;
     }
     else if((strcmpi(p[i].symptom,"burn")==0) || (strcmpi(p[i].symptom,"burnt skin")==0) || (strcmpi(p[i].symptom,"fire burn")==0))
     {
     	 system("cls");
		 printf("for best recovery you have to take: \n apply toothpaste on fresh burn \n apply petroleum jelly 1+1+1 (day, evening and night) \n");
		 printf("\nPress Enter to continue");
         getch();
         break;
	 }
	  else
	 {
	  	 system("cls");
         printf("\nSorry. Cure not available! \n");
         printf("\nPress Enter to continue");
         getch();
	 }
	 break;
			}
	}	
}
}
 void form() //details
{
	int i,age,contact;
	FILE fp;
	fp=fopen("Record.txt","w");
	fprintf(fp, "\n\nPATIENT INFORMATION\n");
	for(i=1;i<=10;i++)
	{
fprintf(fp, "Name: %s \n",p[i].name);
fprintf(fp, "Age: %d\n",p[i].age);
fprintf(fp, "Contact: %u\n",p[i].contact);
fprintf(fp, "Address: %s\n",p[i].address);
fprintf(fp, "Previous record: %s\n",p[i].prev);
if(strcmpi(p[i].prev,"no")==0)
{
break;
}
else
{
fprintf(fp, "Last appointment: %s\n",p[i].appointment);
}
	break;
	}
fclose(fp);
}
