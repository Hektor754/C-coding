#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 90

int choice1(int Q,int player);
int choice2(int Q,int player);
int choice3(int Q,int player);
int choice4(int Q,int player);
int choice5(int Q,int player);
int choice6(int Q,int player);

main()
{
	int i,j,x,p,d,num,draw,Q,p1,p2,p3,p4,c1,c2,c3,c4;
	
	//kwdikas gia tabani toy menu
	printf("\n\n");
	printf("\t");
	printf("%c",201);
	for(i=0; i<N; i++)
		printf("%c",205);
	printf("%c",187);
	printf("\n");
	
	//kwdikas gia toixos toy menu
	printf("\t");
	printf("%c",186);
	for(i=0; i<43; i++)
		printf(" ");
	printf("MENU");
	for(i=0; i<43; i++)
		printf(" ");
	printf("%c",186);
	printf("\n");
	for(j=0; j<2; j++)
	{
		printf("\t");
		printf("%c",186);
		for(i=0; i<N; i++)
			printf(" ");
		printf("%c",186);
		printf("\n");
	}
	printf("\t");
	printf("%c",186);
	for(i=0; i<39; i++)
		printf(" ");
	printf("1-START GAME");
	for(i=0; i<39; i++)
		printf(" ");
	printf("%c",186);
	printf("\n");
	printf("\t");
	printf("%c",186);
	for(i=0; i<42; i++)
		printf(" ");
	printf("2-INFO");
	for(i=0; i<42; i++)
		printf(" ");
	printf("%c",186);
	printf("\n");
	printf("\t");
	printf("%c",186);
	for(i=0; i<34; i++)
		printf(" ");
	printf("3-SELECTIVE CATEGORIES");
	for(i=0; i<34; i++)
		printf(" ");
	printf("%c",186);
	printf("\n");
	
    
    //kwdikas gia patwma toy menu
    printf("\t");
	printf("%c",200);
	for(i=0; i<N; i++)
		printf("%c",205);
	printf("%c",188);
	printf("\n");
	
	do
	{
		scanf("%d",&x);
	}while(x<1 || x>3);
	
	switch(x){
	
	case 1:
		system("cls");
		printf("\n\n");
		printf("\t");
		printf("%c",201);
		for(i=0; i<N; i++)
			printf("%c",205);
		printf("%c",187);
		printf("\n");
		
		printf("\t");
		printf("%c",186);
		for(i=0; i<38; i++)
			printf(" ");
		printf("INSERT PLAYERS");
		for(i=0; i<38; i++)
			printf(" ");
		printf("%c",186);
		printf("\n");
		printf("\t");
		printf("%c",200);
		for(i=0; i<N; i++)
			printf("%c",205);
		printf("%c",188);
		printf("\n");
		scanf("%d",&p);
		break;
	
	case 2:
		system("cls");
		printf("rules are simple.You can insert from 2 to 4 players");
		printf("\nthere are 6 categories Geography,Entertaiment");
		printf("\nHistory,Arts and Literature,Science and Nature");
		printf("\nAnd Sports.You can choose to play on selective");
		printf("\ncategories nevertheless if you answer 4 correct");
		printf("\nin a row the next Q can give a category point if");
		printf("\nyou complete all the category points you Win!!!");
		
		
	}
	
	if(p==2)
	{
		srand(time(NULL));
		while(1)
		{
			printf("player 1 press 1 to roll the dice for a category");
			scanf("%d",&d);
			do{
			num=rand()%7;
			}while(num==0);
			switch(num){
			
			
			case 1:
				do{
				system("cls");
				printf("etuxes gewgrafia");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%101;
				}while(Q<1 || Q>100);
				choice1(Q,p1);
				
			case 2:
				do{
				system("cls");
				printf("etuxes Entertaiment");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%201;
				}while(Q<100 || Q>200);
				choice2(Q,p1);
			
			case 3:
				do{
				system("cls");
				printf("etuxes history");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%301;
				}while(Q<200 || Q>300);
				choice3(Q,p1);
				
			case 4:
				do{
				system("cls");
				printf("etuxes Arts and Literature");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%401;
				}while(Q<300 || Q>400);
				choice4(Q,p1);
				
			case 5:
				do{
				system("cls");
				printf("etuxes science and nature");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%501;
				}while(Q<400 || Q>500);
				choice5(Q,p1);
				
			case 6:
				do{
				system("cls");
				printf("etuxes sports");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%601;
				}while(Q<500 || Q>600);
				choice6(Q,p1);
			}
		
			if(p1==4)
			{
				system("cls");
				printf("time for category point for player 1");
				
				printf("player 1 press 1 to roll the dice for a category");
				scanf("%d",&d);
				do{
				num=rand()%7;
				}while(num==0);
				switch(num){
			
			
				case 1:
					do{
					system("cls");
					printf("etuxes gewgrafia");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%101;
					}while(Q<1 || Q>100);
					choice1(Q,p1);
				
				case 2:
					do{
					system("cls");
					printf("etuxes Entertaiment");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%201;
					}while(Q<100 || Q>200);
					choice2(Q,p1);
			
				case 3:
					do{
					system("cls");
					printf("etuxes history");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%301;
					}while(Q<200 || Q>300);
					choice3(Q,p1);
				
				case 4:
					do{
					system("cls");
					printf("etuxes Arts and Literature");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%401;
					}while(Q<300 || Q>400);
					choice4(Q,p1);
					
				case 5:
					do{
					system("cls");
					printf("etuxes science and nature");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%501;
					}while(Q<400 || Q>500);
					choice5(Q,p1);
				
				case 6:
					do{
					system("cls");
					printf("etuxes sports");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%601;
					}while(Q<500 || Q>600);
					choice6(Q,p1);
				if(p1==5)
					c1++;
				else
					printf("next time...");
				}
			}
			
			if(c1=6)
			{
				break;
				printf("player 1 is the winner!");
			}
			
			printf("player 2 press 1 to roll the dice for a category");
			scanf("%d",&d);
			do{
			num=rand()%7;
			}while(num==0);
			switch(num){
			
			
			case 1:
				do{
				system("cls");
				printf("etuxes gewgrafia");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%101;
				}while(Q<1 || Q>100);
				choice1(Q,p2);
				
			case 2:
				do{
				system("cls");
				printf("etuxes Entertaiment");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%201;
				}while(Q<100 || Q>200);
				choice2(Q,p2);
			
			case 3:
				do{
				system("cls");
				printf("etuxes history");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%301;
				}while(Q<200 || Q>300);
				choice3(Q,p2);
				
			case 4:
				do{
				system("cls");
				printf("etuxes Arts and Literature");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%401;
				}while(Q<300 || Q>400);
				choice4(Q,p2);
				
			case 5:
				do{
				system("cls");
				printf("etuxes science and nature");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%501;
				}while(Q<400 || Q>500);
				choice5(Q,p2);
				
			case 6:
				do{
				system("cls");
				printf("etuxes sports");
				printf("press 1 to draw a question");
				scanf("%d",&draw);
				}while(draw!=1);
				system("cls");
				do{
					Q=rand()%601;
				}while(Q<500 || Q>600);
				choice6(Q,p2);
			}
		
			if(p2==4)
			{
				system("cls");
				printf("time for category point for player 1");
				
				printf("player 2 press 1 to roll the dice for a category");
				scanf("%d",&d);
				do{
				num=rand()%7;
				}while(num==0);
				switch(num){
			
			
				case 1:
					do{
					system("cls");
					printf("etuxes gewgrafia");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%101;
					}while(Q<1 || Q>100);
					choice1(Q,p2);
				
				case 2:
					do{
					system("cls");
					printf("etuxes Entertaiment");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%201;
					}while(Q<100 || Q>200);
					choice2(Q,p2);
			
				case 3:
					do{
					system("cls");
					printf("etuxes history");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%301;
					}while(Q<200 || Q>300);
					choice3(Q,p2);
				
				case 4:
					do{
					system("cls");
					printf("etuxes Arts and Literature");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%401;
					}while(Q<300 || Q>400);
					choice4(Q,p2);
					
				case 5:
					do{
					system("cls");
					printf("etuxes science and nature");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%501;
					}while(Q<400 || Q>500);
					choice5(Q,p2);
				
				case 6:
					do{
					system("cls");
					printf("etuxes sports");
					printf("press 1 to draw a question");
					scanf("%d",&draw);
					}while(draw!=1);
					system("cls");
					do{
						Q=rand()%601;
					}while(Q<500 || Q>600);
					choice6(Q,p2);
				if(p2==5)
					c1++;
				else
					printf("next time...");
				}
			}
			
			if(c2=6)
			{
				break;
				printf("player 2 is the winner!");
			}
			
		}
	}
}

int choice1(int Q,int player)
{
	int a;
	
	switch(Q){
		
	case 1:
		system("cls");
		printf("\tPoia einai h prwteuousa ths gewrgias?");
		printf("\n\t1.Tiflida\t2.mpakou");
		printf("\n\t3.taskendh\t4.gierevan");
		scanf("%d",&a);
		if(a!=1)
			return player;
		else
		{
			player++;
			return player;
		}
	
	case 2:
		system("cls");
		printf("\tpoia einai h prwteousa ths indonhsias?");
		printf("\n\t1.manila\t2.mpangkok");
		printf("\n\t3.kouala lampour\t3.tzakarta");
		scanf("%d",&a);
		if(a!=4)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 3:
		system("cls");
		printf("\tpoio einai to xartonomisma sthn souaxilh");
		printf("\n\t1.euro\t2.lira");
		printf("\n\t3.roupi\t4.dollario");
		scanf("%d",&a);
		if(a!=3)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 4:
		system("cls");
		printf("\tpoia einai h poio puknokatoikimenh perioxh sthn australia");
		printf("\n\t1.dutikh australia\t2.nea notia australia");
		printf("\n\t3.queensland\t4.victoria");
		scanf("%d",&a);
		if(a!=2)
			return player;
		else
		{
			player++;
			return player;
		}
	
	case 5:
		system("cls");
		printf("\tpoia einai h prwteuousa ths polonias");
		printf("\n\t1.krakovia\t2.poznan");
		printf("\n\t3.gdansk\t4.barsovia");
		scanf("%d",&a);
		if(a!=4)
			return player;
		else
		{
			player++;
			return player;
		}
	
	case 6:
		system("cls");
		printf("\tpoia einai h prwteuousa ths venezouelas");
		printf("\n\t1.mpogkota\t2.lima");
		printf("\n\t3.kito\t4.karakas");
		scanf("%d",&a);
		if(a!=4)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 7:
		system("cls");
		printf("\tse poia xwra vrisketai to megalutero energo hfaistio");
		printf("\n\t1.indonhsia\t2.filipines");
		printf("\n\t3.ekouador\t4.iapwnia");
		scanf("%d",&a);
		if(a!=3)
			return player;
		else
		{
			player++;
			return player;
		}
	
	case 8:
		system("cls");
		printf("\tpoio potami diasxizei thn rwmh");
		printf("\n\t1.doynavhs\t2.tameshs");
		printf("\n\t3.tiberhs\t4.sikouanas");
		scanf("%d",&a);
		if(a!=3)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 9:
		system("cls");
		printf("\tpoio onoma limaniou ispanikhs katagwghs metafrazetai se 'aspro spiti'");
		printf("\n\t1.valenthia\t2.casablanca");
		printf("\n\t3.mpartselona\t4.malaga");
		scanf("%d",&a);
		if(a!=2)
			return player;
		else
		{
			player++;
			return player;
		}
	
	case 10:
		system("cls");
		printf("\tpoio einai to nomisma sthn norvhgia");
		printf("\n\t1.euro\t2.yen");
		printf("\n\t3.lira\t4.krone");
		scanf("%d",&a);
		if(a!=4)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 11:
		system("cls");
		printf("\tse poia xersonhso einai h ispania kai h portogalia");
		printf("\n\t1.sthn italikh\t2.sthn skandinavikh");
		printf("\n\t3.sthn balkanikh\t4.sthn ivirikh");
		scanf("%d",&a);
		if(a!=4)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 12:
		system("cls");
		printf("\tpoio mikro nhsi vrisketai ston kolpo ths napolhs");
		printf("\n\t1.mykonos\t2.isle of capri");
		printf("\n\t3.corsica\t4.ibiza");
		scanf("%d",&a);
		if(a!=2)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 13:
		system("cls");
		printf("\tpoia fantastikh grammh akolouthaei ton 180 moirwn meshvrino mesa apo ton atlantiko");
		printf("\n\t1.prwtos meshmvrinos\tishmerinos");
		printf("\n\t3.diethnhs grammh hmeromhnias\t4.tropikos toy karkinoy");
		scanf("%d",&a);
		if(a!=3)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 14:
		system("cls");
		printf("\tpoio einai to nomisma ths slovenians");
		printf("\n\t1.tolar\t2.euro");
		printf("\n\t3.lira\t4.marka");
		scanf("%d",&a);
		if(a!=1)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 15:
		system("cls");
		printf("\tpoia einai prwteuousa twn marshall islands");
		printf("\n\t1.ebeye\t2.majuro");
		printf("\n\t3.dalap-ulinga-darrit\t4.jaluit");
		scanf("%d",&a);
		if(a!=3)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 16:
		system("cls");
		printf("\tpoia einai h megaluterh polh toy ishmerinou");
		printf("\n\t1.guayaquil\t2.machala");
		printf("\n\t3.cuenca\t4.quito");
		scanf("%d",&a);
		if(a!=1)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 17:
		system("cls");
		printf("\tpoia portogalezikh apoikia egine ths kinas to 1999");
		printf("\n\t1.goa\t2.cape verde");
		printf("\n\t3.macau\t4.mozambique");
		scanf("%d",&a);
		if(a!=3)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 18:
		system("cls");
		printf("\tpoia einai h prwteuousa ths moggolias");
		printf("\n\t1.ulanbaator\t2.astana");
		printf("\n\t3.anoi\t4.pekino");
		scanf("%d",&a);
		if(a!=1)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 19:
		system("cls");
		printf("\tpoio potami sxhmatizei meros toy sunorou US-mexico");
		printf("\n\t1.missisipi\t2.rio grande");
		printf("\n\t3.missouri\t4.colorando");
		scanf("%d",&a);
		if(a!=2)
			return player;
		else
		{
			player++;
			return player;
		}
	
	case 20:	
		system("cls");
		printf("\tpoio einai to nomisma sto laos");
		printf("\n\t1.kip\t2.rupee");
		printf("\n\t3.taka\t4.dong");
		scanf("%d",&a);
		if(a!=1)
			return player;
		else
		{
			player++;
			return player;
		}
		
	case 21:
		system("cls");
		printf("\tpoia polh ths amerikhs onomastike apo ton saint francis toy assisi");
		printf("\n\t1.santa fe\t2.san francisco");
		printf("\n\t3.los angeles\t4.san diego");
		scanf("%d",&a);
		if(a!=2)
			return player;
		else
		{
			player++;
			return player;
		}
	}
}
