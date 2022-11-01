#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "AUTOCROSS.H"

void menu()
{
    int choice, task;

    do
    {
        printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
        printf("\n\t\t\t\t\t\t\t\t\t\t\tMENU");
        printf("\n\t\t\t\t\t\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t1:\tENTER PARTS/CARS\n");
        printf("\t\t\t\t\t\t\t\t\t2:\tMATCH PARTS/CARS\n");
        printf("\t\t\t\t\t\t\t\t\t3:\tBUY/SELL PARTS\n");
        printf("\t\t\t\t\t\t\t\t\t4:\tSEARCH INVENTORY\n");
        printf("\t\t\t\t\t\t\t\t\t5:\tUPDATE INVENTORY\n");
        printf("\t\t\t\t\t\t\t\t\t6:\tVIEW INVENTORY\n");
        printf("\t\t\t\t\t\t\t\t\t7:\tEXIT PROGRAM\n");
        printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
        do
        {
            printf("\nEnter Choice:\n");
            scanf("%i", &choice);
            if(choice>6 || choice<1)
            {
                error();
            }
        }while(choice>6 || choice<1);
        switch(choice)
        {
            case 1:
                printf("\n\t\t\t\t\t\t\t-------------------------------------");
                printf("\n\t\t\t\t\t\t\t\t   Data Entry Menu");
                printf("\n\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++");
                printf("\n\t\t\t\t\t\t\t\t    1    ENTER PARTS");
                printf("\n\t\t\t\t\t\t\t\t    2    ENTER CARS");
                printf("\n\t\t\t\t\t\t\t-------------------------------------");
                do
                {
                    printf("\n\n\t\t\t\t\t\t\tEnter task you would like to perform:\n\t\t\t\t\t\t\t");
                    scanf("%i", &task);
                    if(task<1 || task>2)
                    {
                        error();
                    }
                }while(task<1 || task>2);
                system("cls");
                system("pause");
                switch(task)
                {
                    case 1:
                        enterParts();
                        break;
                    case 2:
                        enterCars();
                        break;
                }
                break;
            case 2:
                printf("\n\t\t\t\t\t\t--------------------------------------------------------------------");
                printf("\n\t\t\t\t\t\t\t\t\t    Match Menu");
                printf("\n\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
                printf("\n\t\t\t\t\t\t\t\t1:\tFind Compatible Cars for a Part");
                printf("\n\t\t\t\t\t\t\t\t2:\tFind Compatible Parts for a Car");
                printf("\n\t\t\t\t\t\t-------------------------------------------------------------------");
                do
                {
                    printf("\n\n\t\t\t\t\t\tEnter task you would like to perform:\t\t\t\t\t\t\n");
                    scanf("%i", &task);
                    if(task<1 || task>2)
                    {
                        error();
                    }
                }while(task<1 || task>2);
                system("cls");
                system("pause");
                switch(task)
                {
                    case 1:
                        matchCar();
                        break;
                    case 2:
                        matchPart();
                        break;
                }
                break;
                system("cls");
                system("pause");
            case 3:
                printf("\n\t\t\t\t\t\t\t\t\t-------------------------------------");
                printf("\n\t\t\t\t\t\t\tSell/Buy Menu");
                printf("\n\t\t\t\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++");
                printf("\n\t\t\t\t\t\t1-\tBUY PARTS");
                printf("\n\t\t\t\t\t\t2-\tSELL PARTS");
                printf("\n\t\t\t\t\t\t\t\t\t-------------------------------------");
                do
                {
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter task you would like to perform\n");
                    scanf("%i", &task);
                    if(task<1 || task>2)
                    {
                        error();
                    }
                }while(task<1 || task>2);
                system("cls");
                system("pause");
                switch(task)
                {
                    case 1:
                        buyPart();
                        break;
                    case 2:
                        sellPart("0");
                        break;
                }
                break;
                system("cls");
                system("pause");


            case 4:
                printf("\n\t\t\t\t\t\t\t\t\t-------------------------------------");
                printf("\n\t\t\t\t\t\t\t\t\t\tSearch Menu");
                printf("\n\t\t\t\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++");
                printf("\n\t\t\t\t\t\t\t\t\t1-\tSEARCH PARTS");
                printf("\n\t\t\t\t\t\t\t\t\t2-\tSEARCH CARS");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t-------------------------------------");
                do
                {
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter task you would like to perform\n");
                    scanf("%i", &task);
                    if(task<1 || task>2)
                    {
                        error();
                    }
                }while(task<1 || task>2);
                system("cls");
                system("pause");
                switch(task)
                {
                    case 1:
                        searchPart();
                        break;
                    case 2:
                        searchCar();
                        break;
                }
                break;
                system("cls");
                system("pause");
            case 5:

                printf("1-Update Part");
                printf("2-Update Car");
                do
                {
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter task you would like to perform\n");
                    scanf("%i", &task);
                    if(task<1 || task>2)
                    {
                        error();
                    }
                }while(task<1 || task>2);
                system("cls");
                system("pause");
                switch(task)
                {
                    case 1:
                        updatePart();
                        break;
                    case 2:
                        updateCars();
                        break;
                }
                break;
                system("cls");
                system("pause");
            case 6:
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t-------------------------------------");
                printf("\n\t\t\t\t\t\t\t\t\t\tInventory Menu");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++");
                printf("\n\t\t\t\t\t\t\t\t\t1-\t1:\tVIEW PARTS");
                printf("\n\t\t\t\t\t\t\t\t\t2-\t2:\tVIEW CARS");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t-------------------------------------");
                do
                {
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter task you would like to perform\n");
                    scanf("%i", &task);
                    if(task<1 || task>2)
                    {
                        error();
                    }
                }while(task<1 || task>2);
                system("cls");
                system("pause");
                switch(task)
                {
                    case 1:
                        readPart();
                        break;
                    case 2:
                        readCar();
                        break;
                }
                break;
                system("cls");
                system("pause");
            case 7:
                system("cls");
                system("pause");
                displayExit();
                break;
        }
    }while(choice!=6);
}

Date readDate() //reads input for a date
{
    Date dt;
    int check;

    do
    {
        printf("\nEnter day:");
        scanf("%i", &dt.day);
        printf("Enter integer month:");
        scanf("%i", &dt.month);
        printf("Enter year:");
        scanf("%i", &dt.year);
        check=checkDate(dt);
        if(check!=0)
        {
            error();
        }
    }while(check!=0);

    return dt;
}

int ptSizes(int key) //returns the number of parts in any part category
{
    int size;

    switch(key)
    {
        case 1:
            size=31;
            break;
        case 2:
            size=51;
            break;
        case 3:
            size=31;
            break;
        case 4:
            size=16;
            break;
        case 5:
            size=16;
            break;
    }

    return size;
}

Part enterPart()
{
    Part pt;
    int cont;

    do
    {
        printf("\nEnter Unique Part ID:");
        scanf("%s", pt.id);
        fflush(stdin);

        displayProducts();
        do
        {
            printf("\nEnter Number Corresponding to Part Category:");
            scanf("%i", &pt.category);
            fflush(stdin);
            if(pt.category>5 || pt.category<0)
            {
                error();
            }
        }while(pt.category>5 || pt.category<0); //validation check to ensure the number entered is an option

        do
        {
            printf("\nEnter Number Corresponding to Part Type:");
            scanf("%i", &pt.type);
            fflush(stdin);
            if(pt.type>ptSizes(pt.category) || pt.type<0)
            {
                error();
            }
        }while(pt.type>ptSizes(pt.category) || pt.type<0); //validation check to ensure the number entered is an option

        readCar();
        printf("\nEnter license plate of the Car Part Belongs to. (EXAMPLE- 2851BQ) If part does not belong to car, enter 0000:");
        scanf("%s", pt.car);
        fflush(stdin);

        do
        {
            printf("\nEnter Number Corresponding to Current Part Condition:");
            printf("\n1-POOR: Very Damaged/Worn; does not function properly");
            printf("\n2-FAIR: Damaged/Worn; malfunctions sometimes");
            printf("\n3-GOOD: Functions correctly; rarely malfunctions");
            printf("\n4-EXCELLENT: Peak Condition; has rarely been used and functions smoothly all the time\n");
            scanf("%i", &pt.cond);
            fflush(stdin);
        }while(pt.cond<1 || pt.cond>4);

        readSupplier();
        do
        {
            printf("Enter Corresponding ID of Part Manufacturer:");
            scanf("%i", &pt.manufacturer);
            fflush(stdin);
        }while(pt.manufacturer>5 || pt.manufacturer<0);

        do
        {
            printf("Enter Date Manufactured:");
            pt.dMan= readDate();
        }while(checkDate(pt.dMan)==1);

        do
        {
            printf("\n\nIf information entered is incorrect, enter 1 to re-enter data. Otherwise, enter 2 to continue.\n");
            scanf("%i", &cont);
            fflush(stdin);
            if(cont>2 || cont<1)
            {
                error();
            }
        }while(cont>2 || cont<1); //validation check to ensure the number entered is an option
    }while(cont==1);//allows user to re-enter data if

    return pt;
}

int checkLicense(char lic[]) //ensures the license plat entered is the standard six digits long.
{
    int check=0;

    if(strlen(lic)!=6)
    {
        check=1;
    }

    return check;
}

void enterParts()
{
    int cont;
    Part pt;

    do
    {
        pt=enterPart();
        writePart(pt);

        do
        {
            printf("To continue entering Parts, press 1. Otherwise, to return to menu, enter 2.");
            scanf("%i", &cont);
        }while(cont<1 || cont>2);
    }while(cont!=2);
}

Car enterCar()
{
    Car car;
    int check, cont;

    do
    {
        fflush(stdin);
        printf("\nEnter Unique Car ID:");
        scanf("%s", car.id);
        fflush(stdin);

        do
        {
            printf("\nEnter Car License (EXAMPLE- 2851BQ):\n");
            scanf("%s", car.license);
            fflush(stdin);
            check=checkLicense(car.license);
        }while(check!=0);

        readMake();
        do
        {
            printf("Enter Corresponding Number to Car Make:\n");
            scanf("%i", &car.make);
            fflush(stdin);
        }while(car.make>10 || car.make<1);

        readModel(car.make);
        do
        {
            printf("Enter Corresponding Number to Car Brand/Model:\n");
            scanf("%i", &car.model);
            fflush(stdin);
        }while(car.model>4 || car.model<0);

        printf("Enter Car Colour:\n");
        scanf("%s", car.colour);
        fflush(stdin);
        do
        {
            printf("\nEnter Number Corresponding to Current Car Condition:");
            printf("\n1-POOR: vehicle has severe mechanical and/or cosmetic defects; in poor running condition");
            printf("\n2-FAIR: vehicle has some mechanical and/or cosmetic defects; in reasonable running condition but needs servicing");
            printf("\n3-GOOD: vehicle is free of any major mechanical and/or cosmetic defects; in good running condition");
            printf("\n4-EXCELLENT: vehicle looks new, is in excellent mechanical condition, needs no reconditioning\n");
            scanf("%i", &car.condition);
            fflush(stdin);
        }while(car.condition<0 || car.condition>4);
        printf("Enter Date of Manufacture of Car:");
        car.mDate= readDate();
        fflush(stdin);

        do
        {
            printf("\n\nIf information entered is incorrect, enter 1 to re-enter data. Otherwise, enter 2 to continue.\n");
            scanf("%i", &cont);
            fflush(stdin);
            if(cont>2 || cont<1)
            {
                error();
            }
        }while(cont>2 || cont<1); //validation check to ensure the number entered is an option
    }while(cont==1);

    return car;
}

void readMake() //reads pre-written Car Make information from random access file
{
    FILE *fp;
    CarMake temp;

    if((fp=fopen("Make.txt", "rb"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\n---------------FROM FILE-----------------------\n");
        while(!feof(fp))
        {
            fread(&temp, sizeof(CarMake), 1, fp);
            if(!feof(fp))
            {
                printMake(temp);
                printf("\n--------------------------------------------------\n\n");
            }
        }
        fclose(fp);
    }

}

void readModel(int make) //reads pre-written Car Model information from random access file
{
    FILE *fp;
    CarModel temp;
    char filename[18];

    switch(make)
    {
        case 1:
            strcpy(filename, "VOLKSWAGEN.txt");
            break;
        case 2:
            strcpy(filename, "BMW.txt");
            break;
        case 3:
            strcpy(filename, "CHEVROLET.txt");
            break;
        case 4:
            strcpy(filename, "SUBARU.txt");
            break;
        case 5:
            strcpy(filename, "FORD.txt");
            break;
        case 6:
            strcpy(filename, "HONDA.txt");
            break;
        case 7:
            strcpy(filename, "TOYOTA.txt");
            break;
        case 8:
            strcpy(filename, "LOTUS.txt");
            break;
        case 9:
            strcpy(filename, "MAZDA.txt");
            break;
        case 10:
            strcpy(filename, "PORSCHE.txt");
            break;
    }

    if((fp=fopen(filename, "rb"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\n---------------FROM FILE-----------------------\n");
        while(!feof(fp))
        {
            fread(&temp, sizeof(CarModel), 1, fp);
            if(!feof(fp))
            {
                printModel(temp);
                printf("\n--------------------------------------------------\n\n");
            }
        }
        fclose(fp);
    }
}

void printModel(CarModel m)
{
    printf("\nID: %i", m.id);
    printf("\nModel: %s", m.model);
}

void displayMake(int key)
{
    switch(key)
    {
        case 1:
            printf("VOLKSWAGEN");
            break;
        case 2:
            printf("BMW");
            break;
        case 3:
            printf("CHEVROLET");
            break;
        case 4:
            printf("SUBARU");
            break;
        case 5:
            printf("FORD");
            break;
        case 6:
            printf("HONDA");
            break;
        case 7:
            printf("TOYOTA");
            break;
        case 8:
            printf("LOTUS");
            break;
        case 9:
            printf("MAZDA");
            break;
        case 10:
            printf("PORSCHE");
            break;
    }
}

void printMake(CarMake mk)
{
    printf("\nID: %i", mk.id);
    printf("\nMake: %s", mk.make);
}

void displayModel(int mk , int md) //accepts the numeric storage representation of car make and model to print the string equivalent of the car model
{
    switch(mk)
    {
        case 1:
            switch(md)
            {
                case 1:
                    printf("GOLF GTI");
                    break;
                case 2:
                    printf("SCIROCCO");
                    break;
                case 3:
                    printf("PASSAT");
                    break;
                case 4:
                    printf("POLO");
                    break;
            }
            break;
        case 2:
            switch(md)
            {
                case 1:
                    printf("M3");
                    break;
                case 2:
                    printf("M5");
                    break;
                case 3:
                    printf("Z4");
                    break;
                case 4:
                    printf("3.0 CSL");
                    break;
            }
            break;
        case 3:
            switch(md)
            {
                case 1:
                    printf("CAMARO 1LE");
                    break;
                case 2:
                    printf("C5 CORVETTE");
                    break;
                case 3:
                    printf("COPO CAMARO");
                    break;
                case 4:
                    printf("CORVETTE GRAND SPORT");
                    break;
            }
            break;
        case 4:
            switch(md)
            {
                case 1:
                    printf("BRZ");
                    break;
                case 2:
                    printf("WRX");
                    break;
                case 3:
                    printf("LEGACY 2.5");
                    break;
                case 4:
                    printf("FORESTER 2.5");
                    break;
            }
            break;
        case 5:
            switch(md)
            {
                case 1:
                    printf("FIESTA ST");
                    break;
                case 2:
                    printf("THUNDERBIRD");
                    break;
                case 3:
                    printf("MUSTANG IR");
                    break;
                case 4:
                    printf("FAIRLANE 500");
                    break;
            }
            break;
        case 6:
            switch(md)
            {
                case 1:
                    printf("CIVIC SI");
                    break;
                case 2:
                    printf("S200 SI");
                    break;
                case 3:
                    printf("FIT SI");
                    break;
                case 4:
                    printf("NSX JGTC");
                    break;
            }
            break;
        case 7:
            switch(md)
            {
                case 1:
                    printf("MR2");
                    break;
                case 2:
                    printf("86");
                    break;
                case 3:
                    printf("ALTEZZA");
                    break;
                case 4:
                    printf("CAMRY");
                    break;
            }
            break;
        case 8:
            switch(md)
            {
                case 1:
                    printf("ELISE");
                    break;
                case 2:
                    printf("EUROPA");
                    break;
                case 3:
                    printf("ESPIRIT");
                    break;
                case 4:
                    printf("ELAN");
                    break;
            }
            break;
        case 9:
            switch(md)
            {
                case 1:
                    printf("MX-5 MIATA");
                    break;
                case 2:
                    printf("RX-7 MIATA");
                    break;
                case 3:
                    printf("RT24-P");
                    break;
                case 4:
                    printf("787B-P");
                    break;
            }
            break;
        case 10:
            switch(md)
            {
                case 1:
                    printf("914");
                    break;
                case 2:
                    printf("718 CAYMAN");
                    break;
                case 3:
                    printf("911 GT3");
                    break;
                case 4:
                    printf("CAYENNE");
                    break;
            }
            break;
    }
}

void displaySup(int s) //accepts the numeric representation of the supplier to output the string/text equivalent
{
    switch(s)
    {
        case 1:
            printf("Robert Bosch GmbH");
            break;
        case 2:
            printf("Desno Corp.");
            break;
        case 3:
            printf("Lear Corp.");
            break;
        case 4:
            printf("Continental AG");
            break;
        case 5:
            printf("Aisin Seiki Co.");
            break;
        default:
            printf("Other");
            break;
    }
}

void printCond(int c) //accepts the numeric representation of the car/part condition to output the string/text equivalent
{
    switch(c)
    {
        case 1:
            printf("POOR");
            break;
        case 2:
            printf("FAIR");
            break;
        case 3:
            printf("GOOD");
            break;
        case 4:
            printf("EXCELLENT");
            break;
    }
}
void enterCars()
{
    int cont=0;
    Car car;

    printf("Enter Car X");
    do
    {
        car=enterCar();
        writeCar(car);
        do
        {
            printf("To continue entering Cars, press 1. Otherwise, to return to menu, enter 2.");
            scanf("%i",&cont);
        }while(cont!=1 && cont!=2);

    }while( cont!=2);
}

Supplier blankSup() //creates a blank supplier record
{
    Supplier sup;

    Supplier blankSup;
    sup.id=0000;
    strcpy(sup.name, "----");
    strcpy(sup.website, "----");
    sup.rankNum=0000;
    sup.products[0]=0000;
    return blankSup;
}

Supplier findSup(int key) //searches through the file storing all suppliers to find and return an indicated supplier
{
    FILE *fp;
    Supplier temp, found;

    if((fp=fopen("Suppliers.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        while(!feof(fp))
        {
            fread(&temp, sizeof(Supplier), 1, fp);
            if(temp.id==key)
            {
                found=temp;
            }
            else
            {
                found=blankSup();
            }

        }
        fclose(fp);
    }
    return found;
}

void printSupplier(Supplier sup)
{
	int i;
	printf("\nSupplier ID: %i", sup.id);
	printf("\nSupplier Name:");
	puts(sup.name);
	printf("Supplier Website: %s", sup.website);
	printf("\nSupplier Telephone: %s", sup.telephone);
	printf("\nSupplier Rank: %i", sup.rankNum);
	printf("\nSupplier Product Types:");
	for(i=0;i<sup.pNum;i++)
    {
        printProduct(sup.products[i]);
    }
}

void readSupplier() //prints all suppliers stored in file
{
    FILE *fp;
    Supplier temp;

    if((fp=fopen("Sup.txt", "rb"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\n---------------SUPPLIERS-----------------------\n");
        while(!feof(fp))
        {
            fread(&temp, sizeof(Supplier), 1, fp);
            if(!feof(fp))
            {
                printSupplier(temp);
                printf("\n--------------------------------------------------\n\n");
            }
        }
        fclose(fp);
    }
}

void readPart() //prints all parts user entered that are stored in file
{
    FILE *fp;
    Part temp;

    if((fp=fopen("Parts.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\n---------------PARTS-----------------------\n");
        while(!feof(fp))
        {
            fscanf(fp, "%s %i %i %s %i %i %i %i %i", temp.id, &temp.category ,&temp.type, temp.car, &temp.cond, &temp.manufacturer, &temp.dMan.day, &temp.dMan.month, &temp.dMan.year);
            if(!feof(fp))
            {
                printPart(temp);
                printf("\n--------------------------------------------------\n\n");
            }
        }
        fclose(fp);
    }
}

void writePart(Part pt) //writes/stores a part entered by user to file
{
    FILE *fp;
    if((fp=fopen("Parts.txt", "a"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        fprintf(fp, "%s %i %i %s %i %i %i %i %i", pt.id, pt.category, pt.type, pt.car, pt.cond, pt.manufacturer, pt.dMan.day, pt.dMan.month, pt.dMan.year);
        //fputs(VAR, fp);
        fprintf(fp, "\n");
        fclose(fp);
    }
}

void readCar() //prints all cars user entered that are stored in file
{
    FILE *fp;
    Car temp;

    if((fp=fopen("Cars.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\n---------------CARS-----------------------\n");
        while(!feof(fp))
        {
            fscanf(fp, "%s %s %i %i %s %i %i %i %i", temp.license, temp.id, &temp.make, &temp.model, temp.colour, &temp.condition, &temp.mDate.day, &temp.mDate.month, &temp.mDate.year);
            //fgets(var, VARSIZE, fp);

            if(!feof(fp))
            {
                printCar(temp);
                printf("\n--------------------------------------------------\n\n");
            }
        }
        fclose(fp);
    }
}

void writeCar(Car car) //writes/stores a car entered by user to file
{
    FILE *fp;
    if((fp=fopen("Cars.txt", "a"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        fprintf(fp, "%s %s %i %i %s %i %i %i %i", car.license, car.id, car.make, car.model, car.colour, car.condition, car.mDate.day, car.mDate.month, car.mDate.year);
        fprintf(fp, "\n");
        fclose(fp);
    }
}

void printDate(Date dt)
{
    printf("%i/%i/%i", dt.day, dt.month, dt.year);
}

void printPart(Part pt)
{
    printf("\nPart ID: %s", pt.id);
    printf("\nPart Category:");
    printProduct(pt.category);
    printf("Part Type:");
    displayPart(pt.category, pt.type);
    if(strcmp(pt.car,"0000")==0)
    {
         printf("\nLicense plate of Car Part Belongs to: PART DOES NOT BELONG TO CAR");
    }
    else
    {
        printf("\nLicense plate of Car Part Belongs to: %s", pt.car);
    }
    printf("\nPart Condition:");
    printCond(pt.cond);
    printf("\nPart Manufacturer:");
    displaySup(pt.manufacturer);
    printf("\nDate Manufactured:");
    printDate(pt.dMan);
}

void printCar(Car car)
{
    printf("\nCar ID: %s", car.id);
    printf("\nCar License: %s", car.license);
    printf("\nCar Make:");
    displayMake(car.make);
    printf("\nCar Model:");
    displayModel(car.make, car.model);
    printf("\nCar Colour: %s", car.colour);
    printf("\nCar Condition:");
    printCond(car.condition);
    printf("\nDate of Purchase of Car:");
    printDate(car.mDate);
}

int readCarArray(Car temp[]) //reads all cars stored in file into an array
{
    FILE *fp;
    int i=0, total;

    if((fp=fopen("Cars.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        while(!feof(fp))
        {
            if(!feof(fp))
            {
                fscanf(fp, "%s %s %i %i %s %i %i %i %i", temp[i].license, temp[i].id, &temp[i].make, &temp[i].model, temp[i].colour, &temp[i].condition, &temp[i].mDate.day, &temp[i].mDate.month, &temp[i].mDate.year);
                i++;
            }
            //fgets(var, VARSIZE, fp);
        }
        total=i-1;
        fclose(fp);
    }
    return total;
}

void writeCarArray(Car array[], int total) //writes array of cars into file
{
    FILE *fp;
    int i;

    if((fp=fopen("Cars.txt", "w"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        for(i=0;i<total;i++)
        {
            fprintf(fp, "%s %s %i %i %s %i %i %i %i", array[i].license, array[i].id, array[i].make, array[i].model, array[i].colour, array[i].condition, array[i].mDate.day, array[i].mDate.month, array[i].mDate.year);

            //fputs(VAR, fp);
        }
        fclose(fp);
    }
}

void updateCar()
{
    char key[6];
    int choice, total, i, index;
    Car temp[30];

    readCar();
    printf("Enter the corresponding ID of the Car you would like to change:");
    scanf("%s", key);
    system("cls");
    system("pause");
    total=readCarArray(temp);
    printf("enter the corresponding number of the attribute you would like to update:");
    printf("\n1-Car License");
    printf("\n2-Car Make");
    printf("\n3-Car Model");
    printf("\n4-Car Colour");
    printf("\n5-Car Condition");
    printf("\n6-Date of Purchase");
    scanf("%i", &choice);
    system("cls");
    system("pause");
    for(i=0;i<total;i++)
    {
        printCar(temp[i]);
    }

    for(i=0;i<total;i++)
    {
        if(strcmp(temp[i].id,key)==0)
        {
            index=i;
        }
    }

    switch(choice)
    {
        case 1:
            printf("\nEnter the New License:");
            scanf("%s", temp[index].license);
            break;
        case 2:
            printf("\nEnter the New Make:");
            scanf("%i", &temp[index].make);
            break;
        case 3:
            printf("\nEnter the New Model:");
            scanf("%i", &temp[index].model);
            break;
        case 4:
            printf("\nEnter the New Colour:");
            scanf("%s", temp[index].colour);
            break;
        case 5:
            printf("\nEnter the New Condition:");
            scanf("%i", &temp[index].condition);
            break;
        case 6:
            printf("\nEnter the New Date of Purchase:");
            temp[index].mDate=readDate();
            break;
    }
    writeCarArray(temp, total);
    readCar();
}

void updateCars()
{
    int exit;
    do
    {
        updateCar();
        printf("To make another update enter 1. Otherwise to return to menu enter 2.");
        scanf("%i", &exit);
    }while(exit!=2);
}

void updatePart()
{
    printf("update part");
}


void searchPart() //searches for a part the user has entered previously
{
    char key[20];
    Part found;

    printf("Enter the id of the part you would like to search for:");
    scanf("%s", key);
    found=findPart(key);
    printPart(found);
}

Part findPart(char key[])
{
    FILE *fp;
    Part pt, found;

    if((fp=fopen("Parts.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s %i %i %s %i %i %i %i %i", pt.id, &pt.category ,&pt.type, pt.car, &pt.cond, &pt.manufacturer, &pt.dMan.day, &pt.dMan.month, &pt.dMan.year);
            if(strcmp(pt.id, key)==0)
            {
                found=pt;
            }
        }
        fclose(fp);
    }
    return found;
}

void searchCar() //searches for a part the user has entered previously
{
    char key[20];
    Car found;

    printf("Enter the id of the part you would like to search for:");
    scanf("%s", key);
    found=findCar(key);
    printCar(found);
}

Car findCar(char key[]) //searches car file for specified car
{
    FILE *fp;
    Car temp, found;

    if((fp=fopen("Cars.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s %s %i %i %s %i %i %i %i", temp.license, temp.id, &temp.make, &temp.model, temp.colour, &temp.condition, &temp.mDate.day, &temp.mDate.month, &temp.mDate.year);
            if(strcmp(key, temp.id)==0)
            {
                found=temp;
            }
        }
        fclose(fp);
    }
    return found;
}

void printProductList()
{
    printf("\n1-Car body and main parts");
    printf("\n2-Electrical and electronics");
    printf("\n3-Power-train and chassis");
    printf("\n4-Interior Parts");
    printf("\n5-Miscellaneous auto parts");
}

void printProduct(int key) //accepts numeric value representing the part category to print the text/string representation
{
    switch(key)
    {
        case 1:
            printf("Car Body and Main Parts\n");
            break;
        case 2:
            printf("Electrical and electronics\n");
            break;
        case 3:
            printf("Power-train and chassis\n");
            break;
        case 4:
            printf("Interior Parts\n");
            break;
        case 5:
            printf("Miscellaneous auto parts\n");
            break;
    }
}

void displayPart(int ctg, int type) //accepts numeric values for part category and type to print the text representation for the part
{
    int length[5];
    char parts[5][50][50];

    storeParts(parts,length); //passes an array containing all the possible parts
    printf("%s", parts[ctg-1][type-1]); //since the variables pass indicate one more than the address in the array, they are used as the index to find the part string
}

void displayProducts() //prints all the possible car parts sorted by category
{
    int i, j, length[5];
    char parts[5][50][50];

    storeParts(parts,length);
    for(i=0;i<5;i++)
    {
        printf("%i. ", i+1);
        printProduct(i+1);
        printf("\n");
        for(j=0;j<length[i];j++)
        {
            printf("%i %s", j+1, parts[i][j]);
            printf("\n");
        }
        printf("\n\n\n");
    }
}

void storeParts(char parts[][50][50], int length[]) //loads the string values for all possible parts into a 3D array
{
    //stores the amount of parts in each category in an array
    length[0]=31;
    length[1]=51;
    length[2]=31;
    length[3]=16;
    length[4]=16;

    strcpy(parts[0][0], "Bonnet/hood" );
    strcpy(parts[0][1], "Unexposed bumper" );
    strcpy(parts[0][2], "Exposed Bumper" );
    strcpy(parts[0][3], "Cowl screen" );
    strcpy(parts[0][4], "Decklid" );
    strcpy(parts[0][5], "Fascia rear and support" );
    strcpy(parts[0][6], "Fender (wing or mudguard)" );
    strcpy(parts[0][7], "Front clip" );
    strcpy(parts[0][8], "Front fascia and header panel" );
    strcpy(parts[0][9], "Grille" );
    strcpy(parts[0][10], "Pillar and hard trim" );
    strcpy(parts[0][11], "Quarter panel" );
    strcpy(parts[0][12], "Radiator core support" );
    strcpy(parts[0][13], "Rocker" );
    strcpy(parts[0][14], "Roof rack" );
    strcpy(parts[0][15], "Spoiler" );
    strcpy(parts[0][16], "Front spoiler (air dam)" );
    strcpy(parts[0][17], "Rear spoiler (wing)" );
    strcpy(parts[0][18], "Hubcap" );
    strcpy(parts[0][19], "Tire/Tyre" );
    strcpy(parts[0][20], "Trim package" );
    strcpy(parts[0][21], "Trunk/boot/hatch" );
    strcpy(parts[0][22], "Outer Door Handle" );
    strcpy(parts[0][23], "Inner door handle" );
    strcpy(parts[0][24], "Anti-intrusion bar" );
    strcpy(parts[0][25], "Fuel tank (or fuel filler) door" );
    strcpy(parts[0][26], "Window motor" );
    strcpy(parts[0][27], "Window regulator" );
    strcpy(parts[0][28], "Windshield washer motor" );
    strcpy(parts[0][29], "Door latch" );
    strcpy(parts[0][30], "Door control module" );

    strcpy(parts[1][0], "Alternator" );
    strcpy(parts[1][1], "Battery" );
    strcpy(parts[1][2], "Performance Battery" );
    strcpy(parts[1][3], "Voltage regulator" );
    strcpy(parts[1][4], "Ammeter" );
    strcpy(parts[1][5], "Clinometer" );
    strcpy(parts[1][6], "Dynamometer" );
    strcpy(parts[1][7], "Fuel gauge" );
    strcpy(parts[1][8], "Manometer" );
    strcpy(parts[1][9], "Hydrometer" );
    strcpy(parts[1][10], "Odometer" );
    strcpy(parts[1][11], "Speedometer" );
    strcpy(parts[1][12], "Tire pressure gauge" );
    strcpy(parts[1][13], "Oil pressure gauge" );
    strcpy(parts[1][14], "Sparking cable" );
    strcpy(parts[1][15], "Distributor" );
    strcpy(parts[1][16], "Electronic timing controller" );
    strcpy(parts[1][17], "Ignition coil" );
    strcpy(parts[1][18], "Ignition box" );
    strcpy(parts[1][19], "Spotlight" );
    strcpy(parts[1][20], "Headlight " );
    strcpy(parts[1][21], "Spark plug" );
    strcpy(parts[1][22], "Fuel level sensor" );
    strcpy(parts[1][23], "Fuel pressure sensor" );
    strcpy(parts[1][24], "Throttle position sensor" );
    strcpy(parts[1][25], "Knock sensor" );
    strcpy(parts[1][26], "Grab Handle" );
    strcpy(parts[1][27], "Performance chip" );
    strcpy(parts[1][28], "Performance monitor" );
    strcpy(parts[1][29], "Speedometer calibrator" );
    strcpy(parts[1][30], "Wiring connector" );
    strcpy(parts[1][31], "Transmission computer" );
    strcpy(parts[1][32], "Relay connector" );
    strcpy(parts[1][33], "Shift improver" );
    strcpy(parts[1][34], "Starter" );
    strcpy(parts[1][35], "starter pinion gear" );
    strcpy(parts[1][36], "Glowplug" );
    strcpy(parts[1][37], "Starter solenoid" );
    strcpy(parts[1][38], "Starter solenoid" );
    strcpy(parts[1][39], "Power window switch" );
    strcpy(parts[1][40], "Steering column switch" );
    strcpy(parts[1][41], "Ignition switch" );
    strcpy(parts[1][42], "Switch cover" );
    strcpy(parts[1][43], "Thermostat" );
    strcpy(parts[1][44], "Frame switch" );
    strcpy(parts[1][45], "Engine compartment harness" );
    strcpy(parts[1][46], "Interior harness" );
    strcpy(parts[1][47], "Floor harness" );
    strcpy(parts[1][48], "floor harness" );
    strcpy(parts[1][49], "Door contact" );
    strcpy(parts[1][50], "Fuse" );

    strcpy(parts[2][0], "Transmission" );
    strcpy(parts[2][1], "Trans-axle housing" );
    strcpy(parts[2][2], "Prop shaft" );
    strcpy(parts[2][3], "Master cylinderr" );
    strcpy(parts[2][4], "Gearbox" );
    strcpy(parts[2][5], "Gear stick" );
    strcpy(parts[2][6], "Gear pump" );
    strcpy(parts[2][7], "Gear ring" );
    strcpy(parts[2][8], "Flywheel" );
    strcpy(parts[2][9], "Clutch " );
    strcpy(parts[2][10], "Carrier assembly" );
    strcpy(parts[2][11], "Speedometer" );
    strcpy(parts[2][12], "Chain wheel and sprocket" );
    strcpy(parts[2][13], "Steering Wheel" );
    strcpy(parts[2][14], "Steering arm" );
    strcpy(parts[2][15], "Steering column assembly" );
    strcpy(parts[2][16], "Spiral spring" );
    strcpy(parts[2][17], "Parabolic Spring" );
    strcpy(parts[2][18], "Ignition box" );
    strcpy(parts[2][19], "Spindle" );
    strcpy(parts[2][20], "Shock absorber " );
    strcpy(parts[2][21], "Kingpin" );
    strcpy(parts[2][22], "Axle" );
    strcpy(parts[2][23], "Fuel tank" );
    strcpy(parts[2][24], "Fuel rail" );
    strcpy(parts[2][25], "Fuel filter" );
    strcpy(parts[2][26], "Fuel distributor" );
    strcpy(parts[2][27], "Exhaust pipe" );
    strcpy(parts[2][28], "Exhaust gasket" );
    strcpy(parts[2][29], "Brake system" );
    strcpy(parts[2][30], "Anti-lock Braking System" );

    strcpy(parts[3][0], "Dash Panels" );
    strcpy(parts[3][1], "Carpet and other floor material" );
    strcpy(parts[3][2], "Center console (front/rear)" );
    strcpy(parts[3][3], "Trap (secret compartment)" );
    strcpy(parts[3][4], "Roll cage/Exo cage" );
    strcpy(parts[3][5], "Car seat" );
    strcpy(parts[3][6], "Arm Rest" );
    strcpy(parts[3][7], "Bench seat" );
    strcpy(parts[3][8], "Bucket seat" );
    strcpy(parts[3][9], "Fastener" );
    strcpy(parts[3][10], "Headrest" );
    strcpy(parts[3][11], "Seat belt" );
    strcpy(parts[3][12], "Seat bracket" );
    strcpy(parts[3][13], "Seat track" );
    strcpy(parts[3][14], "Seat cover" );
    strcpy(parts[3][15], "Back seat" );

    strcpy(parts[4][0], "A/C Systems" );
    strcpy(parts[4][1], "Air Cooling systems" );
    strcpy(parts[4][2], "Grooved ball bearing" );
    strcpy(parts[4][3], "Needle bearing");
    strcpy(parts[4][4], "Roller bearing" );
    strcpy(parts[4][5], "Sleeve bearing" );
    strcpy(parts[4][6], "wheel bearing" );
    strcpy(parts[4][7], "Bench seat" );
    strcpy(parts[4][8], "Bucket seat" );
    strcpy(parts[4][9], "Fuel vapour hose" );
    strcpy(parts[4][10], "Reinforced hose (high-pressure hose)" );
    strcpy(parts[4][11], "Non-reinforced hose wheel bearing" );
    strcpy(parts[4][12], "Radiator hose" );
    strcpy(parts[4][13], "Air bag" );
    strcpy(parts[4][14], "Bolt cap" );
    strcpy(parts[4][15], "Cables" );


}

void storePartsCost(float parts[][50], int length[]) //loads the values for the cost of each part previously stored
{
   //stores the amount of costs in each category in an array
    length[0]=31;
    length[1]=51;
    length[2]=31;
    length[3]=16;
    length[4]=16;

    parts[0][0]=176.07;
    parts[0][2]=173.87;
    parts[0][3]=126.37;
    parts[0][4]=70.87;
    parts[0][5]=245.83;
    parts[0][6]=239.76;
    parts[0][7]=89.77;
    parts[0][8]=245.83;
    parts[0][9]=76.90;
    parts[0][10]=100.86;
    parts[0][11]=54.78;
    parts[0][12]=98.63;
    parts[0][13]=37.98;
    parts[0][14]=62.87;
    parts[0][15]=76.63;
    parts[0][16]=139.36;
    parts[0][17]=89.77;
    parts[0][18]=245.83;
    parts[0][19]=62.12;
    parts[0][20]=70.87;
    parts[0][21]=62.12;
    parts[0][22]=98.67;
    parts[0][23]=45.98;
    parts[0][24]=63.93;
    parts[0][25]=70.87;
    parts[0][26]=72.87;
    parts[0][27]=65.89;
    parts[0][28]=151.25;
    parts[0][29]=62.12;
    parts[0][30]=151.25;

    parts[1][0]=1151.25;
    parts[1][2]=1263.93;
    parts[1][3]=1562.12;
    parts[1][4]=1215.25;
    parts[1][5]=708.87;
    parts[1][6]=1662.12;
    parts[1][7]=870.87;
    parts[1][8]=1762.12;
    parts[1][9]=900.87;
    parts[1][10]=1780.98;
    parts[1][11]=2162.12;
    parts[1][12]=1476.90;
    parts[1][13]=1970.87;
    parts[1][14]=2051.25;
    parts[1][15]=1100.86;
    parts[1][16]=1339.36;
    parts[1][17]=1737.98;
    parts[1][18]=1570.87;
    parts[1][19]=1226.37;
    parts[1][20]=1651.25;
    parts[1][21]=1562.12;
    parts[1][22]=1498.67;
    parts[1][23]=1545.98;
    parts[1][24]=2063.93;
    parts[1][25]=1670.87;
    parts[1][26]=1872.87;
    parts[1][27]=1365.89;
    parts[1][28]=1151.25;
    parts[1][29]=1262.12;
    parts[1][30]=151.25;
    parts[1][31]=708.48;
    parts[1][32]=1939.36;
    parts[1][33]=1878.08;
    parts[1][34]=1426.37;
    parts[1][35]=2309.78;
    parts[1][36]=2009.52;
    parts[1][37]=1000.86;
    parts[1][38]=708.45;
    parts[1][39]=1776.07;
    parts[1][40]=2137.98;
    parts[1][41]=1070.87;
    parts[1][42]=2176.07;
    parts[1][43]=1851.25;
    parts[1][44]=1400.86;
    parts[1][45]=2676.89;
    parts[1][46]=1026.37;
    parts[1][47]=1039.36;
    parts[1][48]=2017.09;
    parts[1][49]=1708.09;
    parts[1][50]=278.08;

    parts[2][0]=1339.36;
    parts[2][2]=2017.09;
    parts[2][3]=1400.86;
    parts[2][4]=2137.98;
    parts[2][5]=1851.25;
    parts[2][6]=1662.12;
    parts[2][7]=870.87;
    parts[2][8]=1762.12;
    parts[2][9]=900.87;
    parts[2][10]=1780.98;
    parts[2][11]=2162.12;
    parts[2][12]=1476.90;
    parts[2][13]=1970.87;
    parts[2][14]=2051.25;
    parts[2][15]=1100.86;
    parts[2][16]=1339.36;
    parts[2][17]=1737.98;
    parts[2][18]=1570.87;
    parts[2][19]=62.12;
    parts[2][20]=70.87;
    parts[2][21]=62.12;
    parts[2][22]=98.67;
    parts[2][23]=45.98;
    parts[2][24]=63.93;
    parts[2][25]=1339.36;
    parts[2][26]=970.87;
    parts[2][27]=476.90;
    parts[2][28]=100.86;
    parts[2][29]=476.90;
    parts[2][30]=162.12;

    parts[3][0]=1176.07;
    parts[3][2]=173.87;
    parts[3][3]=2126.37;
    parts[3][4]=170.87;
    parts[3][5]=1245.83;
    parts[3][6]=1239.76;
    parts[3][7]=1869.77;
    parts[3][8]=1245.83;
    parts[3][9]=1476.90;
    parts[3][10]=1100.86;
    parts[3][11]=154.78;
    parts[3][12]=198.63;
    parts[3][13]=137.98;
    parts[3][14]=162.87;
    parts[3][15]=176.63;
    parts[3][16]=1139.36;

    parts[4][0]=1339.36;
    parts[4][2]=2017.09;
    parts[4][3]=1400.86;
    parts[4][4]=2137.98;
    parts[4][5]=1851.25;
    parts[4][6]=1662.12;
    parts[4][7]=870.87;
    parts[4][8]=1762.12;
    parts[4][9]=900.87;
    parts[4][10]=1780.98;
    parts[4][11]=2162.12;
    parts[4][12]=1476.90;
    parts[4][13]=1970.87;
    parts[4][14]=2051.25;
    parts[4][15]=1100.86;
    parts[4][16]=1339.36;
}

 User enterLogin()
{
    User usr;
    int choice, i=0, reenter, pLength=100;
    char ch;

    do
    {
        printf("\nEnter your username:");
        gets(usr.id);
        fflush(stdin);
        printf("\nEnter your password:");
        while(((ch= getch()) != '\r') && (i<pLength))
        {
            if(ch == '\b')
            {
                usr.pass[i]='0';
                i--;
                printf("\b\b");
            }
            else
            {
                usr.pass[i]=ch;
                printf("*");
                i++;
            }
        }
        usr.pass[i]='\0';
        printf("\n\nTo see your password, enter 1. Otherwise to exit, enter 2.\n");
        scanf("%i", &choice);
        if(choice==1)
        {
            for(i=0;i<8;i++)
            {
                printf("%c",usr.pass[i]);
            }
        }
        do
        {
            printf("\n");
            printf("Is the data you entered correct? If not, press 1 to re-enter. Otherwise, enter 2 to continue.");
            scanf("%i", &reenter);
            fflush(stdin);
            if(reenter>2 || reenter<1)
            {
                error();
            }
        }while(reenter>2 || reenter<1);
    }while(reenter==1);
    fflush(stdin);
    return usr;
}


void signUp()
{
    User usr;

    usr=enterLogin();
    writeUser(usr);
}

int checkLogin(int uLen, int pLen, User usr, User log)
{
    int i, check=0;

    for(i=0;i<uLen;i++)
    {
        if(log.id[i]!=usr.id[i])
        {
            check=1;
            break;
        }
    }
    for (i=0; i<pLen; i++)
    {
        if(log.pass[i]!=usr.pass[i])
        {
            check=1;
            break;
        }
    }
    return check;
}

int signIn(User usr)
{
    User log;
    //char /*pass[10],uID[10],*/ ch;
    int i, check=0, uLen, pLen,valid=1;
    //clrscr();

    uLen=strlen(usr.id);
    pLen=strlen(usr.pass);
    log=enterLogin();
    check=checkLogin(uLen, pLen, usr, log);
    if(check==0)
    {
        printf("Successful Login!");
        valid=0;
    }
    else
    {
        for(i=3;i>0;i--)
            {
                check=0;
                printf("Unsuccessful Login. You have %i more attempts:\n\n", i);
                valid=1;
                log=enterLogin();
                check=checkLogin(uLen, pLen, usr, log);
                if(check==0)
                {
                    printf("Successful Login!");
                    valid=0;
                    i=0;
                }
            }
    }
    return valid;
}

int login()
{
    FILE *fp;
    User usr;
    int valid;

    printf("\n\t\t\t\t\t_____________________________________");
    printf("\n\t\t\t\t\t\t\tLOGIN");
    printf("\n\t\t\t\t\t-------------------------------------\n");
    if((fp=fopen("User.txt", "r"))==NULL) //if the file does not exist, meaning no user information has been entered, it passes to a module to accept login info and creates file
    {
        signUp();
        valid=0;
    }
    else //if the file exists (user information has already been entered and stored), the correct login info is read from file and passed to a module to check validity of current login info
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s %s", usr.id, usr.pass);
        }
        fclose(fp);
        valid=signIn(usr);
    }
    return valid;
}

void writeUser(User usr) //writes information entered for login credentials to file
{
    FILE *fp;
    if((fp=fopen("User.txt", "a"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        fprintf(fp, "%s %s", usr.id, usr.pass);
        fclose(fp);
    }
}

 void error()//prints error messages
 {
     printf("\nINVALID ENTRY-ENTER VALID DATA\n.");
 }

int checkDate(Date dt) //checks that the vaules entered for the date field are real, plausible dates
{
    int check=1;
    if(dt.day>0 && dt.day<32)
    {
        if(dt.month>0 && dt.month<13)
        {
            if(dt.year>1900)
            {
                check=0;
            }
        }
    }
    return check;
}

 void displayExit()
 {
     printf("bye.");
 }

 void displayWelcome()
 {
     printf("Welcome\n\n");
    printf("     __     __  ________  __    __  ______   ______   __        ________        _______    ______   _______   ________  \n");
    printf("    |  \   |  \|        \|  \  |  \|      \ /      \ |  \      |        \      |       \  /      \ |       \ |        \      \n");
    printf("    | $$   | $$| $$$$$$$$| $$  | $$ \$$$$$$|  $$$$$$\| $$      | $$$$$$$$      | $$$$$$$\|  $$$$$$\| $$$$$$$\ \$$$$$$$$  \n");
    printf("    | $$   | $$| $$__    | $$__| $$  | $$  | $$   \$$| $$      | $$__          | $$__/ $$| $$__| $$| $$__| $$   | $$  \n");
    printf("     \$$\ /  $$| $$  \   | $$    $$  | $$  | $$      | $$      | $$  \         | $$    $$| $$    $$| $$    $$   | $$  \n");
    printf("      \$$\  $$ | $$$$$   | $$$$$$$$  | $$  | $$   __ | $$      | $$$$$         | $$$$$$$ | $$$$$$$$| $$$$$$$\   | $$  \n");
    printf("       \$$ $$  | $$_____ | $$  | $$ _| $$_ | $$__/  \| $$_____ | $$_____       | $$      | $$  | $$| $$  | $$   | $$  \n");
    printf("        \$$$   | $$     \| $$  | $$|   $$ \ \$$    $$| $$     \| $$     \      | $$      | $$  | $$| $$  | $$   | $$  \n");
    printf("         \$     \$$$$$$$$ \$$   \$$ \$$$$$$  \$$$$$$  \$$$$$$$$ \$$$$$$$$       \$$       \$$   \$$ \$$   \$$    \$$  \n");
    printf("                                                                                             \n");
    printf("                                                                                             \n");
    printf("                                                                                              \n");
    printf("                                   ________  ______  __    __  _______   ________  _______   \n");
    printf("                                  |        \|      \|  \  |  \|       \ |        \|       \  \n");
    printf("                                  | $$$$$$$$ \$$$$$$| $$\ | $$| $$$$$$$\| $$$$$$$$| $$$$$$$\  \n");
    printf("                                  | $$__      | $$  | $$$\| $$| $$  | $$| $$__    | $$__| $$  \n");
    printf("                                  | $$  \     | $$  | $$$$\ $$| $$  | $$| $$  \   | $$    $$  \n");
    printf("                                  | $$$$$     | $$  | $$\$$ $$| $$  | $$| $$$$$   | $$$$$$$\  \n");
    printf("                                  | $$       _| $$_ | $$ \$$$$| $$__/ $$| $$_____ | $$  | $$  \n");
    printf("                                  | $$      |   $$ \| $$  \$$$| $$    $$| $$     \| $$  | $$  \n");
    printf("                                   \$$       \$$$$$$ \$$   \$$ \$$$$$$$  \$$$$$$$$ \$$   \$$  \n");

 }

void matchPart() //finds compatible cars for a part
{
    FILE *fp;
    Part pt, mPt;
    Car temp;
    char key[30];
    int mCount=0, choice;

    readPart();
    printf("\nEnter the ID of the Part you would like to match:\n");
    scanf("%s", key);

    if((fp=fopen("Parts.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s %i %i %s %i %i %i %i %i", pt.id, &pt.category ,&pt.type, pt.car, &pt.cond, &pt.manufacturer, &pt.dMan.day, &pt.dMan.month, &pt.dMan.year);
            if(strcmp(pt.id, key)==0)
            {
                mPt=pt;
            }
        }
        fclose(fp);
    }

    if((fp=fopen("Cars.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\t\t\tMATCHES\n");
        printf("----------------------------------------------");
        while(!feof(fp))
        {
            fscanf(fp, "%s %s %i %i %s %i %i %i %i", temp.license, temp.id, &temp.make, &temp.model, temp.colour, &temp.condition, &temp.mDate.day, &temp.mDate.month, &temp.mDate.year);
            if(criteria(temp, mPt)==1) //determines if it meets all necessary criteria, then it is compatible with car
            {
                printf("\nCAR %s: VERY COMPATIBLE\n", temp.id);
                printCar(temp);
                printf("\n_______________________________________________\n");
                mCount=mCount+1;
            }
            if(criteria(temp, mPt)==2) //if it m
            {
                printf("\nCAR %s: SEMI-COMPATIBLE (slight adjustments may be required)", temp.id);
                printCar(temp);
                mCount=mCount+1;
            }
        }
        fclose(fp);
    }
    printf("=============================================");
    printf("\n\t\t\t%i MATCHES FOUND\n", mCount);
    if(mCount==0) //if there are no matches, they have the option to sell it instead
    {
        do
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tWould you like to sell this part?\n1-YES\n2-NO\n");
            scanf("%i", &choice);
            if(choice>2 || choice<1)
            {
                error();
            }
        }while(choice>2 || choice<1);
        if(choice==1);
        {
            sellPart(mPt.id);
        }
    }

    printf("Press enter to continue...\n");
    getchar();
}

void matchCar()
{
    FILE *fp;
    Part pt, mPt;
    Car mCar, temp;
    char key[30];
    int mCount=0, choice;

    readCar();
    printf("\nEnter the ID of the Car you would like to match:\n");
    scanf("%s", key);
    printf("\n");
    if((fp=fopen("Cars.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s %s %i %i %s %i %i %i %i", temp.license, temp.id, &temp.make, &temp.model, temp.colour, &temp.condition, &temp.mDate.day, &temp.mDate.month, &temp.mDate.year);
            if(strcmp(temp.id, key)==0)
            {
                mCar=temp;
            }
        }
        fclose(fp);
    }
    if((fp=fopen("Parts.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\t\t\t    MATCHES\n");
        printf("------------------------------------------------------------------\n");
        while(!feof(fp))
        {
            fscanf(fp, "%s %i %i %s %i %i %i %i %i", pt.id, &pt.category ,&pt.type, pt.car, &pt.cond, &pt.manufacturer, &pt.dMan.day, &pt.dMan.month, &pt.dMan.year);
            if(criteria(mCar, pt)==1)
            {
                printf("\nPART %s: VERY COMPATIBLE\n", pt.id);
                printPart(pt);
                printf("\n\t\t\t\t\t\t__________________________________________________________________\n");
                mCount=mCount+1;
            }
            if(criteria(temp, mPt)==2)
            {
                printf("\nPART %s: SEMI-COMPATIBLE (slight adjustments may be required\n", pt.id);
                printPart(pt);
                printf("\n==================================================================\n");
                mCount=mCount+1;
            }
        }
        fclose(fp);
    }
    printf("\n\t\t\t%i MATCHES FOUND.\n", mCount);
    if(mCount==0) //if there are part matches, they have the option to buy the part instead
    {
        do
        {
            printf("\n\n\nWould you like to buy a part to match the car?\n1-YES\n2-NO\n");
            scanf("%i", &choice);
            if(choice>2 || choice<1)
            {
                error();
            }
        }while(choice>2 || choice<1);
        if(choice==1);
        {
            buyPart();
        }
    }
    printf("Press enter to continue...\n");
    getchar();
}

int criteria(Car mCar, Part mPt) //checks to see if the car and part meet all criteria necessary for compatibility, determines level of compatibility
{
    int match=0;

    if(mPt.cond>3) //Only parts in good or excellent condition can be reused- parts that are in bad condition are not compatible with anything
    {
        if((mCar.mDate.year-mPt.dMan.year)<5 && (mCar.mDate.year-mPt.dMan.year)>-5) //Only cars and parts made within 5 years of each other are compatible
        {
            //The parts below can be matched universally; they are compatible with all cars.
            switch(mPt.category)
            {
                case 2:
                    switch(mPt.type)
                    {
                        case 4: case 15: case 35: case 44:
                            match=1;
                            break;
                    }
                    break;
                case 3:
                    switch(mPt.type)
                    {
                        case 1: case 9: case 10: case 23:
                            match=1;
                            break;
                    }
                    break;
                case 5:
                    switch(mPt.type)
                    {
                        case 2: case 8: case 9: case 11: case 16:
                            match=1;
                            break;
                    }
                    break;
            }
        }
    }
    if(mPt.category==1 ||mPt.category==4) //All parts in the main body or interior category can match with any car
    {
        match=2;
    }
    return match;
}

void buyPart()
{
    float cost[5][50];
    int cat, typ, length[5];
    printf("\n");
    displayProducts();
    do
    {
        printf("\nEnter the category of the part you would like to buy:\n");
        scanf("%i", &cat);
        fflush(stdin);
        printf("\nEnter the type of part you would like to buy:\n");
        scanf("%i", &typ);
        fflush(stdin);
    }while(cat>5 || cat<0);


    matchSup(cat);
    storePartsCost(cost, length);
    printf("\t\t\t\t\t\t\t\t\t\t\t\tAVERAGE COST:%f\n", cost[cat-1][typ-1]);
}

void matchSup(int cat)
{
    FILE *fp;
    Supplier temp;
    int i;

    if((fp=fopen("Sup.txt", "r"))==NULL)
    {
        fprintf(stderr, "\n\nFile could not be opened\n");
    }
    else
    {
        printf("\nAVAILABLE SUPPLIERS\n");
        printf("------------------------------------------------------------------------------------------------");
        while(!feof(fp))
        {
            fread(&temp, sizeof(Supplier), 1, fp);
            for(i=0;i<prodSizes(cat);i++)
            {
                if(temp.products[i]==cat)
                {
                    printSupplier(temp);
                    printf("\n------------------------------------------------------------------------------------------------\n");
                }
            }
        }
        fclose(fp);
    }
}

int prodSizes(int key) //returns the number of products for any supplier
{
    int size;

    switch(key)
    {
        case 1:
            size=2;
            break;
        case 2:
            size=3;
            break;
        case 3:
            size=2;
            break;
        case 4:
            size=3;
            break;
        case 5:
            size=2;
            break;
    }

    return size;
}

void sellPart(char id[])
{
    float cost[5][50], sPrice;
    int length[5];
    char key[6];
    Part sellPt;

    if (strcmp(id, "0")==1)
    {
        readPart();
        printf("Enter the id of the part you would like to sell:");
        scanf("%s", key);
    }
    else
    {
        strcpy(key, id);
    }
    sellPt=findPart(key);
    storePartsCost(cost, length);
    switch(sellPt.cond) //based on the part condition, it loses value.
    {
        case 0:
             sPrice=cost[sellPt.category-1][sellPt.type-1]*46; //parts in poor condition depreciate by 54%
            break;
        case 1:
             sPrice=cost[sellPt.category-1][sellPt.type-1]*60;//parts in poor condition depreciate by 40%
            break;
        case 2:
            sPrice=cost[sellPt.category-1][sellPt.type-1]*72; //parts in poor condition depreciate by 28%
            break;
        case 3:
            sPrice=cost[sellPt.category-1][sellPt.type-1]*81; //parts in excellent condition only depreciate by 19%
            break;
    }
    printf("t\t\t\t\t------------------------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t\tAVERAGE SELLING PRICE: %f\n", sPrice);
    printf("t\t\t\t\t------------------------------------------------------------------------------------------------\n");
}
