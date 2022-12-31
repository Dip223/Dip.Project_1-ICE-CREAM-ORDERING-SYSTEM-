#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// define constants for menu options
#define SINGLE_SCOOP 1
#define DOUBLE_SCOOP 2
#define TRIPLE_SCOOP 3
#define SUNDAE 4
#define MILKSHAKE 5
#define SPLIT_CONE 6
#define QUIT 7
// define constants for ice cream flavors
#define CHOCOLATE 0
#define VANILLA 1
#define STRAWBERRY 2
#define MINT 3
#define COOKIES_N_CREAM 4
#define ROCKY_ROAD 5
#define RAINBOW_SHERBET 6
// define constants for sundae toppings
#define HOT_FUDGE 0
#define CARAMEL 1
#define STRAWBERRY_SAUCE 2
#define CHOCOLATE_SAUCE 3
#define WHIPPED_CREAM 4
#define SPRINKLES 5
#define CHERRIES 6
// define constants for milkshake flavors
#define CHOCOLATE_MILKSHAKE 0

#define VANILLA_MILKSHAKE 1
#define STRAWBERRY_MILKSHAKE 2
#define MINT_MILKSHAKE 3
#define COOKIES_N_CREAM_MILKSHAKE 4
#define ROCKY_ROAD_MILKSHAKE 5
#define RAINBOW_SHERBET_MILKSHAKE 6
// define constants for split cone toppings
#define HOT_FUDGE_SPLIT 0
#define CARAMEL_SPLIT 1
#define STRAWBERRY_SAUCE_SPLIT 2
#define CHOCOLATE_SAUCE_SPLIT 3
#define WHIPPED_CREAM_SPLIT 4
#define SPRINKLES_SPLIT 5
#define CHERRIES_SPLIT 6
// define global variables
char flavors[7][20] = {"Chocolate ", "Vanilla ", "Strawberry ", "Mint ",
"Cookies 'n' Cream", "Rocky Road ", "Rainbow Sherbet "};
int fprice[7]={35,40,40,30,40,35,45};
int Mfprice[7]={75,80,80,70,80,75,85};
int tprice[7]={20,25,30,15,20,20,30};
char sundaeToppings[7][20] = {"Hot Fudge ", "Caramel ", "Strawberry Sauce",
"Chocolate Sauce ", "Whipped Cream ", "Sprinkles ", "Cherries "};
char milkshakeFlavors[7][20] = {"Chocolate ", "Vanilla ", "Strawberry ", "Mint ",
"Cookies 'n' Cream", "Rocky Road ", "Rainbow Sherbet "};
char splitConeToppings[7][20] = {"Hot Fudge ", "Caramel ", "Strawberry Sauce",
"Chocolate Sauce ", "Whipped Cream ", "Sprinkles ", "Cherries "};
// function prototypes
void displayMenu();
int getMenuOption();
void handleSingleScoop();
void handleDoubleScoop();
void handleTripleScoop();
void handleSundae();
void handleMilkshake();
void handleSplitCone();
int main(){
int menuOption;
// display menu and get user input until user quits
do{
displayMenu();
menuOption =getMenuOption();
switch(menuOption)
{
case SINGLE_SCOOP:
handleSingleScoop();
break;
case DOUBLE_SCOOP:
handleDoubleScoop();
break;
case TRIPLE_SCOOP:
handleTripleScoop();
break;
case SUNDAE:
handleSundae();
break;
case MILKSHAKE:
handleMilkshake();
break;
case SPLIT_CONE:
handleSplitCone();
break;
case QUIT:
printf("Thank you for using the Ice Cream Ordering System!\n");
break;
default:
printf("Invalid option, please try again.\n");
}
} while(menuOption != QUIT);
return 0;
}
// display menu options to user
void displayMenu()
{
printf("Welcome to the Ice Cream Ordering System!\n");
printf("Please select an option:\n");
printf("1. Single Scoop\n");
printf("2. Double Scoop\n");
printf("3. Triple Scoop\n");
printf("4. Sundae\n");
printf("5. Milkshake\n");
printf("6. Split Cone\n");
printf("7. Quit\n");
}
// get user input for menu option
int getMenuOption()
{
int option;
printf("Enter option: ");
scanf("%d", &option);
return option;
}
// handle single scoop order
void handleSingleScoop()
{
int flavor,many;
printf("Select flavor for single scoop:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, flavors[i],fprice[i]);
}
printf("Enter flavor: ");
scanf("%d", &flavor);
if(flavor >= 0 && flavor < 7)
{
printf("How many you want to order?:");
scanf("%d",&many);
int total=fprice[flavor]*many;
printf("Single scoop ice cream added to order.\n");
printf("Your total bill is: %d tk\n",total);
}
else
{
printf("Invalid flavor, please try again.\n");
}
}
// handle double scoop order
void handleDoubleScoop()
{
int flavor1, flavor2,many;
printf("Select flavors for double scoop:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, flavors[i],fprice[i]);
}
printf("Enter first flavor: ");
scanf("%d", &flavor1);
printf("Enter second flavor: ");
scanf("%d", &flavor2);
if(flavor1 >= 0 && flavor1 < 7 && flavor2 >= 0 && flavor2 < 7)
{
printf("How many you want to order?:");
scanf("%d", &many);
int total=(fprice[flavor1]+fprice[flavor2])*many;
printf("%d Double scoop ice cream added to order.\n",many);
printf("Your total bill is: %d tk\n",total);
}
else
{
printf("Invalid flavor(s), please try again.\n");
}
}
// handle triple scoop order
void handleTripleScoop()
{
int flavor1, flavor2, flavor3,many;
printf("Select flavors for triple scoop:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, flavors[i],fprice[i]);
}
printf("Enter first flavor: ");
scanf("%d", &flavor1);
printf("Enter second flavor: ");
scanf("%d", &flavor2);
printf("Enter third flavor: ");
scanf("%d", &flavor3);
if(flavor1 >= 0 && flavor1 < 7 && flavor2 >= 0 && flavor2 < 7 &&
flavor3 >= 0 && flavor3 < 7)
{
printf("How many you want to order?:");
scanf("%d", &many);
int total=(fprice[flavor1]+fprice[flavor2]+fprice[flavor3])*many;
printf("Triple scoop ice cream added to order.\n");
printf("Your total bill is: %d tk\n",total);
}
else{
printf("Invalid flavor(s), please try again.\n");
}
}
// handle sundae order
void handleSundae()
{
int flavor, topping,many;
printf("Select flavor for sundae:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, flavors[i],fprice[i]);
}
printf("Enter flavor: ");
scanf("%d", &flavor);
if(flavor >= 0 && flavor < 7){
printf("Select topping for sundae:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, sundaeToppings[i],tprice[i]);
}
printf("Enter topping: ");
scanf("%d", &topping);
if(topping >= 0 && topping < 7)
{
printf("How many you want to order?:");
scanf("%d", &many);
int total=(fprice[flavor]+tprice[topping])*many;
printf("%d sundae added to order.\n",many);
printf("Your total bill is: %d tk\n",total);
}
else{
printf("Invalid topping, please try again.\n");
}
}
else{
printf("Invalid flavor, please try again.\n");
}
}
// handle milkshake order
void handleMilkshake()
{
int flavor,many;
printf("Select flavor for milkshake:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, milkshakeFlavors[i],Mfprice[i]);
}
printf("Enter flavor: ");
scanf("%d", &flavor);
if(flavor >= 0 && flavor < 7){
printf("How many you want to order?:");
scanf("%d", &many);
int total=Mfprice[flavor]*many;
printf("%d milkshake added to order.\n", many);
printf("Your total bill is: %d tk\n",total);
}
else{
printf("Invalid flavor, please try again.\n");
}
}
// handle split cone order
void handleSplitCone()
{
    int flavor1, flavor2, topping,many;
printf("Select flavors for split cone:\n");
for(int i = 0; i < 7; i++){
printf("%d. %s %d tk\n", i, flavors[i],fprice[i]);
}
printf("Enter first flavor: ");
scanf("%d", &flavor1);
printf("Enter second flavor: ");
scanf("%d", &flavor2);
if(flavor1 >= 0 && flavor1 < 7 && flavor2 >= 0 && flavor2 < 7)
{
printf("Select topping for split cone:\n");
for(int i = 0; i < 7; i++)
{
printf("%d. %s %d tk\n", i, splitConeToppings[i],tprice[i]);
}
printf("Enter topping: ");
scanf("%d", &topping);
if(topping >= 0 && topping < 7)
{
printf("How many you want to order?:");
scanf("%d", &many);
int total=(fprice[flavor1]+fprice[flavor2]+tprice[topping])*many;
printf("Split cone ice cream added to order.\n");
printf("Your total bill is: %d tk\n",total);
}
else
{
printf("Invalid topping, please try again.\n");
}
}
else{
printf("Invalid flavor(s), please try again.\n");
}
}
