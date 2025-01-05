#include <stdio.h>
#include <string.h>
struct book {
    char id[30];
   char title[200];
    int price;
    int qty;
};

struct book eCalculus[4]=
{
    {"1.1","shakespeare",200,0},
    {"1.2","The Amazing World",180,0},
    {"1.3","The Night of Horror!",89,0},
    {"1.4","I Found Peace",350,0}
};
struct book ePhysics[4]=
{
    {"2.1","shakespeare",200,0},
    {"2.2","The Amazing World",180,0},
    {"2.3","The Night of Horror!",89,0},
    {"2.4","I Found Peace",350,0}
};
struct book eDataStru[4]=
{
    {"3.1","shakespeare",200,0},
    {"3.2","The Amazing World",180,0},
    {"3.3","The Night of Horror!",89,0},
    {"3.4","I Found Peace",350,0}
};
struct book tCalculus[4]=
{
   {"4.1","shakespeare",200,0},
    {"4.2","The Amazing World",180,0},
    {"4.3","The Night of Horror!",89,0},
    {"4.4","I Found Peace",350,0}
};
struct book tPhysics[4]=
{
    {"5.1","shakespeare",200,0},
    {"5.2","The Amazing World",180,0},
    {"5.3","The Night of Horror!",89,0},
    {"5.4","I Found Peace",350,0}
};
struct book tDataStru[4]=
{
    {"6.1","shakespeare",200,0},
    {"6.2","The Amazing World",180,0},
    {"6.3","The Night of Horror!",89,0},
    {"6.4","I Found Peace",350,0}
};
struct book cart[10];
int cartItems=0;
int totalPrice=0;
void DisplayEClaculus();
void DisplayEPhysics();
void DisplayEDataStru();
void DisplayTClaculus();
void DisplayTPhysics();
void DisplayTDataStru();
void eCalculus1(char *str);
void ePhysics1(char *str);
void eDataStru1(char *str);
void tCalculus1(char *str);
void tPhysics1(char *str);
void tDataStru1(char *str);
int main()
{
    int option=0;
    printf("Welcome to Our E-Book App");
     do {printf(" Choose an option \n1-View products  \n 2-add to Cart \n 3- View My Cart \n 4- I finished Shopping\n");
     scanf("%d",&option);
     switch(option){
         int lang;
        case 1: printf("Chose a Language:\n 1- TURKISH \n 2-ENGLISH");
        scanf("%d",&lang);
          switch(lang){
            int cat;
           case 1: printf("Chose a Category:\n 1-Calculus \n 2-Physiscs \n 3-Data Structures");
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
            case 2:printf("Chose a Category:\n 1-Calculus \n 2-Physiscs \n 3-Data Structures");
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
     }
     }while(option!=4);
   

return 0;
}
void DisplayEClaculus(){
    for (int i=0;i<=3;i++){
        printf("%d- %s--%d \n",i+1,eCalculus[i].title,eCalculus[i].price);
    }
}
void DisplayEPhysics(){
    for (int i=0;i<=3;i++){
        printf("%d- %s--%d \n",i+1,ePhysics[i].title,ePhysics[i].price);
    }
}
void DisplayEDataStru(){
    for (int i=0;i<=3;i++){
        printf("%d- %s--%d \n",i+1,eDataStru[i].title,eDataStru[i].price);
    }
}
void DisplayTClaculus(){
    for (int i=0;i<=3;i++){
        printf("%d- %s--%d \n",i+1,tCalculus[i].title,tCalculus[i].price);
    }
}
void DisplayTPhysics(){
    for (int i=0;i<=3;i++){
        printf("%d- %s--%d \n",i+1,tPhysics[i].title,tPhysics[i].price);
    }
}
void DisplayTDataStru(){
    for (int i=0;i<=3;i++){
        printf("%d- %s--%d \n",i+1,tDataStru[i].title,tDataStru[i].price);
    }
}
void eCalculus1(char *str){
_Bool flag = 0; 
int j=0;
int i=0;
while( (j<=3)){
if ( strcmp(eCalculus[j].id,str)==0 ){
    printf("%s   %s",str,eCalculus[j].id);
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
        //printf("hey  %s ",cart[cartItems].id);
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
while( (j<=3)){
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
while( (j<=3)){
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
while( (j<=3)){
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
while( (j<=3)){
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
while( (j<=3)){
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
