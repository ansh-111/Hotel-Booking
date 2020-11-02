#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char s[5][5]={"YES","YES","YES","YES","YES"},cn[5][10]={"N/A","N/A","N/A","N/A","N/A"},cn1[5][10],rt[5][10]={"N/A","N/A","N/A","N/A","N/A"},rt1[5][10];
	int m2=0,sum=0,d1bi[5],rn=321,bi=12345,m1=0,di=0,hm,ar[10],br[5]={0,0,0,0,0},r,ea=0,n=0,x=0,d[5]={0,0,0,0,0},d1[5],pre=0,mp[5],mp1[5],p=0,i=0,m=0,tp[5],tp1[5];
	unsigned int pn[5],pn1[5],an[5],an1[5];
label1 :	printf("\n");
	printf("\t\t\t\t\t\t\t\twelcome you.........");
	printf("\n\n");
	printf("\t\tHotel gupta is one of the newest hotel in tirupati.The hotel is");
	printf("one of the best hotel in tirupati.Nearly we have 30 branches.our hotel is\n");
	printf("\t5star(*****)rated hotel.Main branch is located at vizag.Many V.I.P like");
	printf("C.M,Cricket players use to stay.This hotel was started in 1960 by giridhar gupta.\n");
    printf("\tThe hotel is equipped with all the general amenities and facilites that go");
	printf("along with memorable stay.The hotel has well furnished rooms.");
	printf("\n\tAll the rooms of the are well furnished.Our hotel reaches the thoughts");
	printf(" of the travelers.");
	printf("\n\n\t\t\t\t\t\t\t     Facilities provided by hotel.........");	
	printf("\n\t\t\t\t\t\t\t\t1.24x7 Power Supply and hot water.");
	printf("\n\t\t\t\t\t\t\t\t2.Complementary Break Fast.");
	printf("\n\t\t\t\t\t\t\t\t3.Free internet access");
	printf("\n\t\t\t\t\t\t\t\t4.Swimming pool");
	printf("\n\t\t\t\t\t\t\t\t5.Free pickup van to hotel");
	printf("\n\t\t\t\t\t\t\t\t6.Laundary Service");
	printf("\n\t\t\t\t\t\t\t\t7.Travel Desk to know about tourist places");
	printf("\n\n\t\tAddress of main branches:");
	printf("\n\n\t\tVizag Branch    :");
	printf("Gandhi Nagar opposite to ICICI Bank, Rushikonda,Vishakapatnam");
	printf("\n\t\t\t        Andhar pradesh,654327.");
	printf("\n\n\t\tTirupati Branch :");
	printf("Opposite to APSRTC Bus stand,Tata Nagar,Tirupati");
	printf("\n\t\t\t        Andhra Pradesh,517501.");
	printf("\n\n\t\tContact Details :");
	printf("\n\n\t\tVizag Branch    : 040-2345677");
	printf("\n\n\t\tTirupati Branch : 98761233446");
	printf("\n\n\t\t\t\t\t\t\t\t Our Website :");
	printf("\n\t\t\t\t\t\t\t\tGupta hotels.in");
	
	printf("\n\n\t\t\t\t\t\tpress any number to continue :");
	scanf("%d",&pre);
	system("cls");

label2 :printf("\n\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::");
	printf("\n\t\t\t\t\t\t::                  WELCOME TO                     ::");
	printf("\n\t\t\t\t\t\t::                 GUPTA'S HOTEL                   ::");
	printf("\n\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::");
	printf("\n\n\t\t\t\t\t\t\t\tCHOOSE A CATEGORY.........");
	printf("\n\t\t\t\t\t\t\t\t1.To Check Availability");
	printf("\n\t\t\t\t\t\t\t\t2.Types Of Room");
	printf("\n\t\t\t\t\t\t\t\t3.Booking a Room");
	printf("\n\t\t\t\t\t\t\t\t4.Show Coustmer Details");
	printf("\n\t\t\t\t\t\t\t\t5.Restaurant");
	printf("\n\t\t\t\t\t\t\t\t6.Cancellation");
	printf("\n\t\t\t\t\t\t\t\t7.Room Check Out");
	printf("\n\t\t\t\t\t\t\t\t8.Exit The Website");
	
	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
	scanf("%d",&pre);
	if(pre==1)
	{
		system("cls");
		goto label1;
	}
	printf("\n\n\t\t\t\t\t\t\t\tPress the Requried number :");
	scanf("%d",&n);
	system("cls");

			int y;
label3 :	switch(n)
	{
	case 1 : printf("\n\n\t\t\t\t\t\t\t\t Room Availability :");
	         printf("\n\t\t\t\t\t\t\t\t---------------------");
	         printf("\n\n\tRoom No :\t      Type :\t     Charge(per day) : ");
	         printf("\t   Availability :\t\tcust name :\t\tPeriod(in Days) :");
	         printf("\n\n\t    1    \t      suit\t\t2,500");
	         	printf("\t\t     %s\t\t\t     %s\t\t\t  %d",s[0],cn[0],d[0]);
	         	printf("\n\n\t    2    \t    spldeluxe\t\t1,500");

	         	printf("\t\t     %s\t\t\t     %s\t\t\t  %d",s[1],cn[1],d[1]);
	         	printf("\n\n\t    3    \t      deluxe\t\t1,000");
	         	printf("\t\t     %s\t\t\t     %s\t\t\t  %d",s[2],cn[2],d[2]);
	         		printf("\n\n\t    4    \t      double\t\t 700");
	         	printf("\t\t     %s\t\t\t     %s\t\t\t  %d",s[3],cn[3],d[3]);
	         	printf("\n\n\t    5    \t      general\t\t 500");
	         	printf("\t\t     %s\t\t\t     %s\t\t\t  %d",s[4],cn[4],d[4]);    
			 	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
	            i++;
			 break;
    case 2 : printf("\n\t\t\t\t\t\t\t\t     Types Of Room");
             printf("\n\n\t\t\t\t\t\t\t\t\t1.Suit");
             printf("\n\t\t\t\t\t\t\t\t\t2.Spl Delux");
             printf("\n\t\t\t\t\t\t\t\t\t3.Delux");
             printf("\n\t\t\t\t\t\t\t\t\t4.Double");
             printf("\n\t\t\t\t\t\t\t\t\t5.Regular");
			 	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
             printf("\n\t\t\t\t\t\t\tEnter the number to check room ");
             printf("features ");
             scanf("%d",&y);
             switch (y)
             {
             	case 1 :  system("cls");
				  printf("\n\n\t\t\t\t\t\t\t\t    Features Of The Room");
             	         printf("\n\t\t\t\t\t\t\t\t");
             	         printf("------------------------------");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Type\t      >> suit");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Charge\t      >> 2,500");
             	         printf("\n\t\t\t\t\t\t\t\tNO.OF beds\t      >> 3");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Capacity\t      >> 6");
             	         printf("\n\t\t\t\t\t\t\t\tT.V\t              >> YES");
             	         printf("\n\t\t\t\t\t\t\t\tA.C\t              >> YES");
             	         printf("\n\t\t\t\t\t\t\t\tSofa\t              >> YES");
	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label3;
	            }
	            break;
	            case 2 :  system("cls");
				  printf("\n\n\t\t\t\t\t\t\t\t    Features Of The Room");
             	         printf("\n\t\t\t\t\t\t\t\t");
             	         printf("------------------------------");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Type\t      >> Spl Deluxe");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Charge\t      >> 1,500");
             	         printf("\n\t\t\t\t\t\t\t\tNO.OF beds\t      >> 2");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Capacity\t      >> 4");
             	         printf("\n\t\t\t\t\t\t\t\tT.V\t              >> YES");
             	         printf("\n\t\t\t\t\t\t\t\tA.C\t              >> YES");
	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label3;
	            }
	            break;
	            case 3 :  system("cls");
				  printf("\n\n\t\t\t\t\t\t\t\t    Features Of The Room");
             	         printf("\n\t\t\t\t\t\t\t\t");
             	         printf("------------------------------");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Type\t      >> Delux");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Charge\t      >> 1,000");
             	         printf("\n\t\t\t\t\t\t\t\tNO.OF beds\t      >> 1");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Capacity\t      >> 3");
             	         printf("\n\t\t\t\t\t\t\t\tT.V\t              >> YES");
             	         printf("\n\t\t\t\t\t\t\t\tA.C\t              >> NO");
	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label3;
	            }
	            break;
	            case 4 :  system("cls");
				  printf("\n\n\t\t\t\t\t\t\t\t    Features Of The Room");
             	         printf("\n\t\t\t\t\t\t\t\t");
             	         printf("------------------------------");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Type\t      >> double");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Charge\t      >>Rs700");
             	         printf("\n\t\t\t\t\t\t\t\tNO.OF beds\t      >> 1");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Capacity\t      >> 2");
             	         printf("\n\t\t\t\t\t\t\t\tT.V\t              >> NO");
             	         printf("\n\t\t\t\t\t\t\t\tA.C\t              >> NO");
	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label3;
	            }
	            break;
	            case 5 :  system("cls");
				  printf("\n\n\t\t\t\t\t\t\t\t    Features Of The Room");
             	         printf("\n\t\t\t\t\t\t\t\t");
             	         printf("------------------------------");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Type\t      >> General");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Charge\t      >> 500");
             	         printf("\n\t\t\t\t\t\t\t\tNO.OF beds\t      >> 1");
             	         printf("\n\t\t\t\t\t\t\t\tRoom Capacity\t      >> 1");
             	         printf("\n\t\t\t\t\t\t\t\tT.V\t              >> NO");
             	         printf("\n\t\t\t\t\t\t\t\tA.C\t              >> NO");
	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label3;
	            }
}
break;
label5 : case 3 :	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
	            system("cls");
	    printf("\n\nNOTE : YOU SHOULD ENTER ROOM TYPE ONLY IN SMALL LETTERS PLEASE CHECK WHICH TYPES ROOM ARE AVAILABLE IN OUR HOTEL AT TYPES OF ROOM OPTION");
              printf("\n\t\t\t\t\tRoom Type                : ");
          scanf("%s",rt[0]);
           printf("\n\n\t\t  \t\t\tclick '1' to change room type to continue '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label5;
	            }
        if(strcmp(rt[0],"suit"));
        else
       {
       	x=1;i=0;p=2500;strcpy(rt1[m],"suit");
       	system("cls");
		printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : ");
       scanf("%s",cn[i]);strcpy(cn1[m],cn[i]);
       printf("\n\t\t   \t\t\t\tCAPACITY OF SUIT IS ONLY 6.");
    label6 :   printf("\n\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : ");
       scanf("%d",&mp[i]);mp1[m]=mp[i];
       if(mp[i]>6)
       {
       	printf("\n\tNOTE : CAPACITY OF SUIT IS ONLY 6.BUT YOU ARE BOOKING FOR ");
       	ea=250*(mp[i]-6);
	    printf("%d MEMBERS.FOR EACH PERSON WE WILL COST Rs250.YOU SHOULD PAY Rs %d extra",mp[i],ea);
         printf("\n\n\t\t  \t\t\tclick '1' to change No.of Persons tocontinue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");ea=0;
		          printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	          printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : %s",cn1[m]);
	              goto label6;
	            }
	        }
         printf("\n\t\t\t\t\tNO.OF Days Of stay       : ");
       scanf("%d",&d[i]);d1[m]=d[i];
       printf("\n\t\t\t\t\tPHONE NUMBER             : ");
       scanf("%lu",&pn[i]);pn1[m]=pn[i];
       printf("\n\t\t\t\t\tADHAAR NUMBER            : ");
       scanf("%lu",&an[i]);an1[m]=an[i];
       tp[i]=(p*d[i])+ea;tp1[m]=tp[i];strcpy(s[0],"NO");
       printf("\n\t\t\t\t\tTotal Price For Room Is : %d",tp[i]);
        printf("\n\n\t\t\t\t\t\t\t\t :)SUCCESSFULLY suitROOM IS BOOKED FOR YOU");
	   printf("\n\n\t\t\t\t\t\t\t\t\t YOUR ROOM NUMBER IS  : 321");
	   printf("\n\t\t\t\t\t\t\t\t\t YOUR BOOKING ID IS   : 12345");
	   d1bi[m]=12345;m++;
	     printf("\n\n\t\t\t\t\tclick any number to continue(PLEASE CHECK YOUR BOOKING ID AND ROOM NUMBER) : ");
            	scanf("%d",&pre);
	   }
	   if(strcmp(rt[0],"spldelux"));
	   else
       {
       	x=2;p=1500;i=1,ea=0;strcpy(rt1[m],"spldelux");
       	system("cls");
		printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : ");
       scanf("%s",cn[i]);strcpy(cn1[m],cn[i]);
       printf("\n\t\t   \t\t\t\tNOTE : CAPACITY OF SPLDELUX IS ONLY 4.");
    label7 :   printf("\n\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : ");
       scanf("%d",&mp[i]);mp1[m]=mp[i];
        if(mp[i]>4)
       {
       	printf("\n\tNOTE :CAPACITY OF SPLDELUX IS ONLY 4.BUT YOU ARE BOOKING FOR ");
       	ea=250*(mp[i]-4);
	    printf("%d MEMBERS.FOR EACH PERSON WE WILL COST Rs250.YOU SHOULD PAY Rs %d extra",mp[i],ea);
         printf("\n\n\t\t  \t\t\tclick '1' to change No.of Persons to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");ea=0;
		          printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	          printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : %s",cn1[m]);
	              goto label7;
	            }
	        }
	        printf("\n\t\t\t\t\tNO.OF Days Of stay       : ");
       scanf("%d",&d[i]);d1[m]=d[i];
       printf("\n\t\t\t\t\tPHONE NUMBER             : ");
       scanf("%lu",&pn[i]);pn1[m]=pn[i];
       printf("\n\t\t\t\t\tADHAAR NUMBER            : ");
       scanf("%lu",&an[i]);an1[m]=an[i];
       tp[i]=(p*d[i])+ea;tp1[m]=tp[i];strcpy(s[1],"NO");
       	printf("\n\t\t\t\t\tTotal Price For Room Is : %d",tp[i]);
       	 printf("\n\n\t\t\t\t\t\t\t\t :)SUCCESSFULLY spldeluxROOM IS BOOKED FOR YOU");
	   printf("\n\n\t\t\t\t\t\t\t\t\t YOUR ROOM NUMBER IS  : 322");
	   printf("\n\t\t\t\t\t\t\t\t\t YOUR BOOKING ID IS   : 12346");
	   d1bi[m]=12346;m++;
	   printf("\n\n\t\t\t\t\tclick any number to continue(PLEASE CHECK YOUR BOOKING ID AND ROOM NUMBER) : ");
            	scanf("%d",&pre);
	   }
	   if(strcmp(rt[0],"delux"));
	   else
       {
       	x=3;i=2;p=1000;ea=0;strcpy(rt1[m],"delux");
       	system("cls");
		printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : ");
       scanf("%s",cn[i]);strcpy(cn1[m],cn[i]);
       printf("\n\t\t   \t\t\t\tNOTE : CAPACITY OF DELUX IS ONLY 3.");
    label8 :   printf("\n\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : ");
       scanf("%d",&mp[i]);mp1[m]=mp[i];
        if(mp[i]>3)
       {
       	printf("\n\tNOTE :CAPACITY OF DELUX IS ONLY 3.BUT YOU ARE BOOKING FOR ");
       	ea=150*(mp[i]-3);
	    printf("%d MEMBERS.FOR EACH PERSON WE WILL COST Rs150.YOU SHOULD PAY Rs %d extra",mp[i],ea);
         printf("\n\n\t\t  \t\t\tclick '1' to change No.of Persons to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");ea=0;
		          printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	          printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : %s",cn1[m]);
	              goto label8;
	            }
	        }
        printf("\n\t\t\t\t\tNO.OF Days Of stay       : ");
       scanf("%d",&d[i]);d1[m]=d[i];
       printf("\n\t\t\t\t\tPHONE NUMBER             : ");
       scanf("%lu",&pn[i]);pn1[m]=pn[i];
       printf("\n\t\t\t\t\tADHAAR NUMBER            : ");
       scanf("%lu",&an[i]);an1[m]=an[i];
       tp[i]=(p*d[i])+ea;tp1[m]=tp[i];strcpy(s[2],"NO");
       printf("\n\n\t\t\t\t\t\tTotal Price For Room Is : %d",tp[i]);
        printf("\n\n\t\t\t\t\t\t\t\t :)SUCCESSFULLY deluxROOM IS BOOKED FOR YOU");
	   printf("\n\n\t\t\t\t\t\t\t\t\t YOUR ROOM NUMBER IS  : 323");
	   printf("\n\t\t\t\t\t\t\t\t\t YOUR BOOKING ID IS   : 12347");
	   d1bi[m]=12347;m++;
	   printf("\n\n\t\t\t\t\tclick any number to continue(PLEASE CHECK YOUR BOOKING ID AND ROOM NUMBER) : ");
            	scanf("%d",&pre);
	   }
	   if(strcmp(rt[0],"double"));
	   else
       {
       	x=4;i=3;p=700;ea=0;strcpy(rt1[m],"double");
       	system("cls");
		printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : ");
       scanf("%s",cn[i]);strcpy(cn1[m],cn[i]);
       printf("\n\t\t   \t\t\t\tNOTE : CAPACITY OF DOUBLE IS ONLY 2.");
    label9 :printf("\n\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : ");
       scanf("%d",&mp[i]);mp1[m]=mp[i];
         if(mp[i]>2)
       {
       	printf("\n\tNOTE :CAPACITY OF DOUBLE IS ONLY 2.BUT YOU ARE BOOKING FOR ");
       	ea=100*(mp[i]-2);
	    printf("%d MEMBERS.FOR EACH PERSON WE WILL COST Rs100.YOU SHOULD PAY Rs %d extra",mp[i],ea);
         printf("\n\n\t\t  \t\t\tclick '1' to change No.of Persons to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");ea=0;
		          printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	          printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : %s",cn1[m]);
	              goto label9;
	            }
	        }
        printf("\n\t\t\t\t\tNO.OF Days Of stay       : ");
       scanf("%d",&d[i]);d1[m]=d[i];
       printf("\n\t\t\t\t\tPHONE NUMBER             : ");
       scanf("%lu",&pn[i]);pn1[m]=pn[i];
       printf("\n\t\t\t\t\tADHAAR NUMBER            : ");
       scanf("%lu",&an[i]);an1[m]=an[i];
       tp[i]=(p*d[i])+ea;tp1[m]=tp[i];strcpy(s[3],"NO");
       	printf("\n\t\t\t\t\tTotal Price For Room Is : %d",tp[i]);
       	 printf("\n\n\t\t\t\t\t\t\t\t :)SUCCESSFULLY doubleROOM IS BOOKED FOR YOU");
	   printf("\n\n\t\t\t\t\t\t\t\t\t YOUR ROOM NUMBER IS  : 324");
	   printf("\n\t\t\t\t\t\t\t\t\t YOUR BOOKING ID IS   : 12348");
	   d1bi[m]=12348;m++;
	   printf("\n\n\t\t\t\t\tclick any number to continue(PLEASE CHECK YOUR BOOKING ID AND ROOM NUMBER) : ");
            	scanf("%d",&pre);
	   }
	   if(strcmp(rt[0],"general"));
	   else
       {
       	x=5;i=4;p=500;ea=0;strcpy(rt1[m],"general");
       	system("cls");
		printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : ");
       scanf("%s",cn[i]);strcpy(cn1[m],cn[i]);
       printf("\n\t\t   \t\t\t\tNOTE : CAPACITY OF GENERAL IS ONLY 1.");
    label10 :printf("\n\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : ");
       scanf("%d",&mp[i]);mp1[m]=mp[i];
          if(mp[i]>1)
       {
       	printf("\n\tNOTE :CAPACITY OF GENERAL IS ONLY 1.BUT YOU ARE BOOKING FOR ");
       	ea=50*(mp[i]-1);
	    printf("%d MEMBERS.FOR EACH PERSON WE WILL COST Rs50.YOU SHOULD PAY Rs %d extra",mp[i],ea);
         printf("\n\n\t\t  \t\t\tclick '1' to change No.of Persons to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");ea=0;
		          printf("\n\n\t\t\t\t\tROOM TYPE                : %s",rt1[m]);
       	          printf("\n\n\t\t\t\t\tNAME OF COUSTMER         : %s",cn1[m]);
	              goto label10;
	            }
	        }
	     printf("\n\t\t\t\t\tNO.OF Days Of stay       : ");
       scanf("%d",&d[i]);d1[m]=d[i];
       printf("\n\t\t\t\t\tPHONE NUMBER             : ");
       scanf("%lu",&pn[i]);pn1[m]=pn[i];
	   printf("\n\t\t\t\t\tADHAAR NUMBER            : ");
       scanf("%lu",&an[i]);an1[m]=an[i];
       tp[i]=(p*d[i])+ea;tp1[m]=tp[i];strcpy(s[4],"NO");
       	printf("\n\t\t\t\t\tTotal Price For Room Is : %d",tp[i]);
       	 printf("\n\n\t\t\t\t\t\t\t\t :)SUCCESSFULLY generalROOM IS BOOKED FOR YOU");
	   printf("\n\n\t\t\t\t\t\t\t\t\t YOUR ROOM NUMBER IS  : 325");
	   printf("\n\t\t\t\t\t\t\t\t\t YOUR BOOKING ID IS   : 12349");
	   d1bi[m]=12349;m++;
	   printf("\n\n\t\t\t\t\tclick any number to continue(PLEASE CHECK YOUR BOOKING ID AND ROOM NUMBER) : ");
            	scanf("%d",&pre);
	   }
	   system("cls");
	   printf("\n\n\t\t\t\t\t\t\t\tPLEASE COLLECT YOUR KEYS AT RECEPSION BY SHOWING BOOKING ID");
	   printf("\n\n\t\t\t\t\t\t\t\tIF YOU HAVE ANY QUERIES PLEASE CONTACT TO 9701926783");
	   printf("\n\n\t\t\t\t\t\t\t\t\tTHANK YOU FOR CHOOSING OUR HOTEL");
	   printf("\n\n\t\t\t\t\t\t\t\tRATE OUR HOTEL WEB SITE IN NUMBERS BETWEEN 1 TO 5 : ");
	   scanf("%d",&r);
	   	printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
	            break;
case 4:for(i=0;i<m;i++)
{
	   printf("\n\t\t\t\t\t\t\t %dst COUSTMER",i+1);
       printf("\n\t\t\t\t\tNAME OF COUSTMER         : %s ",cn1[i]);
       printf("\n\t\t\t\t\tRoom Type                : %s",rt1[i]);
       printf("\n\t\t\t\t\tBooking Id               : %d",d1bi[i]);
       printf("\n\t\t\t\t\tNO.OF Days Of stay       : %d ",d1[i]);
       printf("\n\t\t\t\t\tPHONE NUMBER             : %lu",pn1[i]);
       printf("\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : %d",mp1[i]);
       printf("\n\t\t\t\t\tADHAAR NUMBER            : %lu",an1[i]);
       printf("\n\t\t\t\t\tTotal Price Paid By Coustmer : %d",tp1[i]);
   }
   if(m==0)
   printf("\n\t\t\t\t\t\t\t NO COUSTMER HAD BOOKED");
       printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
	            break;
case 5 : printf("\n\n\t\t\tPLEASE ENTER YOUR BOOKING ID(IF YOU DON'T PLEASE CHECK AT COUSTMER DETAILS) : ");
         scanf("%d",&di);
label11: printf("\n\n\t\t\t\t\t\t     INDEX     ITEM\t\tRUPEES");
	        printf("\n\t\t\t\t\t\t    -------   -------\t       --------");
	        printf("\n\t\t\t\t\t\t\t1      MASALA DOSA\t   25");
	        printf("\n\n\t\t\t\t\t\t\t2      IDLI\t\t   15");
	        printf("\n\n\t\t\t\t\t\t\t3      PURI\t\t   15");
	        printf("\n\n\t\t\t\t\t\t\t4      CHAPATI\t\t   25");
	        printf("\n\n\t\t\t\t\t\t\t5      ROTI\t\t   15");
	        printf("\n\n\t\t\t\t\t\t\t6      PANEER\t\t   50");
	        printf("\n\n\t\t\t\t\t\t\t7      VADA\t\t   15");
	        printf("\n\n\t\t\t\t\t\t\tPLEASE ENTER THE INDEX OF WHICH ITEM YOU WANT : ");
	        scanf("%d",&i);
	        printf("\n\t\t\t\t\t\t\tHOW MANY YOU WANT : ");
	        scanf("%d",&hm);
	        if(i==1||i==4)
	        {
	        	ar[m1]=25*hm;m1++;
			}
			if(i==7||i==2||i==5||i==3)
			{
				ar[m1]=15*hm;m1++;
			}
			if(i==6)
			{
				ar[m1]=50*hm;m1++;
			}
			if(i==1)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF MASALA DOSA",hm);
				if(i==2)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF  IDLI",hm);
				if(i==3)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF PURI",hm);
				if(i==4)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF CHAPATHI",hm);
				if(i==5)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF ROTI",hm);
				if(i==6)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF PANEER",hm);
				if(i==7)
			printf("\n\t\t\t\t\t\t\t\tTHE FOOD YOU ORDERED IS %d PLATES OF  VADA",hm);
			printf("\n\n\t\t\t\t\t\t\t\tIF YOU WANT TO ORDER AGAIN PRESS '1' TO GET BILL '0'");
			scanf("%d",&pre);
			if(pre==0)
			{
			if(di==12345)
			{
			m2=0;
			for(i=0;i<m1;i++)
			sum=sum+ar[i];
			br[m2]=sum;tp1[m2]=br[m2]+tp1[m2];
		}
			if(di==12346)
			{
			m2=1;
			for(i=0;i<m1;i++)
			sum=sum+ar[i];
			br[m2]=sum;tp1[m2]=br[m2]+tp1[m2];
			}
			if(di==12347)
			{
			m2=2;
			for(i=0;i<m1;i++)
			sum=sum+ar[i];
			br[m2]=sum;tp1[m2]=br[m2]+tp1[m2];
			}
			if(di==12348)
			{
			m2=3;
			for(i=0;i<m1;i++)
			sum=sum+ar[i];
			br[m2]=sum;tp1[m2]=br[m2]+tp1[m2];
			}
			if(di==12349)
			{
			m2=4;
			for(i=0;i<m1;i++)
			sum=sum+ar[i];
			br[m2]=sum;tp1[m2]=br[m2]+tp1[m2];
			}
			printf("\n\t\t\t\t\t\t\t\tTOTAL BILL IS : %d",br[m2]);m1=0;
			}
			if(pre==1)
			{
				system("cls");
				goto label11;
			}
				for(i=0;i<m1;i++)
				ar[i]=0;
				sum=0;
	        printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
	            break;
	case 6 :printf("\n\n\t\t\tPLEASE ENTER YOUR BOOKING ID(IF YOU DON'T PLEASE CHECK AT COUSTMER DETAILS) : ");
         scanf("%d",&di);
         if(di==12345)
         {
         	printf("\n\n\t\t\t\t\t\t\tYOUR SUIT ROOM IS SUCCESSFULLY CANCELLED");
         	printf("\n\n\t\t\t\t\t\t\tCANCELLATION CHARGES ARE Rs450 ON SUIT ROOM");
         	strcpy(cn1[0],"CANCELLED");
         	strcpy(rt1[0],"CANCELLED");d1bi[0]=0;d1[0]=0;pn1[0]=0;mp1[0]=0;an1[0]=0;tp1[0]=0;
		    strcpy(cn[0],"N/A");d[0]=0;strcpy(s[0],"yes");
		 }
		 if(di==12346)
         {
         	printf("\n\n\t\t\t\t\t\t\tYOUR SPLDELUX ROOM IS SUCCESSFULLY CANCELLED");
         	printf("\n\n\t\t\t\t\t\t\tCANCELLATION CHARGES ARE Rs350 ON SUIT ROOM");
         	strcpy(cn1[1],"CANCELLED");
         	strcpy(rt1[1],"CANCELLED");d1bi[1]=0;d1[1]=0;pn1[1]=0;mp1[1]=0;an1[1]=0;tp1[1]=0;
	        strcpy(cn[1],"N/A");d[1]=0;strcpy(s[1],"yes");	 
		 }
		 if(di==12347)
         {
         	printf("\n\n\t\t\t\t\t\t\tYOUR DELUX ROOM IS SUCCESSFULLY CANCELLED");
         	printf("\n\n\t\t\t\t\t\t\tCANCELLATION CHARGES ARE Rs250 ON SUIT ROOM");
         	strcpy(cn1[2],"CANCELLED");
         	strcpy(rt1[2],"CANCELLED");d1bi[2]=0;d1[2]=0;pn1[2]=0;mp1[2]=0;an1[2]=0;tp1[2]=0;
	        strcpy(cn[2],"N/A");d[2]=0;strcpy(s[2],"yes");	 
		 }
		 	 if(di==12348)
         {
         	printf("\n\n\t\t\t\t\t\t\tYOUR DOUBLE ROOM IS SUCCESSFULLY CANCELLED");
         	printf("\n\n\t\t\t\t\t\t\tCANCELLATION CHARGES ARE Rs150 ON SUIT ROOM");
         	strcpy(cn1[3],"CANCELLED");
         	strcpy(rt1[3],"CANCELLED");d1bi[3]=0;d1[3]=0;pn1[3]=0;mp1[3]=0;an1[3]=0;tp1[3]=0;
	        strcpy(cn[3],"N/A");d[3]=0;strcpy(s[3],"yes");	 
		 }
		 	 if(di==12349)
         {
         	printf("\n\n\t\t\t\t\t\t\tYOUR GENERAL ROOM IS SUCCESSFULLY CANCELLED");
         	printf("\n\n\t\t\t\t\t\t\tCANCELLATION CHARGES ARE Rs50 ON SUIT ROOM");
         	strcpy(cn1[4],"CANCELLED");
         	strcpy(rt1[4],"CANCELLED");d1bi[4]=0;d1[4]=0;pn1[4]=0;mp1[4]=0;an1[4]=0;tp1[4]=0;
	        strcpy(cn[4],"N/A");d[4]=0;strcpy(s[4],"yes");	 
		 }
		   printf("\n\n\t\t\t\t\t\t\t\tclick '1' to go to previous page to continue press '0': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label2;
	            }
	            break;
	case 7 : printf("\n\n\t\t\tPLEASE ENTER YOUR BOOKING ID(IF YOU DON'T PLEASE CHECK AT COUSTMER DETAILS) : ");
         scanf("%d",&di);
         if(di==12345)
         {
         	 printf("\n\t\t\t\t\tNAME OF COUSTMER         : %s ",cn[0]);
       printf("\n\t\t\t\t\tRoom Type                : suit");
       printf("\n\t\t\t\t\tBooking Id               : 12345");
       printf("\n\t\t\t\t\tNO.OF Days Of stay       : %d ",d[0]);
       printf("\n\t\t\t\t\tPHONE NUMBER             : %lu",pn[0]);
       printf("\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : %d",mp[0]);
       printf("\n\t\t\t\t\tADHAAR NUMBER            : %lu",an[0]);
       printf("\n\t\t\t\t\tTotal Price Paid By Coustmer : %d",tp[0]+br[0]);
		 }
		    if(di==12346)
         {
         	 printf("\n\t\t\t\t\tNAME OF COUSTMER         : %s ",cn[1]);
       printf("\n\t\t\t\t\tRoom Type                : spldelux");
       printf("\n\t\t\t\t\tBooking Id               : 12346");
       printf("\n\t\t\t\t\tNO.OF Days Of stay       : %d ",d[1]);
       printf("\n\t\t\t\t\tPHONE NUMBER             : %lu",pn[1]);
       printf("\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : %d",mp[1]);
       printf("\n\t\t\t\t\tADHAAR NUMBER            : %lu",an[1]);
       printf("\n\t\t\t\t\tTotal Price Paid By Coustmer : %d",tp[1]+br[1]);
		 }
		    if(di==12347)
         {
         	 printf("\n\t\t\t\t\tNAME OF COUSTMER         : %s ",cn[2]);
       printf("\n\t\t\t\t\tRoom Type                : delux");
       printf("\n\t\t\t\t\tBooking Id               : 12347");
       printf("\n\t\t\t\t\tNO.OF Days Of stay       : %d ",d[2]);
       printf("\n\t\t\t\t\tPHONE NUMBER             : %lu",pn[2]);
       printf("\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : %d",mp[2]);
       printf("\n\t\t\t\t\tADHAAR NUMBER            : %lu",an[2]);
       printf("\n\t\t\t\t\tTotal Price Paid By Coustmer : %d",tp[2]+br[2]);
		 }
		    if(di==12348)
         {
         	 printf("\n\t\t\t\t\tNAME OF COUSTMER         : %s ",cn[3]);
       printf("\n\t\t\t\t\tRoom Type                : double");
       printf("\n\t\t\t\t\tBooking Id               : 12348");
       printf("\n\t\t\t\t\tNO.OF Days Of stay       : %d ",d[3]);
       printf("\n\t\t\t\t\tPHONE NUMBER             : %lu",pn[3]);
       printf("\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : %d",mp[3]);
       printf("\n\t\t\t\t\tADHAAR NUMBER            : %lu",an[3]);
       printf("\n\t\t\t\t\tTotal Price Paid By Coustmer : %d",tp[3]+br[3]);
		 }
		    if(di==12349)
         {
         	 printf("\n\t\t\t\t\tNAME OF COUSTMER         : %s ",cn[4]);
       printf("\n\t\t\t\t\tRoom Type                : general");
       printf("\n\t\t\t\t\tBooking Id               : 12349");
       printf("\n\t\t\t\t\tNO.OF Days Of stay       : %d ",d[4]);
       printf("\n\t\t\t\t\tPHONE NUMBER             : %lu",pn[4]);
       printf("\n\t\t\t\t\tNO.OF PEOPLE ARE STAYING : %d",mp[4]);
       printf("\n\t\t\t\t\tADHAAR NUMBER            : %lu",an[4]);
       printf("\n\t\t\t\t\tTotal Price Paid By Coustmer : %d",tp[4]+br[4]);
		 }
		  printf("\n\n\t\t\t\t\t\t\t\tclick '0' to exit the application to continue press '1': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label1;
	            }
	            break;
	case 8 : goto label4;
} 
label4 :  system("cls");
           printf("\n\n\t\t\t\t\t\t\t\tEND");
          printf("\n\n\t\t\t\t\t\t\t\tclick '0' to exit the application to continue press '1': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label1;
	            }
 printf("\n\n\t\t\t\t\t\t\t\tclick '0' to exit the application to continue press '1': ");
            	scanf("%d",&pre);
	            if(pre==1)
	            {
		          system("cls");
	              goto label1;
}
}
