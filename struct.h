
typedef struct new_user{
    char new_username[30];
    char new_password[30];
	char new_email[30];
	
}new_user;
new_user new_user1;
typedef struct user{
	char username[30];
	char password[30];
}user;
user user1;


typedef struct cust{
    char name[20];
	char cell_no[20];
	char email[30];
	char nationality[20];
    char bank[30];
	char room_number[30];		
}cust;
cust cust1;



typedef struct chomber{
int indece;
int no_chombre;
}chomber;
chomber simple[10]={
	{1,1001},
	{2,1002},
	{3,1003},
	{4,1004},
	{5,1005},
	{6,1006},
	{7,1007},
	{8,1008},
	{9,1009},
	{10,1010},
};
chomber Double[8]={
	{1,1001},
	{2,1002},
	{3,1003},
	{4,1004},
	{5,1005},
	{6,1006},
	{7,1007},
	{8,1008},
};
chomber triple[5]={
	{1,1001},
	{2,1002},
	{3,1003},
	{4,1004},
	{5,1005},
	
};
chomber quadrapule[4]={
	{1,1001},
	{2,1002},
	{3,1003},
	{4,1004},
	
};




struct ava{
	int s_no;
	char room_t[20];
	int quantity_ava;
    int charges;
};
struct ava r[13]={
	{1,"SIMPLE    ",10,3500},
	{2,"DOUBLE    ",8,5500},
	{3,"TRIPLE    ",5,7500},
	{4,"QUADRAPULE",4,5000},
	
};
typedef struct  food{
    int plat_no;
    char name_plat[100];
    int chargees;
}food;

#define NUM_BREAKFAST 8
food B[10]={
	{1,"JUS DE FRUIT",3500},
	{2,"CAFE OU THE",5500},
	{3,"DES PAINS LEGERS",7500},
	{4,"LES CREPES ",5000},
	{5,"GRANOLA ",8500},
	{6,"SOOMTHIE BOWL",12000},
	{7,"BREAK CAKE ",9000},
	{8,"POWER SMOOTHIE",7500},
	{9,"FSJHJKJD",9000},
	{10,"JSKJK",6000},

};
food  L[10]={
	{1,"MARMITE DE POULET",3500},
	{2,"COUSCOUS MAROCAIN",5500},
	{3,"BROUCHETTE DE POULET",7500},
	{4,"SEFFA AU RIZ",5000},
	{5,"KEFTA AUX OMELETTES",8500},
	{6,"SALADE KEFTA",12000},
	{7,"TAJINE DE CREVETTES",9000},
	{8,"HARICOTS",7500},
	{9,"FSJHJKJD",9000},
	{10,"JSKJK",6000},
};
food D[10]={
	{1,"ENTRECOTE DE VEAUX ",3500},
	{2,"LA FROMAGERIE LECOQ ",5500},
	{3,"TAJINE DE VOLAILLE ",7500},
	{4,"NEMS DE BANANES",5000},
	{5,"LA FROMAGERIE LECOQ",8500},
	{6,"SALADE DE POIVRONS",12000},
	{7,"HARIRA",9000},
	{8,"FJSKJ",7500},
	{9,"FSJHJKJD",9000},
	{10,"JSKJK",6000},

};
// list 
typedef struct dispo{
	chomber chombeer;
	struct dispo *next;
}dispo;

void ajouter(dispo * debut , int cho ){
	dispo * p;
	p->chombeer.no_chombre=cho;
	p->next=debut;
	debut=p;
}
void supression(dispo * debut ,int ch){
	dispo * temp , *b;
	temp = debut;
	for (temp=debut ; temp=NULL ; temp = temp->next){
		if (temp->chombeer.no_chombre == ch){
			b=temp;
			temp = temp->next;
			free(b);
		}else {
			temp = temp->next;
		}
	}
}


//frames


char out[64] = "";
char new_username[30]="";
char new_password[30]="";
char new_email[30]="";
char no_plat[30]="";
char no_plat1[30]="";
char no_plat2[30]="";
char indice_ch[30]="";
char no[30]="" ;
char no_info[30];
bitmap_t* img;

int current_page = 1;
void frame0();
void frame1();
void frame2();
void frame3();
void frame4();
void frame5();
void frame6();
void frame7();
void frame8();
void frame9();
void frame10();
void frame11();
void frame12();
void frame13();
void frame14();
void frame15();
void frame16();
void frame17();
void file1();
void file2();
void file3();
void file4();






void frame() {
	switch (current_page) {
	
		case 1:
			frame1();
			break;
		case 2:
			frame2();
			break;
		case 3:
			frame3();
			break;
		case 4:
			frame4();
			break;
		case 5:
			frame5();
			break;
		case 6:
			frame6
			();
			break;
		case 7:
			frame7();
			break;
		case 8:
			frame8();
			break;
		case 9:
			frame9();
			break;
		case 10:
			frame10();
			break;
		case 11:
			frame11();
			break;
		case 12:
		  	frame12();
			  break;
		case 13:
			frame13();
			break;
		case 14 :
			frame14();
			break;
		case 15:
			frame15();
			break;
		case 16:
			frame16();
			break;
		case 17:
			frame17();
			break;
		default:
			break;
	}
}




//les pages


void frame1() {
	int y = 80;

	mApp_Text(150, y, "USERNAME");
	mApp_TextField(110, y + 25, 200, 20, user1.username, 0);

	y += 75;

	mApp_Text(150, y, "PASSWORD");
	mApp_TextField(110, y + 25, 200, 20, user1.password, 0);

    y+=75;
	if (mApp_Button(140, y, "      LOGIN     ")) {
    	FILE *f = fopen("data.txt","r");
		rewind(f);
    	char userdefault[30];
    	char passdefault[30];
    	char emaildefault[30];
    	int s = 0;
    	while(fscanf(f, "%s %s %s\n", userdefault, passdefault, emaildefault)==3) {
        	
       		if(strcmp(user1.username, userdefault) == 0 && 
            strcmp(user1.password, passdefault) == 0) {
            s = 1;
            break;
        	}
    
		}
    	fclose(f);
    	if (s == 1){
        current_page = 2;
		}else{
			MessageBox(NULL, "les info est incorrect","login", MB_OK);
		}
	}	

	y += 50;
	if (mApp_Button(140, y, "   NEW ACCOUNT  ")) {
        current_page = 9;
    }

	
	

}

void frame2() {
    
	int y=80;
	int x=80;

    if (mApp_Button(x, y , "    RESERVATION DE CHOMBRE    ")) {
        current_page = 3;
    }
	y+=65;
    if (mApp_Button(x, y , " LES INFORMATION DES CHOMBRES ")) {
        current_page = 4;
    }
	y+=65;
	
    if (mApp_Button(x,y, "         LE RESTAURANT        ")) {
        current_page = 5;
    }
	y+=65;
	if (mApp_Button(x,y, "         AUTRE SERVICE        "))
	{
		current_page=12;
	}
	y+=65;
	if (mApp_Button(x,y, "         NOUS CONTACTER        "))
	{
		current_page=17;
	}
	
    if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 1;
    }
}
    


int max=4;

void frame3(){
	char str[30];
    int i;
	 mApp_Text(50, 100, "NO");
	 mApp_Text(120, 100, "TYPE");
	 mApp_Text(210, 100, "QUANTITY");
	 mApp_Text(300, 100, "CHARGE");

	 
    int x = 50, y = 160;
    for (i = 0; i <max ; i++) {
            sprintf(str, "%d",r[i].s_no );
            mApp_Text(x, y, str);

            mApp_Text(x + 70, y, r[i].room_t);

            sprintf(str, "%d", r[i].quantity_ava);
            mApp_Text(x + 190, y, str);

			sprintf(str, "%d", r[i].charges);
            mApp_Text(x + 250, y, str);

            y += 30;  // move to next row
	}

	mApp_Text(35,300 , "  RESERVER PAR NO ");
	mApp_TextField(200, 295, 30, 20,indice_ch, 0);

	if (mApp_Button(280, 297, "OK")) {
		int N = atoi(indice_ch);
		if(N < 1 || N > 4){
			MessageBox(NULL,"invalid indice_ch","ERROR",MB_OK | MB_ICONINFORMATION);
		}else
        current_page = 10;
    }

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 2;
    }	
}
void frame4(){
	mApp_Text(30,40,"LES INFORMATION DES CHOMBRES");
	mApp_Text(60,80,"NO");
	mApp_Text(165,80,"TYPE");
	int i;
	char stri[30];
	int x = 60, y= 110;
	for ( i = 0; i < max; i++)
	{
		sprintf(stri, "%d",r[i].s_no);
		mApp_Text(x,y,stri);
		mApp_Text(x+105,y,r[i].room_t);

		y+=30;
	}
	
	mApp_Text(25,380 , "  CHOISIR PAR NO ");
	mApp_TextField(180, 380, 30, 20,no_info, 0);
   
	int  h= atoi(no_info);
	if (mApp_Button(250, 381, "OK")) {
        if( h < 1 || h >8){
			MessageBox(NULL,"no est invalid ","error",MB_OK | MB_ICONINFORMATION);
		}else
		current_page = 11;
    }

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 2;
    }	
}
void frame5(){
	if (mApp_Button(90, 100, "        BREAKFAST MENU        ")) {
        current_page = 6;
    }
    if (mApp_Button(90, 200,"          LUNCH MENU          ")) {
        current_page = 7;
    }
	
    if (mApp_Button(90, 300, "         DINNER MENU         ")) {
        current_page = 8;
    }
	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 2;
    }
}
void frame6(){
    char str[10];
	 mApp_Text(30, 50, "NO");
	 mApp_Text(60, 50, "TYPE");
	 
	 mApp_Text(245, 50, "CHARGE");

    int i;
    int x = 30, y = 100;
    for (i = 0; i < NUM_BREAKFAST; i++) {
            sprintf(str, "%d", B[i].plat_no);
            mApp_Text(x, y, str);

            mApp_Text(x + 30, y, B[i].name_plat);

            sprintf(str, "%d", B[i].chargees);
            mApp_Text(x + 220, y, str);

            y += 25;  // move to next row
	}

	mApp_Text(35,363 , "CHOISIR LE PLAT ");
	mApp_TextField(200, 360, 30, 20, no_plat , 0);
	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 5;
    }
	if (mApp_Button(255, 362, "OK")) {
		int N = atoi(no_plat);
		if (N < 1 || N > 8) {
			MessageBox(NULL, "invalid no_plat", "ERROR", MB_OK | MB_ICONINFORMATION);
		} else {
        	current_page = 14;
		}
    }
 }   
void frame7(){
	char str[10];
	
	mApp_Text(30, 50, "NO");
	mApp_Text(60, 50, "TYPE");
	 
	mApp_Text(245, 50, "CHARGE");
    int i;

    int x = 30, y = 100;
    for (i = 0; i < NUM_BREAKFAST; i++) {
            sprintf(str, "%d", L[i].plat_no);
            mApp_Text(x, y, str);

            mApp_Text(x + 30, y, L[i].name_plat);

            sprintf(str, "%d", L[i].chargees);
            mApp_Text(x + 220, y, str);

            y += 25;  // move to next row
	}
	mApp_Text(35,363 , "CHOISIR LE PLAT ");
	mApp_TextField(200, 360, 30, 20, no_plat1 , 0);
	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 5;
    }
	if (mApp_Button(255, 362, "OK")) {
		int N = atoi(no_plat1);
		if (N < 1 || N > 8) {
			MessageBox(NULL, "invalid no_plat", "ERROR", MB_OK | MB_ICONINFORMATION);
		} else {
        	current_page = 15;
		}
    }
}
void frame8(){
	char str[10];
	
	mApp_Text(30, 50, "NO");
	mApp_Text(60, 50, "TYPE");
	 
	mApp_Text(245, 50, "CHARGE");
    int i;
    int x = 30, y = 100;
    for (i = 0; i < NUM_BREAKFAST; i++) {
            sprintf(str, "%d", D[i].plat_no);
            mApp_Text(x, y, str);

            mApp_Text(x + 30, y, D[i].name_plat);

            sprintf(str, "%d", D[i].chargees);
            mApp_Text(x + 220, y, str);

            y += 25;  // move to next row
	}
	mApp_Text(35,363 , "CHOISIR LE PLAT ");
	mApp_TextField(200, 360, 30, 20, no_plat2 , 0);
	if (mApp_Button(330, 415, " EXIT ")){
        current_page = 5;
    }
	if (mApp_Button(255, 362, "OK")) {
		int N = atoi(no_plat2);
		if (N < 1 || N > 8) {
			MessageBox(NULL, "invalid no_plat", "ERROR", MB_OK | MB_ICONINFORMATION);
		} else {
        	current_page = 16;
		}
    }
}
void frame9(){
		int y = 50;
	
	mApp_Text(70, y, "NEW USERNAME");
	mApp_TextField(50, y + 25, 160, 20, new_user1.new_username , 0);

	y += 75;

	mApp_Text(70, y, "NEW PASSWORD");
	mApp_TextField(50, y + 25, 160, 20, new_user1.new_password, 0);

	y += 75;

	mApp_Text(70, y, "  NEW EMAIL");
	mApp_TextField(50, y + 25, 160, 20, new_user1.new_email, 0);

	if (mApp_Button(330, 415, " EXIT ")){
        current_page = 1;
    }
	if (mApp_Button(255, 262, "OK")) {
		file1();
		
			MessageBox(NULL, "votre inscription est complet", "inscriptin", MB_OK);
    }
}
void file1(){
	FILE *f;
	f=fopen("data.txt","a");
	fprintf(f,"%s %s %s\n",new_user1.new_username,new_user1.new_password,new_user1.new_email);
	fclose(f);
}
void file2(){
	FILE *g;
	g=fopen("data2.txt","a");
	fprintf(g,"%s %s %s %s %d \n",cust1.name,cust1.email,cust1.bank,cust1.nationality,cust1.cell_no);
	fclose(g);
}
void file3(){
	FILE *h;
	h=fopen("data3.txt","a");
	fprintf(h,"%s %s %s  \n",cust1.name,cust1.bank,cust1.room_number);
	fclose(h);
}


void frame10(){
	
	char str[30]="";
	int x = atoi(indice_ch);
	int y =80;
	mApp_Text(60,50 , "LE PRIX EST  ");
	sprintf(str, "%d", r[x-1].charges);
    mApp_Text(170,50 , str);
	mApp_Text(70, y, "ENTRER VOTRE NOM");
	mApp_TextField(50,y+15, 200, 20,cust1.name , 0);
    y+=40;
	mApp_Text(70, y, "ENTRER VOTRE EMAIL");
	mApp_TextField(50,y+15, 200, 20,cust1.email , 0);
	y+=40;		
			 
	mApp_Text(70, y, "ENTRER VOTRE NO BANK");
	mApp_TextField(50,y+15, 200, 20,cust1.bank , 0);
	y+=40;

	mApp_Text(70, y, "ENTRER VOTRE NATIONALITY");
	mApp_TextField(50,y+15, 200, 20,cust1.nationality , 0);
	y+=40;

	mApp_Text(70, y, "ENTRER VOTRE NUMERO");
	mApp_TextField(50,y+15, 200, 20,cust1.cell_no , 0);


	if (mApp_Button(150, 360, "OK")) {
		file2();
      MessageBox(NULL, "operation est complet", "reservation", MB_OK);
    }

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 3;
    }
	
}
void frame11(){
	 
	int x = atoi(no_info);
	
		if(x==1){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 1");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==2){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 2");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==3){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 3");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==4){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 4");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==5){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 5");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==6){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 6");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==7){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 7");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if(x==8){
			mApp_Text(15,120," HAD CHOMBRE DYAL WAHD SAFI 8");
			mApp_Text(15,140," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,160," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,180," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,200," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,220," HAD CHOMBRE DYAL WAHD SAFI");
			mApp_Text(15,240," HAD CHOMBRE DYAL WAHD SAFI");
		}
		if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 4;
    }
}
void frame12(){
	

   mApp_Text(80, 100,"2 PISCINE"); 
   mApp_Text(80, 160,"CONNEXIO WIFI GRATUITE");
   mApp_Text(80, 220,"SPA ET CENTRE DE BIEN ETRE");
   mApp_Text(80, 280,"NAVETTE AEROPORT");
   mApp_Text(80,340,"PARKING GRATUIT");
  
	
	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 2;
    }
}

void frame13(){

if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 2;
    }
}

void frame14(){
	char str[30]="";
	int x = atoi(no_plat);
	
	mApp_Text(100,70 , "LE PRIX EST  ");
	sprintf(str, "%d", B[x - 1].chargees);
	mApp_Text(200,70 , str);

	mApp_Text(100, 120, "ENTRER VOTRE NOM");
	mApp_TextField(50,150, 270, 20,cust1.name , 0);

	mApp_Text(100, 200, "ENTRER VOTRE NO BANK");
	mApp_TextField(50,230, 270, 20,cust1.bank , 0);
	
	mApp_Text(100,280,"ENTRER LE NO DE CHOMBRE");
	mApp_TextField(50,310,270,20,cust1.room_number,0);

	if (mApp_Button(180, 362, "OK" )) {
		file3();
		MessageBox(NULL, "operation est complet", "reservation", MB_OK);
	}

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 6;
    }
}
void frame15(){
	char str[30]="";
	int x = atoi(no_plat1);
	
		
	mApp_Text(100,70 , "LE PRIX EST  ");
	sprintf(str, "%d", L[x - 1].chargees);
	mApp_Text(200,70 , str);

	mApp_Text(100, 120, "ENTRER VOTRE NOM");
	mApp_TextField(50,150, 270, 20,cust1.name , 0);

	mApp_Text(100, 200, "ENTRER VOTRE NO BANK");
	mApp_TextField(50,230, 270, 20,cust1.bank , 0);
	
	mApp_Text(100,280,"ENTRER LE NO DE CHOMBRE");
	mApp_TextField(50,310,270,20,cust1.room_number,0);

	if (mApp_Button(180, 362, "OK" )) {
		file3();
		MessageBox(NULL, "operation est complet", "reservation", MB_OK);
	}

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 7;
    }
}

void frame16(){
	char str[30]="";
	int x = atoi(no_plat2);
	
	mApp_Text(100,70 , "LE PRIX EST  ");
	sprintf(str, "%d", D[x - 1].chargees);
	mApp_Text(200,70 , str);

	mApp_Text(100, 120, "ENTRER VOTRE NOM");
	mApp_TextField(50,150, 270, 20,cust1.name , 0);

	mApp_Text(100, 200, "ENTRER VOTRE NO BANK");
	mApp_TextField(50,230, 270, 20,cust1.bank , 0);
	
	mApp_Text(100,280,"ENTRER LE NO DE CHOMBRE");
	mApp_TextField(50,310,270,20,cust1.room_number,0);

	if (mApp_Button(180, 362, "OK" )) {
		file3();
		MessageBox(NULL, "operation est complet", "reservation", MB_OK);
	}

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 7;
    }

	if (mApp_Button(330, 415, " EXIT ")) {
        current_page = 8;
    }
}
char name[30];
#define NUM_LINES 14
char demonde[NUM_LINES][254];

void frame17(){
	
	mApp_Text(110,35," ENTRER VOTRE NOM");
	mApp_TextField(65,55,260,20,name,0);
	mApp_Text(95,80," ECRIR VOTRE DEMONDE ");
	int y = 100;
	for (int i = 0; i < NUM_LINES; i++) {
		mApp_TextField(60,y,260,25, demonde[i],1);
		y += 20;
	}
	if (mApp_Button(330, 390, "OK")) {
		file4();
        MessageBox(NULL, "operation est complet", "contact", MB_OK);
    }

	if (mApp_Button(330, 415, " EXIT ")){
        current_page = 2;
    }
}


void file4(){
	FILE *f=fopen("demondee.txt","a");
	if (!f) {
		printf("failed to open file demonde.txt\n");
		return;
	}

	printf("file opened successfuly\n");

	fprintf(f,"%s\n",name);
	for (int i = 0; i < NUM_LINES; i++) {
		printf("%d\n", strlen(demonde[i]));
		if (strlen(demonde[i]) != 0)
			fprintf(f,"%s ",demonde[i]);

			
	}
	fprintf(f, "\n");
	fclose(f);
}












