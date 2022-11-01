#ifndef AUTOCROSS_H_INCLUDED
#define AUTOCROSS_H_INCLUDED

typedef struct
{
    char id[10];
    char pass[10];
}User;

typedef struct
{
    int id;
    char make[15];
}CarMake;

typedef struct
{
    int id;
    char model[30];
}CarModel;

typedef struct
{
    int day;
    int month;
    int year;
}Date;

typedef struct
{
	char id[6];
	int category;
	int type;
	char car[6];
	int cond;
	int manufacturer;
    Date dMan;
}Part;

 typedef struct
{
	char license[7];
	char id[6];
	int make;
	int model;
    char colour[20];
	int condition;
	//Part parts[20];

	Date mDate; //date of manufacture
}Car;

typedef struct
{
	int id;
	char name[30];
	char website[20];
	char telephone[20];
	int rankNum;
	int products[5];
	int pNum; //number of products
}Supplier;

typedef struct
{
    char name[30];
    float cost;
}Product;

//login modules
void menu();
int login();
void writeUser(User);
int signIn(User);
void signUp();
int checkLogin(int, int, User, User);

//Data Input Modules
Date readDate();
Part enterPart();
void enterParts();
Part enterCarParts();
Car enterCar();
void enterCars();
Product enterProducts();
Supplier blankSup();
void storeParts(char[][50][50], int[]);
void storePartsCost(float[][50], int[]);

//Data Output Modules
void printDate(Date);
void printPart(Part);
void printCar(Car);
void printCond(int);
void displaySup(int);
void printMake(CarMake);
void printModel(CarModel);
void displayModel(int , int);
void displayMake(int);
void displayProducts();
void printProduct(int);
void printProductList();
void displayPart(int, int);

//File Handling Modules
void readPart();
void writePart(Part);
void readCar();
void writeCar(Car);
int readCarArray(Car[]);
void writeCarArray(Car[], int);
void updateCar();
void updateCars();
void updatePart();
void readMake();
void readModel(int);

//Check/Validation Modules
int checkLicense(char[]);
int checkDate(Date);
int ptSizes(int);
void error();

//Match and Search Modules
void match();
void matchPart();
int criteria(Car, Part);
void matchCar();
Car findCar(char[]);
Supplier findSup(int);
Part findPart(char[]);
void searchPart();
void searchCar();

//Buy and Sell Modules
void buyPart();
void matchSup(int);
int prodSizes(int);
void storePartsCost(float [5][50], int []);
void sellPart(char[]);

//user interface modules
void displayWelcome();
void displayExit();

//miscellaneous
void readSupplier();
void printSupplier(Supplier);
void writeSup(Supplier);
Supplier formatSupplier();
void writeMake(CarMake);
void formatMake();
void formatModel();
void writeModel(CarModel);
void readAll();
void readRanFile(char[],char[]);

#endif // AUTOCROSS_H_INCLUDED
