typedef struct record{
	char name[20];
	char cnic[20];
	long phoneNo;
}rec;

typedef struct ticket{
	char name[20];
	char cnic[20];
	long phoneNo;
	int amount;
	char enclosure[15];
	int seat[10];
	int no_of_tickets;
}abeer;
typedef struct you
{
	int j[100];
}khubaib;
void mainfun(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	system("cls");
	abeer rec2;
	FILE * fp;
	while (1)
	{
		fp=fopen("file_main.txt","r+");
		if (fp!=NULL)
		break;
		else{
			fp=fopen("file_main.txt","w");
		}
	}
	fflush(stdin);
	printf("Enter your Name:");
	gets(rec2.name);fflush(stdin);
	printf("Enter your CNIC NO:");
	scanf("%s",rec2.cnic);fflush(stdin);
	printf("enter you phone NO:");
	scanf("%d",&rec2.phoneNo);fflush(stdin);
	printf("\n\n");
	
	getch();
	system("cls");
	
	int new_price;
	
printf("------------------------------------------------------PSL ticket----------------------------------------------------\n\n");	
	rec2.no_of_tickets=i*1;
	printf("Passengar Name:%s\n",rec2.name);
	printf("CNIC:%s\t\tCell:%d\n",rec2.cnic,rec2.phoneNo);
	printf("no of persons  compensated ina a ticket :%d\n",rec2.no_of_tickets);
	printf("You have seat numbers : ");
	for(int t=0;t<i;t++)
	{
		rec2.seat[t]=seat[choice].j[a[t]];
		printf("%d  ",rec2.seat[t]);
		
	}new_price=i*price;
	rec2.amount=new_price;
	strcpy(rec2.enclosure,enclosure);
	printf("total ammount bought:%d\n",rec2.amount);
	printf("Enclosure:%s\n",rec2.enclosure);
	
	
	
printf("-------------------------------------------------------------------------------------------------------------------\n\n");
	
	fseek(fp,(long)0,SEEK_END);
	fwrite(&rec2,sizeof(rec2),1,fp);
    fclose(fp);
    getch();
    
}
void fun1(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Karachi\t\tDate:Sunday, 30th-October\n");
}

void fun2(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Lahore\t\tDate:Sunday, 30th-October\n");
}
void fun3(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Islamabad\t\tDate:Wednesday, 11th-November\n");
}
void fun4(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Karachi\t\tDate:Sunday, 30th-October\n");
}
void fun5(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Peshawar\t\tDate:Thursday, 19th-November\n");
}
void fun6(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Lahore\t\tDate:Sunday, 25th-November\n");
}
void fun7(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Dubai(Sharjah)\t\tDate:Tuesday, 29th-November\n");
}
void fun8(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Karachi\t\tDate:Friday, 1st-December\n");
}
void fun9(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Dubai(Sharjah)\t\tDate:Sunday, 5th-December\n");
}
void fun10(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Dubai(Sharjah)\t\tDate:Wednesday, 9th-December\n");
}
void fun11(char enclosure[],int price,int i,khubaib seat[],int choice,int a[]){
	
	mainfun(enclosure,price,i,seat,choice,a);
	printf("Venue:Karachi\t\tDate:Sunday, 13th-December\n");
}
