#include <stdio.h>
#include <string.h>
struct book {
    char id[30];
   char title[200];
    int price;
    int qty;
};

struct book eCalculus[40]=
{
    {"1.1","Essential Calculus Skills Practice Workbook",23,0},
    {"1.2","Calculus For Dummies",18,0},
    {"1.3","Princeton Review AP Calculus BC Premium",89,0},
    {"1.4","Differential Equations Essential Skills PracticeI Found Peace",50,0}
};
struct book ePhysics[40]=
{
    {"2.1","The Physics Book",200,0},
    {"2.2","Super Simple Physics",180,0},
    {"2.3","For the Love of Physics",89,0},
    {"2.4","Physics: A complete introduction",350,0}
};
struct book eDataStru[40]=
{
    {"3.1","Data Structures and Algorithms Made Easy",200,0},
    {"3.2","Data Structures and Algorithms in Python",180,0},
    {"3.3","Data Structures and Algorithms in Java",89,0},
    {"3.4","Algorithms and Data Structures in Action",350,0}
};
struct book tCalculus[40]=
{
   {"4.1","shakespeare",200,0},
    {"4.2","The Amazing World",180,0},
    {"4.3","The Night of Horror!",89,0},
    {"4.4","I Found Peace",350,0}
};
struct book tPhysics[40]=
{
    {"5.1","shakespeare",200,0},
    {"5.2","The Amazing World",180,0},
    {"5.3","The Night of Horror!",89,0},
    {"5.4","I Found Peace",350,0}
};
struct book tDataStru[40]=
{
    {"6.1","shakespeare",200,0},
    {"6.2","The Amazing World",180,0},
    {"6.3","The Night of Horror!",89,0},
    {"6.4","I Found Peace",350,0}
};
struct book cart[10];
int cartItems=0;
int totalPrice=0;
int ecalc=4;
int ephy=4;
int edata=4;
int tcalc=4;
int tphy=4;
int tdata=4;
void DisplayEClaculus();
void DisplayEPhysics();
void DisplayEDataStru();
void DisplayTClaculus();
void DisplayTPhysics();
void DisplayTDataStru();
void viewCart();
void eCalculus1(char *str);
void ePhysics1(char *str);
void eDataStru1(char *str);
void tCalculus1(char *str);
void tPhysics1(char *str);
void tDataStru1(char *str);
void addeCalculus();
void addePhysics();
void addeData();
void addtCalculus();
void addetPhysics();
void addtData();
int main()
{
    int option=0;
    printf("Welcome to Our E-Book App");
     do {printf(" Choose an option: \n 0-Add Books to the store \n1 -View products  \n 2-Add to Cart \n 3-View My Cart \n 4-I finished Shopping\n");
     scanf("%d",&option);
     switch(option){
         int lang;
         case 0:printf("Chose a Language:\n 1-ENGLISH \n 2-TURKISH \n");
          scanf("%d",&lang);
          switch(lang){
            int cat;
           case 1: printf("Chose a Category:\n 1-Calculus \n 2-Physics \n 3-Data Structures \n");
              scanf("%d",&cat);
              switch(cat){
                case 1:addeCalculus();
                break;
                case 2:addePhysics();
                break;
                case 3:addeData();
                break;
              }
              break;
            case 2:printf("Chose a Category:\n 1-Calculus \n 2-Physics \n 3-Data Structures \n");
              scanf("%d",&cat);
              switch(cat){
                case 1:addtCalculus();
                break;
                case 2:addetPhysics();
                break;
                case 3:addtData();
                break;
              }
              break;
          }
          break;
        case 1: printf("Chose a Language:\n 1-ENGLISH \n 2-TURKISH \n");
        scanf("%d",&lang);
          switch(lang){
            int cat;
           case 1: printf("Chose a Category:\n 1-Calculus \n 2-Physics \n 3-Data Structures \n");
              scanf("%d",&cat);
              switch(cat){
                case 1:DisplayEClaculus();
                break;
                case 2:DisplayEPhysics();
                break;
                case 3:DisplayEDataStru();
                break;
              }
              break;
            case 2:printf("Chose a Category:\n 1-Calculus \n 2-Physics \n 3-Data Structures \n");
              scanf("%d",&cat);
              switch(cat){
                case 1:DisplayTClaculus();
                break;
                case 2:DisplayTPhysics();
                break;
                case 3:DisplayTDataStru();
                break;
              }
              break;
          }
          break;
          case 2: printf("please Enter the  ID of the book desired to add! ");
         char id[20];
         scanf("%s",&id);
           switch (id[0]){
          case '1': 
          eCalculus1(id);
          break;
          case '2':ePhysics1(id);
          break;
          case '3':eDataStru1(id);
          break;
          case '4':tCalculus1(id);
          break;
          case '5':tPhysics1(id);
    
          break;
          case '6':tDataStru1(id);
          break;
           }
           break;
          case 3:
        viewCart();
        break;
     }
     }while(option!=4);
   

return 0;
}
void DisplayEClaculus(){
    for (int i=0;i<ecalc;i++){
        printf("%s- %s--%d $\n",eCalculus[i].id,eCalculus[i].title,eCalculus[i].price);
    }
}
void DisplayEPhysics(){
    for (int i=0;i<ephy;i++){
        printf("%s- %s--%d $\n",ePhysics[i].id,ePhysics[i].title,ePhysics[i].price);
    }
}
void DisplayEDataStru(){
    for (int i=0;i<edata;i++){
        printf("%s- %s--%d $\n",eDataStru[i].id,eDataStru[i].title,eDataStru[i].price);
    }
}
void DisplayTClaculus(){
    for (int i=0;i<tcalc;i++){
        printf("%s- %s--%d $\n",tCalculus[i].id,tCalculus[i].title,tCalculus[i].price);
    }
}
void DisplayTPhysics(){
    for (int i=0;i<tphy;i++){
        printf("%s- %s--%d $\n",tPhysics[i].id,tPhysics[i].title,tPhysics[i].price);
    }
}
void DisplayTDataStru(){
    for (int i=0;i<tdata;i++){
        printf("%s- %s--%d $\n",tDataStru[i].id,tDataStru[i].title,tDataStru[i].price);
    }
}
void eCalculus1(char *str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<ecalc)){
if ( strcmp(eCalculus[j].id,str)==0 ){
    totalPrice+=eCalculus[j].price;
    while (i<=cartItems){
        if ( strcmp(cart[i].id,str)==0) {
            flag=1;
            ++cart[i].qty;
            break;
        } else i++;
    }
    if (flag==1)
    break; 
    else
      {
        cart[cartItems]=eCalculus[j];
      cart[cartItems].qty++;
      ++cartItems;
    break;}
} else j++;
}
}
void ePhysics1(char *str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<ephy)){
if (strcmp(ePhysics[j].id, str)==0){
    totalPrice+=ePhysics[j].price;
    while (i<=cartItems){
        if (strcmp(cart[i].id,str)==0) {
            flag=1;
            ++cart[i].qty;
            break;
        } else i++;
    }
    if (flag==1)
    break; 
    else
      {cart[cartItems]=ePhysics[j];
      cart[cartItems].qty++;
      ++cartItems;
    break;}
} else j++;
}
}
void eDataStru1(char*str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<edata)){
if (strcmp(eDataStru[j].id, str)==0){
    totalPrice+=eDataStru[j].price;
    while (i<=cartItems){
        if (strcmp(cart[i].id,str)==0) {
            flag=1;
            ++cart[i].qty;
            break;
        } else i++;
    }
    if (flag==1)
    break; 
    else
      {cart[cartItems]=eDataStru[j];
      cart[cartItems].qty++;
      ++cartItems;
    break;}
} else j++;
}
}
void tCalculus1(char *str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<tcalc)){
if (strcmp(tCalculus[j].id, str)==0){
    totalPrice+=tCalculus[j].price;
    while (i<=cartItems){
        if (strcmp(cart[i].id,str)==0) {
            flag=1;
            ++cart[i].qty;
            break;
        } else i++;
    }
    if (flag==1)
    break; 
    else
      {cart[cartItems]=tCalculus[j];
      cart[cartItems].qty++;
      ++cartItems;
    break;}
} else j++;
}
}
void tPhysics1(char *str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<tphy)){
if (strcmp(tPhysics[j].id, str)==0){
    totalPrice+=tPhysics[j].price;
    while (i<=cartItems){
        if (strcmp(cart[i].id,str)==0) {
            flag=1;
            ++cart[i].qty;
            break;
        } else i++;
    }
    if (flag==1)
    break; 
    else
      {cart[cartItems]=tPhysics[j];
      cart[cartItems].qty++;
      ++cartItems;
    break;}
} else j++;
}
}
void tDataStru1(char *str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<tdata)){
if (strcmp(tDataStru[j].id, str)==0){
    totalPrice+=tDataStru[j].price;
    while (i<=cartItems){ 
        if (strcmp(cart[i].id,str)==0) {
            flag=1;
            ++cart[i].qty;
            break;
        } else i++;
    }
        if (flag==1)
    break; 
    else
      {cart[cartItems]=tDataStru[j];
      cart[cartItems].qty++;
      ++cartItems;
    break;}
} else j++;
}
}
void viewCart() {
    for (int i = 0; i <cartItems ; i++) {
        printf("-- title: %s, price: %d, quantity:%d\n", cart[i].title, cart[i].price,cart[i].qty);
    }
    printf(" \n TOTAL PRICE:%d",totalPrice);
}
void addeCalculus(){
    printf("Enter the Price: \n");
    scanf("%d",&eCalculus[ecalc].price);
     printf("Enter the Title: \n");
    scanf("%s",&eCalculus[ecalc].title);
    strcpy(eCalculus[ecalc].id, "1.1");
    eCalculus[ecalc].id[2]=(ecalc+1)+'0';
    ecalc++;
}
void addePhysics(){
     printf("Enter the Price:\n ");
    scanf("%d",&ePhysics[ephy].price);
     printf("Enter the Title:\n");
    scanf("%s",&ePhysics[ephy].title);
    strcpy(ePhysics[ephy].id, "2.1");
    ePhysics[ephy].id[2]=(ephy+1)+'0';
    ephy++;
}
void addeData(){
    printf("Enter the Price:\n");
    scanf("%d",&eDataStru[edata].price);
     printf("Enter the Title:\n");
    scanf("%s",&eDataStru[edata].title);
    strcpy(eDataStru[edata].id, "3.1");
    eDataStru[edata].id[2]=(edata+1)+'0';
    edata++;
}
void addtCalculus(){
    printf("Enter the Price:\n ");
    scanf("%d",&tCalculus[tcalc].price);
     printf("Enter the Title:\n");
    scanf("%s",&tCalculus[tcalc].title);
    strcpy(tCalculus[tcalc].id, "4.1");
    tCalculus[tcalc].id[2]=(tcalc+1)+'0';
    tcalc++;
}
void addetPhysics(){
     printf("Enter the Price;\n ");
    scanf("%d",&tPhysics[tphy].price);
     printf("Enter the Title:");
    scanf("%s",&tPhysics[tphy].title);
    strcpy(tPhysics[tphy].id, "5.1");
    tPhysics[tphy].id[2]=(tphy+1)+'0';
    tphy++;
}
void addtData(){
    printf("Enter the Price:\n");
    scanf("%d",&tDataStru[tdata].price);
     printf("Enter the Title:\n");
    scanf("%s",&tDataStru[tdata].title);
    strcpy(tDataStru[tdata].id, "6.1");
    tDataStru[tdata].id[2]=(tdata+1)+'0';
    tdata++;
}
