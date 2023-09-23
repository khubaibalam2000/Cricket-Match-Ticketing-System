#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "nida.h"
typedef struct file
{
	int k,p,t;
	
}file1;
int main(){
	system("cls");
	khubaib seat[11];
	int q[10];
file1 new_1[11];
	for (int s=0;s<11;s++)
	{
	    new_1[s].k=0;
		new_1[s].p=0;
		new_1[s].t=50;
	}
	int a[2][11];
	for(int k=0;k<2;k++)
	{
		for (int l=0;l<11;l++)
		{
			a[k][l]=50;
		}
	}
    char pointer;
	int choice;
	do{ system("cls");
	    printf("=============================WELCOME TO PSL MANAGMENT SYSTEM====================\n");
		printf("1)want to verify the customer?? press a\n");
		printf("2)want to book a ticket for the customer?? press b\n");
		printf("3)want to exit the psl management system?? press c\n");
		printf(">>enter your desired no:");
		scanf("%c",&pointer);
		pointer = tolower(pointer);
		switch(pointer)
		{ 
		     case 'a':
		     	
		     	
		     	   {
					system("cls");
		     	   FILE *fptr;
	 	     	   	while (1)
                 	{
		             fptr=fopen("file_main.txt","r+");
		             
		             if (fptr!=NULL)
		             {
					 //printf("exists\n");
					 break;
				}
		             else{
			         fptr=fopen("file_main.txt","w");
			         //printf(" does not exist\n");
		            }
	                }
	 	     	   char name_file[20];
	               /*int i_file;
	               long num_rec = ftell(fptr);
	               printf("%d\n",ftell(fptr));
	               num_rec=num_rec/ (long)sizeof(abeer);
	               fseek(fptr, (long)0, SEEK_SET);
	               [num_rec];*/
				   printf("please enter the CNIC of customer:");
				   scanf("%s",name_file); 
	               /*fseek(fptr, (long)0, SEEK_SET);
	               while(fread(&emp_ptr, sizeof(abeer),1, fptr)!=0)
	               {printf("my name \n"); 
				   //if(strcmp(emp_ptr.name,name_file)==1)
	               	{
	               		printf("Passengar Name:%s\n",emp_ptr.name);
	                    printf("CNIC:%s\t\tCell:%d\n",emp_ptr.cnic,emp_ptr.phoneNo);
	                    printf("no of persons  comoensated ina a ticket :%d\n",emp_ptr.no_of_tickets);
	                    printf("You have seat numbers : ");
	                    for(int t=0;t<emp_ptr.no_of_tickets;t++)
	                 {
		                printf("%d  ",emp_ptr.seat[t]);
	                 }	printf("total ammount bought:%d\n",emp_ptr.amount);
	                    printf("Enclosure:%s\n",emp_ptr.enclosure);
	               		
					   }

				   }*/
	               int i_file;
	             
    
                 fseek(fptr,0,SEEK_END);
                 int len=ftell(fptr);
                 fseek(fptr,0,SEEK_SET);
                 len=len/sizeof(abeer);
                 int len2=ftell(fptr);
                 
                 abeer *emp_ptr=(abeer*)malloc(sizeof(abeer)*len);
                 fread(emp_ptr,sizeof(abeer),len,fptr);
                 /*for( i_file=0;i_file<len;i_file++)
                {
    	
	            }
                 fclose(fptr);*/
	               
	               
	               for(i_file=0;i_file<len;i_file++)
	               {
	               	if(strcmp(emp_ptr[i_file].cnic,name_file)==0)
	               	{
	               		printf("-------------------------------------PSL-TICKET--------------------------------------\n");
	               		printf("Passengar Name:%s\n",emp_ptr[i_file].name);
	                    printf("CNIC:%s\t\tCell:%d\n",emp_ptr[i_file].cnic,emp_ptr[i_file].phoneNo);
	                    printf("no of persons  compensated ina a ticket :%d\n",emp_ptr[i_file].no_of_tickets);
	                    printf("You have seat numbers : ");
	                    for(int t=0;t<emp_ptr[i_file].no_of_tickets;t++)
	                 {
		                printf("%d  ",emp_ptr[i_file].seat[t]);
	                 }	printf("total ammount bought:%d\n",emp_ptr[i_file].amount);
	                    printf("Enclosure:%s\n",emp_ptr[i_file].enclosure);
	               		printf("-------------------------------------------------------------------------------------\n");
					   }
				    }//*/
				    fclose(fptr);
				    //printf("pool");
					getch();
				    break;
	            }
		
		
	case 'b':
	{
	system("cls");	
	printf("==========================================Schedule of the PSL======================================\n\n");
	printf("=============================Opening Ceremony by Ehsan Mani and Ramiz Raja=========================\n\n");
	printf("===================================Commencement of Initial Matches=================================\n\n");
	printf("\t\tMatch\t\t\t\tVenue\t\t\tDate & time\n");
	printf("1.Karachi Kings vs Islamabad United\t\tKarachi\t\t    Sunday, 30th-October\n");
	printf("2.Lahore Qalandars vs Quetta Glaidators\t\tLahore\t\t    Wednesday, 11th-November\n");
	printf("3.Peshawar Zalmi vs Islamabad United\t\tIslamabad\t    Friday, 15th-November\n");
	printf("4.Quetta Gladiators vs Karachi Kings\t\tKarachi\t\t    Sunday, 17th-November\n");
	printf("5.Lahore Qalandars vs Peshawar Zalmi\t\tPeshawar\t    Thursday, 19th-November\n");
	printf("6.Quetta Gladiators vs Islamabad United\t\tLahore\t\t    Sunday, 25th-November\n");
	printf("7. Peshawar Zalmi vs Karachi Kings\t\tDubai(Sharjah)\t    Tuesday, 29th- November\n");
	printf("8.Lahore Qalandars vs Islamabad United\t\tKarachi\t\t    Friday, 1st-December\n\n");
	printf("======================================Commencement of Semi-Finals===================================\n\n");
	printf("9.TBA\t\t\t\t\t\tDubai(Sharjah)\t    Sunday, 5th-December\n");
	printf("10.TBA\t\t\t\t\t\tDubai(Sharjah)\t    Wednesday, 9th-December\n\n");
	printf("======================================Commencement of Finals===================================\n\n");
	printf("11.TBA\t\t\t\t\t\tKarachi\t\t    Sunday, 13th-December\n\n");
	int i;
	do{
	
	printf("Press '1' if you want to book the seat of 1st Karachi Kings vs Islamabad United match.\n");
	printf("Press '2' if you want to book the seat of 2nd Lahore Qalandars vs Quetta Gladiators match.\n");
	printf("Press '3' if you want to book the seat of 3rd Peshawar Zalmi vs Islamabad United match.\n");
	printf("Press '4' if you want to book the seat of 4th Quetta Gladiators vs Karachi Kings match.\n");
	printf("Press '5' if you want to book the seat of 5th Lahore Qalandars vs Peshawar Zalmi match.\n");
	printf("Press '6' if you want to book the seat of 6th Quetta Gladiators vs Islamabad United match.\n");
	printf("Press '7' if you want to book the seat of 7th Peshawar Zalmi vs Karachi Kings match.\n");
	printf("Press '8' if you want to book the seat of 8th Lahore Qalandars vs Islamabad United match.\n");
	printf("Press '9' if you want to book the seat of 1st semi-final match.\n");
	printf("Press '10' if you want to book the seat of 2nd semi-final match.\n");
	printf("Press '11' if you want to book the seat of Final match.\n");
	printf("press '0'if you want to quit\n ");
	printf("press the desired NO:");
	
	scanf("%d",&choice);
	system("cls");
	switch(choice){
		case 1:{
			FILE *fun_1;
			while (1)
	     {  
		fun_1=fopen("file1.txt","r+");
		if (fun_1!=NULL)
		break;
		else{
		fun_1=fopen("file1.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_1);
		}
	    }   
	    fseek(fun_1,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_1);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));
			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun1(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun1(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_1);
			fopen("file1.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_1);
			fclose(fun_1);//do this in all function plz //
			break;
		}
		case 2:{
			FILE *fun_2;
			while (1)
	     {  
		fun_2=fopen("file2.txt","r+");
		if (fun_2!=NULL)
		break;
		else{
		fun_2=fopen("file2.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_2);
		}
	    }   
	    fseek(fun_2,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_2);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));
			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun2(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun2(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_2);
			fopen("file2.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_2);
			fclose(fun_2);//do this in all function plz //
			break;
		}
		case 3:{
			FILE *fun_3;
			while (1)
	     {  
		fun_3=fopen("file3.txt","r+");
		if (fun_3!=NULL)
		break;
		else{
		fun_3=fopen("file3.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_3);
		}
	    }   
	    fseek(fun_3,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_3);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));
			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun3(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun3(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_3);
			fopen("file3.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_3);
			fclose(fun_3);//do this in all function plz //
			break;
		}
		case 4:{
			FILE *fun_4;
			while (1)
	     {  
		fun_4=fopen("file4.txt","r+");
		if (fun_4!=NULL)
		break;
		else{
		fun_4=fopen("file4.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_4);
		}
	    }   
	    fseek(fun_4,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_4);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun4(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun4(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_4);
			fopen("file4.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_4);
			fclose(fun_4);//do this in all function plz //
			break;
		}
		case 5:{
			FILE *fun_5;
			while (1)
	     {  
		fun_5=fopen("file5.txt","r+");
		if (fun_5!=NULL)
		break;
		else{
		fun_5=fopen("file5.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_5);
		}
	    }   
	    fseek(fun_5,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_5);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun5(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun5(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_5);
			fopen("file5.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_5);
			fclose(fun_5);//do this in all function plz //
			break;
		}
		case 6:{
			FILE *fun_6;
			while (1)
	     {  
		fun_6=fopen("file6.txt","r+");
		if (fun_6!=NULL)
		break;
		else{
		fun_6=fopen("file6.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_6);
		}
	    }   
	    fseek(fun_6,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_6);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));

			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun6(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun6(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_6);
			fopen("file6.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_6);
			fclose(fun_6);//do this in all function plz //
			break;
		}
		case 7:{
			FILE *fun_7;
			while (1)
	     {  
		fun_7=fopen("file7.txt","r+");
		if (fun_7!=NULL)
		break;
		else{
		fun_7=fopen("file7.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_7);
		}
	    }   
	    fseek(fun_7,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_7);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));

			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun7(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun7(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_7);
			fopen("file7.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_7);
			fclose(fun_7);//do this in all function plz //
			break;
		}
		case 8:{
			FILE *fun_8;
			while (1)
	     {  
		fun_8=fopen("file8.txt","r+");
		if (fun_8!=NULL)
		break;
		else{
		fun_8=fopen("file8.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_8);
		}
	    }   
	    fseek(fun_8,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_8);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));

			printf("||===Ticket of VIP enclosure costs 1000/-Ticket of Economy enclosure costs 600/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1000;
				
				fun8(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 600;
				fun8(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_8);
			fopen("file8.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_8);
			fclose(fun_8);//do this in all function plz //
			break;
		}
		case 9:{
			FILE *fun_9;
			while (1)
	     {  
		fun_9=fopen("file9.txt","r+");
		if (fun_9!=NULL)
		break;
		else{
		fun_9=fopen("file9.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_9);
		}
	    }   
	    fseek(fun_9,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_9);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));

			printf("||===Ticket of VIP enclosure costs 2000/-Ticket of Economy enclosure costs 1500/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1500;
				
				fun9(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 2000;
				fun9(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_9);
			fopen("file9.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_9);
			fclose(fun_9);//do this in all function plz //
			break;
		}
		case 10:
		{
		FILE *fun_10;
			while (1)
	     {  
		fun_10=fopen("file1.txt","r+");
		if (fun_10!=NULL)
		break;
		else{
		fun_10=fopen("file10.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_10);
		}
	    }   
	    fseek(fun_10,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_10);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));

			printf("||===Ticket of VIP enclosure costs 2000/-Ticket of Economy enclosure costs 1500/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 1500;
				
				fun10(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 2000;
				fun10(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_10);
			fopen("file10.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_10);
			fclose(fun_10);//do this in all function plz //
			break;
		}
		case 11:{
			FILE *fun_11;
			while (1)
	     {  
		fun_11=fopen("file11.txt","r+");
		if (fun_11!=NULL)
		break;
		else{
		fun_11=fopen("file11.txt","w");
		fwrite(&new_1[choice-1],sizeof(new_1),1,fun_11);
		}
	    }   
	    fseek(fun_11,(long)0,SEEK_SET);
	    fread(&new_1[choice-1],sizeof(new_1),1,fun_11);
	        printf("||=================================================================================||\n");
			printf("||==================In which enclosure you want to see the match?==================||\n"); 
			printf("||===========VIP :  %d seats availabale     economy : %d seats available===========||\n",100-(new_1[choice-1].t),50-(new_1[choice-1].p));

			printf("||===Ticket of VIP enclosure costs 5000/-Ticket of Economy enclosure costs 4000/-===||\n");
			printf("||=========================TYPE 'VIP' for vip enclosure============================||\n");
			printf("||======================TYPE 'Economy' for Economy enclosure=======================||\n");
			printf("\n\n\t\tEnter the Enclosure Name:");
			char enclosure[15];
			scanf("%s",enclosure);
			printf("\n\t\thow many tickets do wants to buy(limit 10)?");
			scanf("%d",&i);
			system("cls");
			for(int u=0;u<10;u++)
			{
				q[u]=0;
			}
            
			if(strcmp(enclosure,"VIP") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].t=new_1[choice-1].t+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].t;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[1][choice-1]=a[1][choice-1]-1;
				int price = 4000;
				
				fun11(enclosure,price,i,seat,choice-1,q);
			}
			else if(strcmp(enclosure,"Economy") == 0){
				for(int o=0;o<i;o++)
				{
					 new_1[choice-1].p=new_1[choice-1].p+1;
					 seat[choice-1].j[new_1[choice-1].k]=new_1[choice-1].p;
					 q[o]=new_1[choice-1].k;
					 new_1[choice-1].k++;
				}
				a[0][choice-1]=a[0][choice-1];
				int price = 5000;
				fun11(enclosure,price,i,seat,choice-1,q);
			}
			fclose(fun_11);
			fopen("file11.txt","w");
			fwrite(&new_1[choice-1],sizeof(new_1),1,fun_11);
			fclose(fun_11);//do this in all function plz //
			break;
		}
	}
	}while (choice !=0);
	break;}
}
}while(pointer!='c');
}
