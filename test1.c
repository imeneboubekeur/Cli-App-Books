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
void DisplayEClaculus();
void DisplayEPhysics();
void DisplayEDataStru();
void DisplayTClaculus();
void DisplayTPhysics();
void DisplayTDataStru();
int main()
{
    int option=0;
    printf("Welcome to Our E-Book App");
     do {printf(" Choose an option \n1-View products  \n 2-add to Cart \n 3- View My Cart \n 4- I finished Shopping\n");
     scanf("%d",&option);
     switch(option){
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
