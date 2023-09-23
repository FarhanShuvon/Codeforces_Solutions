#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
#include<unistd.h>

int main();

void welcome_page();
void Title();
void login_feauture();
void afterReg();
void Login();
void Registration();
void Features_page();
void Home_page();
void easy_home_feature();
void view_house();
void view_mess();
void view_hostel();
void view_hotel();
void add();
void add_house();
void add_Hostel();
void add_Mes();
void add_Hotel();

void Smart_shop_feature();
void Title();
void grocery_shop();
void electric_shop();
void pharmacy();
void snacks();
void emf();
void fruits();
void veggies();
void others();
void gpaid();
void epaid();
void fpaid();
void vpaid();
void mobile();
void laptop();
void others();
void mpaid();
void lpaid();
void opaid();
void ppaid();

void Helping_Hand_5();
void Title();
void View_Plumber();
void View_Cleaner();
void View_Watchman();
void View_Maid();
void add_helping_hand();
void add_Plumber_Details();
void add_Cleaner_Details();
void add_watchman_Details();
void add_Maid_Details();

void house_broker();
void house_broker();
void view_buy_house();
void add_h();
void add_sell_house();

int education_featurea_page();
void search_Teacher();
void search_Student();
void add_t();
void add_Teacher_Details();
void add_Student_Details();

void smart_Apartment_Management();
void add_renter_details();
void view_renter_details();
void payment();


/*        ##############################################################
          #                    Start Title page code                   #
          ##############################################################
*/
void Title(void)
{
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                  ------------------------------\n");
    printf("\t\t\t\t\t                          EASY LIFE             \n");
    printf("\t\t\t\t\t                  ------------------------------\n\n\n");
}
/*        ##############################################################
          #                      End Title page code                   #
          ##############################################################
*/


/*        ##############################################################
          #                       Main function code                   #
          ##############################################################
*/

int main()
{
    system("color fd");
    //system("color 11");
    welcome_page();
    login_feauture();
    Features_page();
    getch();
}
/*        ##############################################################
          #                   End Main function code                   #
          ##############################################################
*/


/*        ##############################################################
          #            Start Welcome/first page code                   #
          ##############################################################
*/
void welcome_page(void)
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                      WELCOME TO OUR PROJECT                       *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                        ->  EASY LIFE  <-                          *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                              by                                   *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                         BUG HUNTER SQUAD                          *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*                                                                   *\n");
    printf("\t\t\t\t\t\t*********************************************************************\n");

    printf("\n\n\t\t\t\t\t\tEnter any key to continue ----");
    getch();
}
/*        ##############################################################
          #                End  Welcome/first page code                #
          ##############################################################
*/


/*        ##############################################################
          #               Start Login feature  page code               #
          ##############################################################
*/
void login_feauture(void)
{

    system("cls");
    system("color fd"); // For green color
    Title();
    char choose1;
    printf("\t\t\t\t\tIf You do not have any account then you have to REGISTRATION first\n\n");
    printf("\t\t\t\t\t\t1. LOGIN\n\n");
    printf("\t\t\t\t\t\t2: Sign Up\n\n");
    printf("\t\t\t\t\t\t3: Close Program\n\n");
    printf("\t\t\t\t\t\tIf You already have an account Please Click 1. \n\n");
    printf("\t\t\t\t\t\tEnter Option (1-3) : ");
    scanf("%c",&choose1); // this scanf for input user preferred number
    if(choose1>= '1' && choose1<='3')
    {
        switch(choose1)
        {
        case '1':
        {
            system("cls");
            Login();
            break;
        }
        case '2':
        {
            system("cls");
            Registration();
            break;
        }
        case '3':
        {
            exit(0);
        }
        default:
        {
            login_feauture();
            break;
        }
        }
    }
    else
    {
        // system("cls");
        login_feauture();
    }

}
/*
          ##############################################################
          #             End Login feature  page code                   #
          ##############################################################
*/


/*        ##############################################################
          #             Start  Main Login feature page code            #
          ##############################################################
*/
bool Login_system()
{

    char username1[20],ch,pass[20];
    int charposition = 0;
    char us[20]; // this us variable for take Username of file..

    char password1[20];
    char pa[20]; // this pa variable for take Password of file..
    Title();
    printf("\t\t\t\t\t\t             Welcome to Login Page\n\n");
    printf("\t\t\t\t\t\t            -----------------------\n\n");
    printf("\t\t\t\t\t\t1. Username : ");
    fflush(stdin);
    gets(username1);
    fflush(stdin);
    printf("\t\t\t\t\t\t1. Password : ");
    fflush(stdin);
    while(1)
    {
        ch = getch();
        if(ch==13) //if user Hits ENTER BUTTON
        {
            break;
        }
        else if(ch==0) //if user enter backspace
        {
            if(charposition > 0)
            {
                charposition--;
                pass[charposition] = '\0';
                printf("\b \b");
            }
        }
        else if(ch == 31 || ch == 9)    //if user enter Space / Tab
        {

            continue;
        }
        else
        {

            if(charposition<=20)
            {
                pass[charposition] = ch;
                charposition++;
                printf("*");
            }
            else
            {
                printf("Your Password Length Exceeds Maximum Password Length\n");
                break;
            }
        }
    }
    //end
    pass[charposition] = '\0';
    strcpy(password1,pass);
    // password = pass;
    //gets(password1);


    char user1[20]; //This variable for copy Username

    strcpy(user1,username1);  // This function for copy user name from username1

    FILE *pfile;

    pfile = fopen(strcat(user1,".txt"),"r");

    fscanf(pfile,"%s %s",&us,&pa);

    if(strcmp(username1,us) == 0 && strcmp(password1,pa) == 0)
        return true;
    else
        return false;

    fclose(pfile);
}
/*        ##############################################################
          #             End  Main Login feature page code            #
          ##############################################################
*/


/*        ##############################################################
          #         Start Registration of this login system            #
          ##############################################################
*/
void Registration(void)
{

    system("cls");
    Title();
    char username[20],password[20],name[100],email[100],tempemail[100];
    char uuu[20],ch,pass[100];
    char t[]= {"@gmail.com"};
    int charposition = 0;
    printf("\t\t\t\t\t\t          Welcome to Reginstration Page\n\n");
    printf("\t\t\t\t\t\t         -------------------------------\n\n");
    printf("\t\t\t\t\t\t Name : ");
    scanf("%s",&name);
email:
    printf("\t\t\t\t\t\t Email : ");
    fflush(stdin);
    scanf("%s",&email);
    for(int i=0; i<strlen(email); i++)
    {
        if(email[i]=='@')
        {
            for(int j=0; j<strlen(t); j++)
            {
                tempemail[j]=email[i];
                i++;
            }
            break;
        }
    }
    if(strcmp(t,tempemail)==0)
    {
        printf("\n\t\t\t\t\t\t UserName : ");
        fflush(stdin);
        scanf("%s",&username);
        fflush(stdin);
        printf("\n\t\t\t\t\t\t Password: ");
        //  scanf("%s",&password);
        //password making part
        //
        while(1)
        {
            ch = getch();
            if(ch==13) //if user Hits ENTER BUTTON
            {
                break;
            }
            else if(ch==0) //if user enter backspace
            {
                if(charposition > 0)
                {
                    charposition--;
                    pass[charposition] = '\0';
                    printf("\b \b");
                }
            }
            else if(ch == 31 || ch == 9)    //if user enter Space / Tab
            {

                continue;
            }
            else
            {

                if(charposition<=20)
                {
                    pass[charposition] = ch;
                    charposition++;
                    printf("*");
                }
                else
                {
                    printf("Your Password Length Exceeds Maximum Password Length\n");
                    break;
                }
            }
        }
        //end
        pass[charposition] = '\0';
        strcpy(password,pass);
        // password = pass;
    }
    else
    {
        printf("\n\t\t\t\t\t\t Invalid Email please try again..\n");
        sleep(1);
        goto email;
    }
    strcpy(uuu,username);
    FILE *pfile; // for password file
    pfile = fopen(strcat(uuu,".txt"),"w");  // username.txt
    fprintf(pfile,"%s %s",username,password);
    fflush(stdin);
    fclose(pfile);

    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t ..Reginstration successfully..");
    printf("\n\n\t\t\t\t\t\t\t   Enter any for login - ");
    getch();
    afterReg();

}

/*        ##############################################################
          #         End Registration of this login system              #
          ##############################################################
*/

void afterReg(void)
{
    system("cls");
    int ch;
    Title();
    printf("\t\t\t\t\t\t1. Login\n\n");
    printf("\t\t\t\t\t\t2. Back\n\n");
    printf("\t\t\t\t\t\tEnter Option : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    {
        system("cls");
        Login();
        break;

    }
    case 2:
    {
        system("cls");
        login_feauture();
        break;
    }
    default:
    {
        Title();
        printf("\t\t\t\t\t\tInvalid Choice!\n\n");
        printf("\t\t\t\t\t\tFor Choice Again Enter 1 Or Enter 0 For Main Menu.\n\n");
        printf("\t\t\t\t\t\tEnter [1/0] : ");
        int n1;
        scanf("%d",&n1);

        switch(n1)
        {
        case 1:
        {
            system("cls");
            afterReg();
            break;
        }
        case 0:
        {
            system("cls");
            main();
        }
        }

    }
    }
}

/*        ##############################################################
          #            Start Login of this login system                #
          ##############################################################
*/
void Login(void)
{
    system("cls");
    bool condition = Login_system();
    if(condition)
    {
        system("cls"); // for clear
        Title(); // Titie
        printf("\t\t\t\t\t\t\t    ..Login successfully..\n");
        printf("\t\t\t\t\t\t\t     ...Wait a second...");
        sleep(1);
        //Features_page();
    }
    else
    {
        system("cls");
        Title();
        printf("\t\t\t\t\t\tInvalid Password\n\n");
        printf("\t\t\t\t\t\t1.Try Again\n\n");
        printf("\t\t\t\t\t\t2.Main Menu\n\n");
        printf("\t\t\t\t\t\t3.Close Application\n\n");
        printf("\t\t\t\t\t\tEnter Option : ");
        int n2;
        scanf("%d",&n2);
        switch(n2)
        {
        case 1:
        {
            system("cls");
            Title();
            Login();
        }
        case 2:
        {
            system("cls");
            Title();
            main();
        }
        case 3:
        {
            exit(0);
        }
        }

    }
}

/*        ##############################################################
          #            End Login of this login system                  #
          ##############################################################
*/

/*        ##############################################################
          #        Start Main Feature page code of our project         #
          ##############################################################
*/
void Features_page(void)
{
    system("color fd");
    system("cls");  //cls = for clear screen
    Title();
    int enter; // Enter is a variable which is take an input from user for choice 1 to 10;
    // Those feature are main feature of your project
    printf("\t\t\t\t\t\t1. Easy Home\n\n");
    printf("\t\t\t\t\t\t2. Smart shop\n\n");
    printf("\t\t\t\t\t\t3. House Broker\n\n");
    printf("\t\t\t\t\t\t4. smart Apartment Management\n\n");
    printf("\t\t\t\t\t\t5. Helping Hand\n\n");
    printf("\t\t\t\t\t\t6. Education Management\n\n");
    printf("\t\t\t\t\t\tEnter Your Preferred Number : ");
    scanf("%d",&enter); // this scanf for input user preferred number
    //--------------------------- Use Conditional Function For make condition for home page function-------------
    switch(enter)
    {
    case 1:
    {
        system("cls");
        Title();
        easy_home_feature();
        break;
    }
    case 2:
    {
        system("cls");
        Title();
        Smart_shop_feature();
    }
    case 3:
    {
        system("cls");
        house_broker();
        Title();
    }
    case 4:
    {
        system("cls");
        Title();
        smart_Apartment_Management();
    }
    case 5:
    {
        system("cls");
        Title();
        Helping_Hand_5();
    }
    case 6:
    {
        system("cls");
        Title();
        education_featurea_page();
    }
    default:
    {
        Features_page();
        break;
    }
    }
}
/*        ##############################################################
          #          End Main Feature page code of our project         #
          ##############################################################
*/
//......................................................................................................................... 1.Easy home
/*        ##############################################################
          #        Start structure for store Add - House Details       #
          ##############################################################
*/
struct add_easyHome // this structure for add house details
{
    char owner_fname[20];
    char owner_lname[20];
    char Address[40];
    char Location[40];
    char Phone_number[40];
};
/*        ##############################################################
          #        End structure for store Add - House Details         #
          ##############################################################
*/

void easy_home_feature(void)
{
    int choose;
    system("color fd");
    system("cls");
    Title();
    printf("\t\t\t\t\t\t1. View House's for Rent\n\n");
    printf("\t\t\t\t\t\t2. View Hostel's for Rent\n\n");
    printf("\t\t\t\t\t\t3. View Hotel's for Rent\n\n");
    printf("\t\t\t\t\t\t4. View mess's for Rent\n\n");
    printf("\t\t\t\t\t\t5. Add Details\n\n");
    printf("\t\t\t\t\t\t6. Back\n\n");
    printf("\t\t\t\t\t\tChoose Option (1-5) : ");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
    {
        system("cls");
        view_house();
        break;
    }
    case 2:
    {
        system("cls");
        view_hostel();
        break;
    }
    case 3:
    {
        system("cls");
        view_hotel();
        break;
    }
    case 4:
    {
        system("cls");
        view_mess();
        break;
    }
    case 5:
    {
        system("cls");
        add();
        break;
    }
    case 6:
    {
        system("cls");
        Features_page();
        break;
    }
    default:
    {
        easy_home_feature();
        break;
    }
    }
    getch();
}

/*        ##############################################################
          #               Start  Add page function                     #
          ##############################################################
*/
void add(void)
{
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t1.Add House Details \n\n");
    printf("\t\t\t\t\t\t2.Add Mess Details \n\n");
    printf("\t\t\t\t\t\t3.Add Hostel Details \n\n");
    printf("\t\t\t\t\t\t4.Add Hotel Details \n\n");
    printf("\t\t\t\t\t\t5.Back \n\n");
    printf("\t\t\t\t\t\tChoose Option (1-5):  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_house();
        break;
    }
    case 2:
    {
        system("cls");
        add_Hostel();
        break;
    }
    case 3:
    {
        system("cls");
        add_Mes();
        break;

    }
    case 4:
    {
        system("cls");
        add_Hotel();
        break;

    }
    case 5:
    {
        system("cls");
        easy_home_feature();
        break;
    }
    default:
    {
        add();
        break;
    }
    }

}
/*        ##############################################################
          #                 End  Add page function                     #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add house details                     #
          ##############################################################
*/
void add_house(void)
{
    system("cls");
    FILE *f;
    f = fopen("HomeDetails.txt","a");

    struct add_easyHome addh; //add h = add home details
    Title();
    printf("\n\t\t\t\t\t\t         .........House Details.........\n\n");
    printf("\t\t\t\t\t\tEnter Owner First Name : ");
    // fflush(stdin);
    scanf("%s",&addh.owner_fname);

    printf("\t\t\t\t\t\tEnter Owner Last Name : ");
    fflush(stdin);
    scanf("%s",&addh.owner_lname);

    printf("\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(addh.Address);

    printf("\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(addh.Location);

    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addh.Phone_number);

    fprintf(f,"%s %s %s %s %s\n",addh.owner_fname,addh.owner_lname,addh.Address,addh.Location,addh.Phone_number);
    fclose(f);
    system("cls");
    int n;
    Title();
    printf("\t\t\t\t\t\tIf you add more details then enter 1 or 0 for back :  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_house();
        break;
    }
    case 0:
    {
        system("cls");
        easy_home_feature();
        break;
    }
    default:
    {
        add_house();
        break;
    }
    }
}
/*        ##############################################################
          #                 End  Add house details                     #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add mess details                      #
          ##############################################################
*/
void add_Mes(void)
{
    system("cls");
    FILE *f;
    f = fopen("MessDetails.txt","a");

    struct add_easyHome addm; //add h = add mess details
    Title();
    printf("\n\t\t\t\t\t\t         .........Mess Details.........\n\n");
    printf("\t\t\t\t\t\tEnter Owner First Name : ");
    // fflush(stdin);
    scanf("%s",&addm.owner_fname);

    printf("\t\t\t\t\t\tEnter Owner Last Name : ");
    // fflush(stdin);
    scanf("%s",&addm.owner_lname);

    printf("\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(addm.Address);

    printf("\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(addm.Location);

    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addm.Phone_number);

    fprintf(f,"%s %s %s %s %s\n",addm.owner_fname,addm.owner_lname,addm.Address,addm.Location,addm.Phone_number);
    fclose(f);
    system("cls");
    int n;
    Title();
    printf("\t\t\t\t\t\tIf you add more details then enter 1 or 0 for back :  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_Mes();
        break;
    }
    case 0:
    {
        system("cls");
        easy_home_feature();
        break;
    }
    default:
    {
        add_Mes();
        break;
    }
    }
}
/*        ##############################################################
          #                 End  Add mess details                      #
          ##############################################################
*/


/*        ##############################################################
          #               Start  Add hostel details                    #
          ##############################################################
*/
void add_Hostel(void)
{
    system("cls");
    FILE *f;
    f = fopen("HostelDetails.txt","a");

    struct add_easyHome addhs; //add h = add hostel details
    Title();
    printf("\n\t\t\t\t\t\t         .........Hostel Details.........\n\n");
    printf("\t\t\t\t\t\tEnter Owner First Name : ");
    // fflush(stdin);
    scanf("%s",&addhs.owner_fname);

    printf("\t\t\t\t\t\tEnter Owner Last Name : ");
    // fflush(stdin);
    scanf("%s",&addhs.owner_lname);

    printf("\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(addhs.Address);

    printf("\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(addhs.Location);

    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addhs.Phone_number);

    fprintf(f,"%s %s %s %s %s\n",addhs.owner_fname,addhs.owner_lname,addhs.Address,addhs.Location,addhs.Phone_number);
    fclose(f);
    system("cls");
    int n;
    Title();
    printf("\t\t\t\t\t\tIf you add more details then enter 1 or 0 for back :  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_Hostel();
        break;
    }
    case 0:
    {
        system("cls");
        easy_home_feature();
        break;
    }
    default:
    {
        add_Hostel();
        break;
    }
    }
}
/*        ##############################################################
          #                 End  Add hostel details                    #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add Hotel details                     #
          ##############################################################
*/
void add_Hotel(void)
{
    system("cls");
    FILE *f;
    f = fopen("HotelDetails.txt","a");

    struct add_easyHome addht; //add h = add hotel details
    Title();
    printf("\n\t\t\t\t\t\t         .........Hotel Details.........\n\n");
    printf("\t\t\t\t\t\tEnter Owner First Name : ");

    scanf("%s",&addht.owner_fname);

    printf("\t\t\t\t\t\tEnter Owner Last Name : ");

    scanf("%s",&addht.owner_lname);

    printf("\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(addht.Address);

    printf("\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(addht.Location);

    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addht.Phone_number);

    fprintf(f,"%s %s %s %s %s\n",addht.owner_fname,addht.owner_lname,addht.Address,addht.Location,addht.Phone_number);

    fclose(f);

    system("cls");
    int n;
    Title();
    printf("\t\t\t\t\t\tIf you add more details then enter 1 or 0 for back :  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_Hotel();
        break;
    }
    case 0:
    {
        system("cls");
        easy_home_feature();
        break;
    }
    default:
    {
        add_Hotel();
        break;
    }
    }
}
/*        ##############################################################
          #                 End  Add Hotel details                     #
          ##############################################################
*/


/*        ##############################################################
          #                 Start  View details  of house              #
          ##############################################################
*/
void view_house(void)
{
    FILE *f;
    char ofn[20]; //oln = owner first name..
    char oln[20]; //oln = owner last name..
    char oad[20]; //oln = owner address details..
    char old[20]; //oln = owner Location name..
    char opn[20]; //oln = owner mobile number..
    f = fopen("HomeDetails.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            easy_home_feature();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            view_house();
        }
    }
    else
    {
        //int i = 1;
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s\n",&ofn,&oln,&oad,&old,&opn);
            printf("\n\t\t\t\t\t\t         .........House Details.........\n\n");
            //  printf("\t\t\t\t\t\tTO-LET: %d\n\n",i);
            printf("\t\t\t\t\t\tOwner Name : %s %s\n\n",ofn,oln);
            printf("\t\t\t\t\t\tHouse address :%s\n\n",oad);
            printf("\t\t\t\t\t\tHouse Location :%s\n\n",old);
            printf("\t\t\t\t\t\tOwner mobile number :%s\n\n",opn);
            // i++;
        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    easy_home_feature();
}
/*        ##############################################################
          #                End  View details  of house                 #
          ##############################################################
*/

/*        ##############################################################
          #                    Start  View details of mess             #
          ##############################################################
*/
void view_mess(void)
{
    FILE *f;
    char ofn[20]; //oln = owner first name..
    char oln[20]; //oln = owner last name..
    char oad[20]; //oln = owner address details..
    char old[20]; //oln = owner Location name..
    char opn[20]; //oln = owner mobile number..
    f = fopen("MessDetails.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            easy_home_feature();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            view_mess();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s\n",&ofn,&oln,&oad,&old,&opn);
            printf("\n\t\t\t\t\t\t         .........Mess Details.........\n\n");
            // printf("\t\t\t\t\t\tTO-LET:\n\n");
            printf("\t\t\t\t\t\tOwner Name : %s %s\n\n",ofn,oln);
            printf("\t\t\t\t\t\tHouse address :%s\n\n",oad);
            printf("\t\t\t\t\t\tHouse Location :%s\n\n",old);
            printf("\t\t\t\t\t\tOwner mobile number :%s\n\n",opn);
        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    easy_home_feature();

}
/*        ##############################################################
          #                    End  View details  of mess              #
          ##############################################################
*/

/*        ##############################################################
          #                    Start  View details of hostel             #
          ##############################################################
*/
void view_hostel(void)
{
    FILE *f;
    char ofn[20]; //oln = owner first name..
    char oln[20]; //oln = owner last name..
    char oad[20]; //oln = owner address details..
    char old[20]; //oln = owner Location name..
    char opn[20]; //oln = owner mobile number..
    f = fopen("HostelDetails.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            easy_home_feature();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            view_hostel();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s\n",&ofn,&oln,&oad,&old,&opn);
            printf("\n\t\t\t\t\t\t         .........hostel Details.........\n\n");
            // printf("\t\t\t\t\t\tTO-LET:\n\n");
            printf("\t\t\t\t\t\tOwner Name : %s %s\n\n",ofn,oln);
            printf("\t\t\t\t\t\tHouse address :%s\n\n",oad);
            printf("\t\t\t\t\t\tHouse Location :%s\n\n",old);
            printf("\t\t\t\t\t\tOwner mobile number :%s\n\n",opn);

        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    easy_home_feature();


}
/*        ##############################################################
          #                 End  View details  of hostel               #
          ##############################################################
*/

/*        ##############################################################
          #                    Start  View details of hotel             #
          ##############################################################
*/
void view_hotel(void)
{
    FILE *f;
    char ofn[20]; //oln = owner first name..
    char oln[20]; //oln = owner last name..
    char oad[20]; //oln = owner address details..
    char old[20]; //oln = owner Location name..
    char opn[20]; //oln = owner mobile number..
    f = fopen("HotelDetails.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            easy_home_feature();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            view_hotel();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s\n",&ofn,&oln,&oad,&old,&opn);
            printf("\n\t\t\t\t\t\t         .........Hotel Details.........\n\n");
            // printf("\t\t\t\t\t\tTO-LET:\n\n");
            printf("\t\t\t\t\t\tOwner Name : %s %s\n\n",ofn,oln);
            printf("\t\t\t\t\t\tHouse address :%s\n\n",oad);
            printf("\t\t\t\t\t\tHouse Location :%s\n\n",old);
            printf("\t\t\t\t\t\tOwner mobile number :%s\n\n",opn);

        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    easy_home_feature();
}
/*        ##############################################################
          #                    End  View details of hotel              #
          ##############################################################
*/

//#############################################################################################################################

/*        ##############################################################
          #           Start Feature page code of smart shop            #
          ##############################################################
*/
void Smart_shop_feature(void)
{
    system("color fd");
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t\t\t Smart Shops\n");
    printf("\t\t\t\t\t\t\t\t_____________\n\n");
    printf("\t\t\t\t\t\t1.Grocery Shop\n\n");
    printf("\t\t\t\t\t\t2.Electric Shop\n\n");
    printf("\t\t\t\t\t\t3.pharmacy\n\n");
    printf("\t\t\t\t\t\t4.Back\n\n");
    printf("\t\t\t\t\t\tChoose option (1-4) : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        Title();
        grocery_shop();
        break;
    }
    case 2:
    {
        system("cls");
        Title();
        electric_shop();
        break;
    }
    case 3:
    {
        system("cls");
        Title();
        pharmacy();
        break;
    }
    case 4:
    {
        Features_page();
        break;
    }
    default:
    {
        Smart_shop_feature();
        break;
    }
    }
    getch();
}
/*        ##############################################################
          #           End Feature page code of smart shop            #
          ##############################################################
*/



//_______________________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________________ START grocery
//_______________________________________________________________________________________________________________________________________________________


/*        ##############################################################
          #            Start Grocery shopping system code              #   ------------ 1
          ##############################################################
*/

void grocery_shop(void)
{
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t\t\t Grocery Shop\n");
    printf("\t\t\t\t\t\t1.Snacks\n\n");
    printf("\t\t\t\t\t\t2.Egg,meat&fish\n\n");
    printf("\t\t\t\t\t\t3.Fruits\n\n");
    printf("\t\t\t\t\t\t4.Veggies\n\n");
    printf("\t\t\t\t\t\t5.Back\n\n");
    printf("\t\t\t\t\t\tChoose option (1-5) : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        Title();
        snacks();
        break;
    }
    case 2:
    {
        system("cls");
        Title();
        emf();
        break;
    }
    case 3:
    {
        system("cls");
        Title();
        fruits();
        break;
    }
    case 4:
    {
        system("cls");
        Title();
        veggies();
        break;
    }
    case 5:
    {
        Smart_shop_feature();
        break;
    }
    default:
    {
        grocery_shop();
        break;
    }
    }
    getch();
}
/*        ##############################################################
          #         Start Grocery  snacks shopping system code         #   -------------------- > 2
          ##############################################################
*/
//c gs[]={"\t\t1.Mr. Twist Chips 25 gm","t2.Lime Chips 30gm","3.Crackers SpicyChips 20 gm","4.Alooz Spanish22 gm","5.Alooz Chips 22 gm","\t\t6.Alooz Waves BBQ Chips 22 gm","\t\t7.Pran Jhal Muri 35 gm","\t\t8.Bombay Sweets Chanachur 550 gm","\t\t9.Pran Chanachur 300 gm","\t\t10.Kurkure Thai Chicken Flavour 20 gm","\t\t11.Bombay Sweets Jhal Chanachur 300 gm","\t\t12.Pran Garlic Toast (Rusk) 250 gm","\t\t13.Kurkure Chilli Chatka 20 gm","\t\t14.Aarong Rasgulla 600 gm"};
char pp1[]=  {"\t\t1.Bombay Sweets Mr. Twist Chips 25 gm...................................................."};
char pp2[]=  {"\t\t2.Bombay Lime Chips 30gm................................................................."};
char pp3[]=  {"\t\t3.Crackers Spicy Tomato Flavor Chips 20 gm..............................................."};
char pp4[]=  {"\t\t4.Alooz Spanish Tomato Flavour Chips 22 gm..............................................."};
char pp5[]=  {"\t\t5.Alooz Magic Masala Chips 22 gm........................................................."};
char pp6[]=  {"\t\t6.Alooz Waves BBQ Chips 22 gm............................................................"};
char pp7[]=  {"\t\t7.Pran Jhal Muri 35 gm..................................................................."};
char pp8[]=  {"\t\t8.Bombay Sweets Chanachur 550 gm........................................................."};
char pp9[]=  {"\t\t9.Pran Chanachur 300 gm.................................................................."};
char pp10[]= {"\t\t10.Kurkure Thai Chicken Flavour 20 gm...................................................."};
char pp11[]= {"\t\t11.Bombay Sweets Jhal Chanachur 300 gm..................................................."};
char pp12[]= {"\t\t12.Pran Garlic Toast (Rusk) 250 gm......................................................."};
char pp13[]= {"\t\t13.Kurkure Chilli Chatka 20 gm..........................................................."};
char pp14[]= {"\t\t14.Aarong Rasgulla 600 gm................................................................"};
int ppp1=0;
int ppp2=0;
int ppp3=0;
int ppp4=0;
int ppp5=0;
int ppp6=0;
int ppp7=0;
int ppp8=0;
int ppp9=0;
int ppp10=0;
int ppp11=0;
int ppp12=0;
int ppp13=0;
int ppp14=0;
int n1=15,n2=15,n3=10,n4=15,n5=15,n6=15,n7=8,n8=100,n9=65,n10=10,n11=65,n12=45,n13=10,n14=180;
int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0;
void snacks(void)
{

    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Snacks\n\n");
    printf("\t\t1.Bombay Sweets Mr. Twist Chips 25 gm ............................................................................BDT 15\n\n");
    printf("\t\t2.Bombay Lime Chips 30gm .........................................................................................BDT 15\n\n");
    printf("\t\t3.Crackers Spicy Tomato Flavor Chips 20 gm .......................................................................BDT 10\n\n");
    printf("\t\t4.Alooz Spanish Tomato Flavour Chips 22 gm .......................................................................BDT 15\n\n");
    printf("\t\t5.Alooz Magic Masala Chips 22 gm .................................................................................BDT 15\n\n");
    printf("\t\t6.Alooz Waves BBQ Chips 22 gm ....................................................................................BDT 15\n\n");
    printf("\t\t7.Pran Jhal Muri 35 gm ...........................................................................................BDT 8\n\n");
    printf("\t\t8.Bombay Sweets Chanachur 550 gm .................................................................................BDT 100\n\n");
    printf("\t\t9.Pran Chanachur 300 gm ..........................................................................................BDT 65\n\n");
    printf("\t\t10.Kurkure Thai Chicken Flavour 20 gm ............................................................................BDT 10\n\n");
    printf("\t\t11.Bombay Sweets Jhal Chanachur 300 gm ...........................................................................BDT 65\n\n");
    printf("\t\t12.Pran Garlic Toast (Rusk) 250 gm ...............................................................................BDT 45\n\n");
    printf("\t\t13.Kurkure Chilli Chatka 20 gm ...................................................................................BDT 10\n\n");
    printf("\t\t14.Aarong Rasgulla 600 gm ........................................................................................BDT 180\n\n");
    printf("\t\t15.Back\n\n");
    printf("\t\tAdd Cart (1-15) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a1=n1*p;
        ppp1=a1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a2=n2*p;
        ppp2=a2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a3=n3*p;
        ppp3=a3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a4=n4*p;
        ppp4=a4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a5=n5*p;
        ppp5=a5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a6=n6*p;
        ppp6=a6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a7=n7*p;
        ppp7=a7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a8=n8*p;
        ppp8=a8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a9=n9*p;
        ppp9=a9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a10=n10*p;
        ppp10=a10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 11:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a11=n11*p;
        ppp11=a11;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 12:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a12=n12*p;
        ppp12=a12;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 13:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a13=n13*p;
        ppp13=a13;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        break;
    }
    case 14:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        a14=n14*p;
        ppp14=a14;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            snacks();
        }
        else if(i==0)
        {
            gpaid();
        }
        else
        {
            main();
        }
        break;
    }
    case 15:
    {
        grocery_shop();
        break;
    }
    default:
    {
        snacks();
        break;
    }
    }
}
/*        ##############################################################
          #    Start Grocery  snacks shopping  bill system code        #  --------------------- > 3
          ##############################################################
*/
void gpaid(void)
{
    system("cls");
    Title();
    int  sum = a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12+a13+a14;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");

    if(ppp1>0)
    {
        printf("%s %dBDT\n",pp1,ppp1);
    }
    if(ppp2>0)
    {
        printf("% s%dBDT\n",pp2,ppp2);
    }
    if(ppp3>0)
    {
        printf("%s %dBDT\n",pp3,ppp3);
    }
    if(ppp4>0)
    {
        printf("%s %dBDT\n",pp4,ppp4);
    }
    if(ppp5>0)
    {
        printf("%s %dBDT\n",pp5,ppp5);
    }
    if(ppp6>0)
    {
        printf("%s %dBDT\n",pp6,ppp6);
    }
    if(ppp7>0)
    {
        printf("%s %dBDT\n",pp7,ppp7);
    }
    if(ppp8>0)
    {
        printf("%s %dBDT\n",pp8,ppp8);
    }
    if(ppp9>0)
    {
        printf("%s %dBDT\n",pp9,ppp9);
    }
    if(ppp10>0)
    {
        printf("%s %dBDT\n",pp10,ppp10);
    }
    if(ppp11>0)
    {
        printf("%s %dBDT\n",pp11,ppp11);
    }
    if(ppp12>0)
    {
        printf("%s %dBDT\n",pp12,ppp12);
    }
    if(ppp13>0)
    {
        printf("%s %dBDT\n",pp13,ppp13);
    }
    if(ppp14>0)
    {
        printf("%s %dBDT\n",pp14,ppp14);
    }
    int amount,rest,famount;
    printf("\n\t\tYour total bill is ...................................................................... %d BDT\n\n",sum);
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {

        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.Have a Good day\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.Have a Good day\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0;


}
/*        ##############################################################
          #    End Grocery  snacks shopping  bill system code         #   -------------------------- > 3
          ##############################################################
*/

/*        ##############################################################
          #           End Grocery  snacks shopping system code         # ------------------------------- > 2
          ##############################################################
*/

//_______________________________________________________________________________________________________________________________________________________

/*        ##############################################################
          #            Start Grocery  emf shopping system code         #   -------------------- > 2

          ##############################################################
*/
char pp01[]=("\t\t1.Broiler Chicken Skin On Broiler Chicken Skin On .....................................................");
char pp02[]=("\t\t2.Boneless Chicken 1 kg ...............................................................................");
char pp03[]=("\t\t3.Roast Chicken 275 gm - 300 gm .......................................................................");
char pp04[]=("\t\t4.Chicken (Broiler) Gizzard-Liver (Gila-Kolija) 500 gm ................................................");
char pp05[]=("\t\t5.Bengal Meat Chicken Thigh (Bone In) 1 Kg ............................................................");
char pp06[]=("\t\t6.Beef Premium Bone In 1kg ............................................................................");
char pp07[]=("\t\t7.Bengal Meat Beef Tehari Cut | (60-65 pieces per kg) .................................................");
char pp08[]=("\t\t8.Bengal Meat Beef Sirloin Steak | 200 g ..............................................................");
char pp09[]=("\t\t9.Bengal Meat Premium Beef Boneless- Lean | (8-10 pieces per kg) ......................................");
char pp010[]=("\t\t10.Egg Broiler 12 Pcs (45 gm+ Per Pc) .................................................................");
int ppp01=0;
int ppp02=0;
int ppp03=0;
int ppp04=0;
int ppp05=0;
int ppp06=0;
int ppp07=0;
int ppp08=0;
int ppp09=0;
int ppp010=0;
int en1=307,en2=457,en3=229,en4=123,en5=425,en6=651,en7=645,en8=300,en9=980,en10=124;
int ea1=0,ea2=0,ea3=0,ea4=0,ea5=0,ea6=0,ea7=0,ea8=0,ea9=0,ea10=0;
void emf(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Egg, Meat & Fish\n\n");
    printf("\t\t1.Broiler Chicken Skin On Broiler Chicken Skin On .....................................................BDT 307\n\n");
    printf("\t\t2.Boneless Chicken 1 kg ...............................................................................BDT 457\n\n");
    printf("\t\t3.Roast Chicken 275 gm - 300 gm .......................................................................BDT 229\n\n");
    printf("\t\t4.Chicken (Broiler) Gizzard-Liver (Gila-Kolija) 500 gm ................................................BDT 123\n\n");
    printf("\t\t5.Bengal Meat Chicken Thigh (Bone In) 1 Kg ............................................................BDT 425\n\n");
    printf("\t\t6.Beef Premium Bone In 1kg ............................................................................BDT 651\n\n");
    printf("\t\t7.Bengal Meat Beef Tehari Cut | (60-65 pieces per kg) .................................................BDT 645\n\n");
    printf("\t\t8.Bengal Meat Beef Sirloin Steak | 200 g ..............................................................BDT 300\n\n");
    printf("\t\t9.Bengal Meat Premium Beef Boneless- Lean | (8-10 pieces per kg) ......................................BDT 980\n\n");
    printf("\t\t10.Egg Broiler 12 Pcs (45 gm+ Per Pc) .................................................................BDT 124\n\n");
    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea1=en1*p;
        ppp01=ea1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea2=en2*p;
        ppp02=ea2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea3=en3*p;
        ppp03=ea3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea4=en4*p;
        ppp04=ea4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea5=en5*p;
        ppp05=ea5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea6=en6*p;
        ppp06=ea6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea7=en7*p;
        ppp07=ea7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea8=en8*p;
        ppp08=ea8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea9=en9*p;
        ppp09=ea9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ea10=en10*p;
        ppp010=ea10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            emf();
        }
        else if(i==0)
        {
            epaid();
        }
        break;
    }
    case 11:
    {
        grocery_shop();
        break;
    }
    default:
    {
        emf();
        break;
    }

    }
}
/*        ##############################################################
          #    Start Grocery  emf shopping  bill system code        #  --------------------- > 3
          ##############################################################
*/
void epaid(void)
{
    system("cls");
    Title();
    int  sum = ea1+ea2+ea3+ea4+ea5+ea6+ea7+ea8+ea9+ea10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");
    if(ppp01>0)
    {
        printf("%s %dBDT\n",pp01,ppp01);
    }
    if(ppp02>0)
    {
        printf("% s%dBDT\n",pp02,ppp02);
    }
    if(ppp03>0)
    {
        printf("%s %dBDT\n",pp03,ppp03);
    }
    if(ppp04>0)
    {
        printf("%s %dBDT\n",pp04,ppp04);
    }
    if(ppp05>0)
    {
        printf("%s %dBDT\n",pp05,ppp05);
    }
    if(ppp06>0)
    {
        printf("%s %dBDT\n",pp06,ppp06);
    }
    if(ppp07>0)
    {
        printf("%s %dBDT\n",pp07,ppp07);
    }
    if(ppp08>0)
    {
        printf("%s %dBDT\n",pp08,ppp08);
    }
    if(ppp09>0)
    {
        printf("%s %dBDT\n",pp09,ppp09);
    }
    if(ppp010>0)
    {
        printf("%s %dBDT\n",pp010,ppp010);
    }
    printf("\t\tYour total bill is .................................................................... %d BDT\n",sum);
    int amount,rest,famount;
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {
        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    ea1=0,ea2=0,ea3=0,ea4=0,ea5=0,ea6=0,ea7=0,ea8=0,ea9=0,ea10=0;

}
/*        ##############################################################
          #    End Grocery  emf shopping  bill system code         #   -------------------------- > 3
          ##############################################################
*/
/*        ##############################################################
          #              End Grocery  emf shopping system code         # ------------------------------- > 2
          ##############################################################
*/

//_______________________________________________________________________________________________________________________________________________________


/*        ##############################################################
          #            Start Grocery  fruit shopping system code         #   -------------------- > 2
          ##############################################################
*/

char app01[]=("\t\t1.Malta 1kg .................................................................................");
char bpp01[]=("\t\t2.Banana Chompa 12 pcs ......................................................................");
char cpp01[]=("\t\t3.Guava Premium 1kg .........................................................................");
char dpp01[]=("\t\t4.Lal Angur (Red Grapes) 250gm ..............................................................");
char epp01[]=("\t\t5.Daab (Green Coconut) 1 ....................................................................");
char fpp01[]=("\t\t6.Paka Pape 1kg .............................................................................");
char gpp01[]=("\t\t7.China Fuji Apple 1kg ......................................................................");
char hpp01[]=("\t\t8.Dalim (Pomegranate) 2 pcs .................................................................");
char ipp01[]=("\t\t9.Jambura (Pomelo) each .....................................................................");
char jpp01[]=("\t\t10.Orange Indian 1kg ........................................................................");
int appp01=0;
int appp02=0;
int appp03=0;
int appp04=0;
int appp05=0;
int appp06=0;
int appp07=0;
int appp08=0;
int appp09=0;
int appp010=0;
int fen1=149,fen2=59,fen3=79,fen4=79,fen5=79,fen6=69,fen7=184,fen8=79,fen9=78,fen10=144;
int fea1=0,fea2=0,fea3=0,fea4=0,fea5=0,fea6=0,fea7=0,fea8=0,fea9=0,fea10=0;
void fruits(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Fruits \n\n");
    printf("\t\t1.Malta 1kg .................................................................................BDT 149\n\n");
    printf("\t\t2.Banana Chompa 12 pcs ......................................................................BDT 59\n\n");
    printf("\t\t3.Guava Premium 1kg .........................................................................BDT 79\n\n");
    printf("\t\t4.Lal Angur (Red Grapes) 250gm ..............................................................BDT 79\n\n");
    printf("\t\t5.Daab (Green Coconut) 1 ....................................................................BDT 79\n\n");
    printf("\t\t6.Paka Pape 1kg .............................................................................BDT 69\n\n");
    printf("\t\t7.China Fuji Apple 1kg ......................................................................BDT 184\n\n");
    printf("\t\t8.Dalim (Pomegranate) 2 pcs .................................................................BDT 79\n\n");
    printf("\t\t9.Jambura (Pomelo) each .....................................................................BDT 78\n\n");
    printf("\t\t10.Orange Indian 1kg ........................................................................BDT 144\n\n");
    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea1=fen1*p;
        appp01=fea1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea2=fen2*p;
        appp02=fea2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea3=fen3*p;
        appp03=fea3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea4=fen4*p;
        appp04=fea4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea5=fen5*p;
        appp05=fea5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea6=fen6*p;
        appp06=fea6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea7=fen7*p;
        appp07=fea7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea8=fen8*p;
        appp08=fea8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea9=fen9*p;
        appp09=fea9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        fea10=fen10*p;
        appp010=fea10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            fruits();
        }
        else if(i==0)
        {
            fpaid();
        }
        break;
    }
    case 11:
    {
        grocery_shop();
        break;
    }
    default:
    {
        fruits();
        break;
    }

    }
}
/*        ##############################################################
          #    Start Grocery  fruit shopping  bill system code        #  --------------------- > 3
          ##############################################################
*/
void fpaid(void)
{
    system("cls");
    Title();
    int  sum = fea1+fea2+fea3+fea4+fea5+fea6+fea7+fea8+fea9+fea10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");
    int amount,rest,famount;
    if(appp01>0)
    {
        printf("%s %dBDT\n",app01,appp01);
    }
    if(appp02>0)
    {
        printf("%s %dBDT\n",bpp01,appp02);
    }
    if(appp03>0)
    {
        printf("%s %dBDT\n",cpp01,appp03);
    }
    if(appp04>0)
    {
        printf("%s %dBDT\n",dpp01,appp04);
    }
    if(appp05>0)
    {
        printf("%s %dBDT\n",epp01,appp05);
    }
    if(appp06>0)
    {
        printf("%s %dBDT\n",fpp01,appp06);
    }
    if(appp07>0)
    {
        printf("%s %dBDT\n",gpp01,appp07);
    }
    if(appp08>0)
    {
        printf("%s %dBDT\n",hpp01,appp08);
    }
    if(appp09>0)
    {
        printf("%s %dBDT\n",ipp01,appp09);
    }
    if(appp010>0)
    {
        printf("%s %dBDT\n",jpp01,appp010);
    }
    printf("\t\tYour total bill is ...................................................... ................. %d BDT\n\n",sum);
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {

        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    fea1=0,fea2=0,fea3=0,fea4=0,fea5=0,fea6=0,fea7=0,fea8=0,fea9=0,fea10=0;

}
/*        ##############################################################
          #    End Grocery  fruit shopping  bill system code         #   -------------------------- > 3
          ##############################################################
*/


/*        ##############################################################
          #              End Grocery  fruit shopping system code         # ------------------------------- > 2
          ##############################################################
*/



//.........................................................................................................................................................................
/*        ##############################################################
          #            Start Grocery  veggies shopping system code         #   -------------------- > 2
          ##############################################################
*/

//_______________________________________________________________________________________________________________________________________________________

char aapp01[]=("\t\t1.Potato Regular 1kg ................................................................................");
char abpp01[]=("\t\t2.Zucchini 1kg ......................................................................................");
char acpp01[]=("\t\t3.Deshi Peyaj (Local Onion) 1kg .....................................................................");
char adpp01[]=("\t\t4.Lal Peyaj (Onion Red Imported) 1kg ................................................................");
char aepp01[]=("\t\t5.Fulkopi (Cauliflower) each ........................................................................");
char afpp01[]=("\t\t6.Red Tomato 1kg ....................................................................................");
char agpp01[]=("\t\t7.Lal Shak (Red Spinach) 1 bundle ...................................................................");
char ahpp01[]=("\t\t8.Potol (Pointed Gourd) 1kg .........................................................................");
char aipp01[]=("\t\t9.Kacha Pepe (Green Papaya) 1 kg ....................................................................");
char ajpp01[]=("\t\t10.Dheros (Ladies Finger) 1kg .......................................................................");
// int aappp01=0;int aappp02=0;int aappp03=0;int aappp04=0;int aappp05=0;int aappp06=0;int aappp07=0;int aappp08=0;int aappp09=0;int aappp010=0;
int vfen1=23,vfen2=99,vfen3=59,vfen4=55,vfen5=35,vfen6=50,vfen7=9,vfen8=60,vfen9=30,vfen10=144;

int vfea1=0,vfea2=0,vfea3=0,vfea4=0,vfea5=0,vfea6=0,vfea7=0,vfea8=0,vfea9=0,vfea10=0;
void veggies(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Veggies \n\n");
    printf("\t\t1.Potato Regular 1kg ................................................................................BDT 23\n\n");
    printf("\t\t2.Zucchini 1kg ......................................................................................BDT 99\n\n");
    printf("\t\t3.Deshi Peyaj (Local Onion) 1kg .....................................................................BDT 59\n\n");
    printf("\t\t4.Lal Peyaj (Onion Red Imported) 1kg ................................................................BDT 55\n\n");
    printf("\t\t5.Fulkopi (Cauliflower) each ........................................................................BDT 35\n\n");
    printf("\t\t6.Red Tomato 1kg ....................................................................................BDT 50\n\n");
    printf("\t\t7.Lal Shak (Red Spinach) 1 bundle ...................................................................BDT 9\n\n");
    printf("\t\t8.Potol (Pointed Gourd) 1kg .........................................................................BDT 60\n\n");
    printf("\t\t9.Kacha Pepe (Green Papaya) 1 kg ....................................................................BDT 30\n\n");
    printf("\t\t10.Dheros (Ladies Finger) 1kg .......................................................................BDT 29\n\n");
    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea1=vfen1*p;
        appp01=vfea1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea2=vfen2*p;
        appp02=vfea2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea3=vfen3*p;
        appp03=vfea3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea4=vfen4*p;
        appp04=vfea4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea5=vfen5*p;
        appp05=vfea5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea6=vfen6*p;
        appp06=vfea6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea7=vfen7*p;
        appp07=vfea7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea8=vfen8*p;
        appp08=vfea8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea9=vfen9*p;
        appp09=vfea9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        vfea10=vfen10*p;
        appp010=vfea10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            veggies();
        }
        else if(i==0)
        {
            vpaid();
        }
        break;
    }
    case 11:
    {
        grocery_shop();
        break;
    }
    default:
    {
        veggies();
        break;
    }

    }
}
/*        ##############################################################
          #    Start Grocery veggies shopping  bill system code        #  --------------------- > 3
          ##############################################################
*/
void vpaid(void)
{
    system("cls");
    Title();
    int  sum = vfea1+vfea2+vfea3+vfea4+vfea5+vfea6+vfea7+vfea8+vfea9+vfea10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");
    if(appp01>0)
    {
        printf("%s %dBDT\n",aapp01,appp01);
    }
    if(appp02>0)
    {
        printf("% s%dBDT\n",abpp01,appp02);
    }
    if(appp03>0)
    {
        printf("%s %dBDT\n",acpp01,appp03);
    }
    if(appp04>0)
    {
        printf("%s %dBDT\n",adpp01,appp04);
    }
    if(appp05>0)
    {
        printf("%s %dBDT\n",aepp01,appp05);
    }
    if(appp06>0)
    {
        printf("%s %dBDT\n",afpp01,appp06);
    }
    if(appp07>0)
    {
        printf("%s %dBDT\n",agpp01,appp07);
    }
    if(appp08>0)
    {
        printf("%s %dBDT\n",ahpp01,appp08);
    }
    if(appp09>0)
    {
        printf("%s %dBDT\n",aipp01,appp09);
    }
    if(appp010>0)
    {
        printf("%s %dBDT\n",ajpp01,appp010);
    }
    printf("\t\tYour total bill is ........................................................................ %d BDT\n",sum);
    int amount,rest,famount;
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {

        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    vfea1=0,vfea2=0,vfea3=0,vfea4=0,vfea5=0,vfea6=0,vfea7=0,vfea8=0,vfea9=0,vfea10=0;

}
/*        ##############################################################
          #    End Grocery  veggies shopping  bill system code         #   -------------------------- > 3
          ##############################################################
*/


/*        ##############################################################
          #          End Grocery  veggies shopping system code         # ------------------------------- > 2
          ##############################################################
*/
/*        ##############################################################
          #              END Grocery shopping system code              # ------------------- 1
          ##############################################################
*/
//_______________________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________________ END grocery
//_______________________________________________________________________________________________________________________________________________________



//_______________________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________________ Start electric shop
//_______________________________________________________________________________________________________________________________________________________




void electric_shop(void)
{
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t\t\t Electric Shop\n");
    printf("\t\t\t\t\t\t1.Mobile\n\n");
    printf("\t\t\t\t\t\t2.Laptop\n\n");
    printf("\t\t\t\t\t\t3.Others\n\n");
    printf("\t\t\t\t\t\t4.Back\n\n");
    printf("\t\t\t\t\t\tChoose option (1-4) : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        Title();
        mobile();
        break;
    }
    case 2:
    {
        system("cls");
        Title();
        laptop();
        break;
    }
    case 3:
    {
        system("cls");
        Title();
        others();
        break;
    }
    case 4:
    {
        Smart_shop_feature();
        break;
    }
    default:
    {
        electric_shop();
        break;
    }
    }
    getch();
}


/*        ##############################################################
          #         Start electric mobile shopping system code         #
          ##############################################################
*/
char a[]=("\t\t1.Apple iPhone 13 Pro Max (128 GB) .................................................................................");
char b[]=("\t\t2.Apple iPhone 13 Pro (128 GB) .....................................................................................");
char c[]=("\t\t3.Apple iPhone 13 (128 GB) .........................................................................................");
char d[]=("\t\t4.Apple iPhone 13 Mini .............................................................................................");
char e[]=("\t\t5.Apple iPhone 12 Pro Max (128 GB) .................................................................................");
char f[]=("\t\t6.Apple iPhone 12 Pro (128 GB) .....................................................................................");
char g[]=("\t\t7.Apple iPhone 12 (128 GB) .........................................................................................");
char h[]=("\t\t8.Apple iPhone 12 Mini .............................................................................................");
char i[]=("\t\t9.Apple iPhone 11 ..................................................................................................");
char j[]=("\t\t10.Apple iPhone X ..................................................................................................");

//int ppp01=0;int ppp02=0;int ppp03=0;int ppp04=0;int ppp05=0;int ppp06=0;int ppp07=0;int ppp08=0;int ppp09=0;int ppp010=0;

int m1=162999,m2=147999,m3=118999,m4=103999,m5=161999,m6=146999,m7=107999,m8=109999,m9=87999,m10=84999;
int ma1=0,ma2=0,ma3=0,ma4=0,ma5=0,ma6=0,ma7=0,ma8=0,ma9=0,ma10=0;
void mobile(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Mobiles \n\n");
    printf("\t\t1.Apple iPhone 13 Pro Max (128 GB) .................................................................................BDT 162,999\n\n");
    printf("\t\t2.Apple iPhone 13 Pro (128 GB) .....................................................................................BDT 147,999\n\n");
    printf("\t\t3.Apple iPhone 13 (128 GB) .........................................................................................BDT 118,999\n\n");
    printf("\t\t4.Apple iPhone 13 Mini .............................................................................................BDT 103,999\n\n");
    printf("\t\t5.Apple iPhone 12 Pro Max (128 GB) .................................................................................BDT 161,999\n\n");
    printf("\t\t6.Apple iPhone 12 Pro (128 GB) .....................................................................................BDT 146,999\n\n");
    printf("\t\t7.Apple iPhone 12 (128 GB) .........................................................................................BDT 107,999\n\n");
    printf("\t\t8.Apple iPhone 12 Mini .............................................................................................BDT 109,999\n\n");
    printf("\t\t9.Apple iPhone 11 ..................................................................................................BDT 87,999\n\n");
    printf("\t\t10.Apple iPhone X ..................................................................................................BDT 84,999\n\n");
    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma1=m1*p;
        appp01=ma1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma2=m2*p;
        appp02=ma2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma3=m3*p;
        appp03=ma3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma4=m4*p;
        appp04=ma4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma5=m5*p;
        appp05=ma5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma6=m6*p;
        appp06=ma6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma7=m7*p;
        appp07=ma7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma8=m8*p;
        appp08=ma8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma9=m9*p;
        appp09=ma9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        ma10=m10*p;
        appp010=ma10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            mobile();
        }
        else if(i==0)
        {
            mpaid();
        }
        break;
    }
    case 11:
    {
        electric_shop();
        break;
    }
    default:
    {
        mobile();
        break;
    }
    }

}
/*        ##############################################################
          #         End electric mobile shopping system code         #
          ##############################################################
*/

/*        ##############################################################
          #    Start electric mobile  shopping  bill system code       #   -------------------------- > 3
          ##############################################################
*/
void mpaid(void)
{
    system("cls");
    Title();
    int  sum = ma1+ma2+ma3+ma4+ma5+ma6+ma7+ma8+ma9+ma10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");
    int amount,rest,famount;
    if(appp01>0)
    {
        printf("%s %dBDT\n",a,appp01);
    }
    if(appp02>0)
    {
        printf("% s%dBDT\n",b,appp02);
    }
    if(appp03>0)
    {
        printf("%s %dBDT\n",c,appp03);
    }
    if(appp04>0)
    {
        printf("%s %dBDT\n",d,appp04);
    }
    if(appp05>0)
    {
        printf("%s %dBDT\n",e,appp05);
    }
    if(appp06>0)
    {
        printf("%s %dBDT\n",f,appp06);
    }
    if(appp07>0)
    {
        printf("%s %dBDT\n",g,appp07);
    }
    if(appp08>0)
    {
        printf("%s %dBDT\n",h,appp08);
    }
    if(appp09>0)
    {
        printf("%s %dBDT\n",i,appp09);
    }
    if(appp010>0)
    {
        printf("%s %dBDT\n",j,appp010);
    }
    printf("\t\tYour total bill is ....................................................................... %d BDT\n\n",sum);
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {
        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    int ma1=0,ma2=0,ma3=0,ma4=0,ma5=0,ma6=0,ma7=0,ma8=0,ma9=0,ma10=0;

}
/*        ##############################################################
          #      End electric mobile shopping  bill system code       #   -------------------------- > 3
          ##############################################################
*/

/*        ##############################################################
          #         Start electric laptop shopping system code         #
          ##############################################################
*/
char aa[]=("\t\t1.Apple MacBook Air 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 256GB SSD (MGN63) Space Gray ........");
char ab[]=("\t\t2.Apple MacBook Air 13.3-Inch 10th Gen Core i5-1.1GHz, 8GB RAM, 512GB SSD (MVH22) Space Gray 2020 ...................");
char ac[]=("\t\t3.Apple MacBook Air 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 512GB SSD (MGN73) Space Gray.........");
char ad[]=("\t\t4.Apple MacBook Pro 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 256GB SSD (MYDA2) Silver.............");
char ae[]=("\t\t5.Apple MacBook Pro 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 512GB SSD (MYD92) Space Gray........ ");
char af[]=("\t\t6.Apple Macbook Pro 13 M1 Processor, 8GB Ram, 512GB SSD (MYDC2) Silver...............................................");
char ag[]=("\t\t7.Apple MacBook Pro 13.3-Inch Core i5-2.0GHz, 16GB RAM, 1TB SSD, Touch Bar, Space Gray 2020 (MWP52 / Z0Y600047)......");
char ah[]=("\t\t8.Apple MacBook Pro 13.3-Inch Retina Display 8-core Apple M1 chip with 16GB RAM, 1TB SSD (Z11B000A9-1TB) Space Gray..");
char ai[]=("\t\t9.Apple MacBook Pro 14-Inch M1 Pro Chip, 16GB RAM, 512GB SSD (MKGP3LL/A) Space Gray 2021.............................");
char aj[]=("\t\t10.Apple MacBook Pro 14-Inch M1 Pro Chip, 16GB RAM, 512GB SSD (MKGR3LL/A) Silver 2021................................");

int lm1=99000,lm2=125000,lm3=126000,lm4=127000,lm5=143000,lm6=151000,lm7=185000,lm8=200000,lm9=218000,lm10=230000;
int lma1=0,lma2=0,lma3=0,lma4=0,lma5=0,lma6=0,lma7=0,lma8=0,lma9=0,lma10=0;
void laptop(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Laptops \n\n");

    printf("\t\t1.Apple MacBook Air 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 256GB SSD (MGN63) Space Gray ........BDT 99,000\n\n");
    printf("\t\t2.Apple MacBook Air 13.3-Inch 10th Gen Core i5-1.1GHz, 8GB RAM, 512GB SSD (MVH22) Space Gray 2020 ...................BDT 125,000\n\n");
    printf("\t\t3.Apple MacBook Air 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 512GB SSD (MGN73) Space Gray.........BDT 126,000\n\n");
    printf("\t\t4.Apple MacBook Pro 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 256GB SSD (MYDA2) Silver.............BDT 127,000\n\n");
    printf("\t\t5.Apple MacBook Pro 13.3-Inch Retina Display 8-core Apple M1 chip with 8GB RAM, 512GB SSD (MYD92) Space Gray........ BDT 143,000\n\n");
    printf("\t\t6.Apple Macbook Pro 13 M1 Processor, 8GB Ram, 512GB SSD (MYDC2) Silver...............................................BDT 151,000\n\n");
    printf("\t\t7.Apple MacBook Pro 13.3-Inch Core i5-2.0GHz, 16GB RAM, 1TB SSD, Touch Bar, Space Gray 2020 (MWP52 / Z0Y600047)......BDT 185,999\n\n");
    printf("\t\t8.Apple MacBook Pro 13.3-Inch Retina Display 8-core Apple M1 chip with 16GB RAM, 1TB SSD (Z11B000A9-1TB) Space Gray..BDT 200,000\n\n");
    printf("\t\t9.Apple MacBook Pro 14-Inch M1 Pro Chip, 16GB RAM, 512GB SSD (MKGP3LL/A) Space Gray 2021.............................BDT 218,000\n\n");
    printf("\t\t10.Apple MacBook Pro 14-Inch M1 Pro Chip, 16GB RAM, 512GB SSD (MKGR3LL/A) Silver 2021................................BDT 230,000\n\n");

    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma1=lm1*p;
        appp01=lma1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma2=lm2*p;
        appp02=lma2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma3=lm3*p;
        appp03=lma3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma4=lm4*p;
        appp04=lma4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma5=lm5*p;
        appp05=lma5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma6=lm6*p;
        appp06=lma6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma7=lm7*p;
        appp07=lma7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma8=lm8*p;
        appp08=lma8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma9=lm9*p;
        appp09=lma9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        lma10=lm10*p;
        appp010=lma10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            laptop();
        }
        else if(i==0)
        {
            lpaid();
        }
        break;
    }
    case 11:
    {
        electric_shop();
        break;
    }
    default:
    {
        laptop();
        break;
    }
    }
}
/*        ##############################################################
          #         End electric laptop shopping system code         #
          ##############################################################
*/

/*        ##############################################################
          #    Start electric laptop  shopping  bill system code       #   -------------------------- > 3
          ##############################################################
*/
void lpaid(void)
{
    system("cls");
    Title();
    int  sum = lma1+lma2+lma3+lma4+lma5+lma6+lma7+lma8+lma9+lma10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");

    if(appp01>0)
    {
        printf("%s %dBDT\n",aa,appp01);
    }
    if(appp02>0)
    {
        printf("% s%dBDT\n",ab,appp02);
    }
    if(appp03>0)
    {
        printf("%s %dBDT\n",ac,appp03);
    }
    if(appp04>0)
    {
        printf("%s %dBDT\n",ad,appp04);
    }
    if(appp05>0)
    {
        printf("%s %dBDT\n",ae,appp05);
    }
    if(appp06>0)
    {
        printf("%s %dBDT\n",af,appp06);
    }
    if(appp07>0)
    {
        printf("%s %dBDT\n",ag,appp07);
    }
    if(appp08>0)
    {
        printf("%s %dBDT\n",ah,appp08);
    }
    if(appp09>0)
    {
        printf("%s %dBDT\n",ai,appp09);
    }
    if(appp010>0)
    {
        printf("%s %dBDT\n",aj,appp010);
    }


    //printf("\t\tYour total bill is .................................................................... %d BDT\n",sum);
    int amount,rest,famount;
    printf("\t\tYour total bill is ....................................................................... %d BDT\n\n",sum);
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {

        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    int lma1=0,lma2=0,lma3=0,lma4=0,lma5=0,lma6=0,lma7=0,lma8=0,lma9=0,lma10=0;


}
/*        ##############################################################
          #      End electric laptop  shopping  bill system code       #   -------------------------- > 3
          ##############################################################
*/

/*        ##############################################################
          #         Start electric others shopping system code         #
          ##############################################################
*/
char aaa[]=("\t\t1.MI P1 32 Inch HD Android LED TV...................................................................");
char aab[]=("\t\t2.MI Xiaomi 43 inch FULL HD HDR android LED TV - 4A43N..............................................");
char aac[]=("\t\t3.VISION Electric Kettle 1.8L VIS-EK-005............................................................");
char aad[]=("\t\t4.Vision Electronic Kettle 1.8L VIS-EK-006..........................................................");
char aae[]=("\t\t5.Vision Rice Cooker 1.8 Liter- Double Pot..........................................................");
char aaf[]=("\t\t6.Panasonic Multi Rice Cooker (1.8L)- SR-W18G.......................................................");
char aag[]=("\t\t7.Panasonic MX-AV425 (Coral Black) 1500W Super Mixer Grinder........................................");
char aah[]=("\t\t8.SAMSUNG Top Mount Freezer with Digital Inverter 394 L.............................................");
char aai[]=("\t\t9.ECO+ Frame Less Glass Door Refrigerator 225 Liter Blue............................................");
char aaj[]=("\t\t10.Sharp Full Auto Top Loading Washing Machine Es-X858 - 8.0 Kg Black...............................");

int om1=21790,om2=36200,om3=738,om4=1176,om5=1940,om6=3450,om7=10780,om8=72900,om9=31880,om10=25000;
int oma1=0,oma2=0,oma3=0,oma4=0,oma5=0,oma6=0,oma7=0,oma8=0,oma9=0,oma10=0;
void others(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t Others \n\n");

    printf("\t\t1.MI P1 32 Inch HD Android LED TV...................................................................BDT 21,790\n\n");
    printf("\t\t2.MI Xiaomi 43 inch FULL HD HDR android LED TV - 4A43N..............................................BDT 36,200\n\n");
    printf("\t\t3.VISION Electric Kettle 1.8L VIS-EK-005............................................................BDT 738\n\n");
    printf("\t\t4.Vision Electronic Kettle 1.8L VIS-EK-006..........................................................BDT 1,176\n\n");
    printf("\t\t5.Vision Rice Cooker 1.8 Liter- Double Pot......................................................... BDT 1,940\n\n");
    printf("\t\t6.Panasonic Multi Rice Cooker (1.8L)- SR-W18G.......................................................BDT 3,450\n\n");
    printf("\t\t7.Panasonic MX-AV425 (Coral Black) 1500W Super Mixer Grinder........................................BDT 10,780\n\n");
    printf("\t\t8.SAMSUNG Top Mount Freezer with Digital Inverter 394 L.............................................BDT 72,900\n\n");
    printf("\t\t9.ECO+ Frame Less Glass Door Refrigerator 225 Liter Blue............................................BDT 31,880\n\n");
    printf("\t\t10.Sharp Full Auto Top Loading Washing Machine Es-X858 - 8.0 Kg Black...............................BDT 25,000\n\n");

    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma1=om1*p;
        appp01 = oma1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma2=om2*p;
        appp02 = oma2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma3=om3*p;
        appp03= oma3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma4=om4*p;
        appp04 = oma4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma5=om5*p;
        appp05 = oma5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma6=om6*p;
        appp06 = oma6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma7=om7*p;
        appp07 = oma7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma8=om8*p;
        appp08 = oma8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma9=om9*p;
        appp09 = oma9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        oma10=om10*p;
        appp010 = oma10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            others();
        }
        else if(i==0)
        {
            opaid();
        }
        break;
    }
    case 11:
    {
        electric_shop();
        break;
    }
    default:
    {
        others();
        break;
    }
    }
}
/*        ##############################################################
          #           End electric others shopping system code         #
          ##############################################################
*/

/*        ##############################################################
          #    Start electric others shopping  bill system code       #   -------------------------- > 3
          ##############################################################
*/
void opaid(void)
{
    system("cls");
    Title();
    int  sum = oma1+oma2+oma3+oma4+oma5+oma6+oma7+oma8+oma9+oma10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");
    // printf("\t\tYour total bill is .................................................................... %d BDT\n",sum);
    int amount,rest,famount;
    if(appp01>0)
    {
        printf("%s %dBDT\n",aaa,appp01);
    }
    if(appp02>0)
    {
        printf("% s%dBDT\n",aab,appp02);
    }
    if(appp03>0)
    {
        printf("%s %dBDT\n",aac,appp03);
    }
    if(appp04>0)
    {
        printf("%s %dBDT\n",aad,appp04);
    }
    if(appp05>0)
    {
        printf("%s %dBDT\n",aae,appp05);
    }
    if(appp06>0)
    {
        printf("%s %dBDT\n",aaf,appp06);
    }
    if(appp07>0)
    {
        printf("%s %dBDT\n",aag,appp07);
    }
    if(appp08>0)
    {
        printf("%s %dBDT\n",aah,appp08);
    }
    if(appp09>0)
    {
        printf("%s %dBDT\n",aai,appp09);
    }
    if(appp010>0)
    {
        printf("%s %dBDT\n",aaj,appp010);
    }


    printf("\t\tYour total bill is ....................................................................... %d BDT\n\n",sum);
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {

        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.Have a Good day\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.Have a Good day\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    int oma1=0,oma2=0,oma3=0,oma4=0,oma5=0,oma6=0,oma7=0,oma8=0,oma9=0,oma10=0;

}
/*        ##############################################################
          #      End Grocery  veggies shopping  bill system code       #   -------------------------- > 3
          ##############################################################
*/

//_______________________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________________ End electric shop
//_______________________________________________________________________________________________________________________________________________________
char a111[]=("\t\t1.NAPA 500 SUPPOSITORY (Paracetamol) 1 (5 pc) ........................................");
char b111[]=("\t\t2.NAPA EXTEND TABLET (Paracetamol) 1 (10 pc) .........................................");
char c111[]=("\t\t3.NAPA EXTRA TABLET (Paracetamol + Caffeine) 1 (10 pc) ...............................");
char d111[]=("\t\t4.NAPA TABLET (Paracetamol) 1 (10 pc) ................................................");
char e111[]=("\t\t5.CHILDREN NAPA DROP (Paracetamol) 1 (15 ml) .........................................");
char f111[]=("\t\t6.NOVIRA HAND SANITIZER (100 ml) .....................................................");
char g111[]=("\t\t7.PEN SPRAY (8ml) ....................................................................");
char h111[]=("\t\t8.PPE HIGHEST QUALITY CERTIFED BY INTERTEK (210 GSM) .................................");
char i111[]=("\t\t9.INFRARED THERMOMETER ...............................................................");
char j111[]=("\t\t10.ALCOHOL HAND RUB 1 LITRE ..........................................................");

int p1=40,p2=15,p3=35,p4=8,p5=15,p6=180,p7=50,p8=1000,p9=25000,p10=1100;
int o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,o7=0,o8=0,o9=0,o10=0;
void pharmacy(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t\t\t pharmacy\n");

    printf("\t\t1.NAPA 500 SUPPOSITORY (Paracetamol) 1 (5 pc) ........................................ BDT 40\n\n");
    printf("\t\t2.NAPA EXTEND TABLET (Paracetamol) 1 (10 pc) ......................................... BDT 15\n\n");
    printf("\t\t3.NAPA EXTRA TABLET (Paracetamol + Caffeine) 1 (10 pc) ............................... BDT 35\n\n");
    printf("\t\t4.NAPA TABLET (Paracetamol) 1 (10 pc) ................................................ BDT 8\n\n");
    printf("\t\t5.CHILDREN NAPA DROP (Paracetamol) 1 (15 ml) ......................................... BDT 15\n\n");
    printf("\t\t6.NOVIRA HAND SANITIZER (100 ml) ..................................................... BDT 180\n\n");
    printf("\t\t7.PEN SPRAY (8ml) .................................................................... BDT 50\n\n");
    printf("\t\t8.PPE HIGHEST QUALITY CERTIFED BY INTERTEK (210 GSM) ................................. BDT 1,000\n\n");
    printf("\t\t9.INFRARED THERMOMETER ............................................................... BDT 2,500\n\n");
    printf("\t\t10.ALCOHOL HAND RUB 1 LITRE .......................................................... BDT 1,100\n\n");
    printf("\t\t11.Back\n\n");
    printf("\t\tAdd Cart (1-11) : ");
    int n,p,i;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o1=p1*p;
        appp01=o1;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 2:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o2=p2*p;
        appp02=o2;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 3:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o3=p3*p;
        appp03=o3;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 4:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o4=p4*p;
        appp04=o4;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 5:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o5=p5*p;
        appp05=o5;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 6:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o6=p6*p;
        appp06=o6;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 7:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o7=p7*p;
        appp07=o7;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 8:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o8=p8*p;
        appp08=o8;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 9:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o9=p9*p;
        appp09=o9;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 10:
    {
        printf("\t\tQty : ");
        scanf("%d",&p);
        o10=p10*p;
        appp010=o10;
        printf("\t\tIf you want to buy more enter 1 or for bill 0 : ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            pharmacy();
        }
        else if(i==0)
        {
            ppaid();
        }
        break;
    }
    case 11:
    {
        Smart_shop_feature();
    }
    default:
    {
        pharmacy();
        break;
    }
    }

}
void ppaid(void)
{
    system("cls");
    Title();
    int  sum = o1+o2+o3+o4+o5+o6+o7+o8+o9+o10;
    printf("\t\t\t\t\t\t\t\t Total bill\n\n");

    if(appp01>0)
    {
        printf("%s %dBDT\n",a111,appp01);
    }
    if(appp02>0)
    {
        printf("% s%dBDT\n",b111,appp02);
    }
    if(appp03>0)
    {
        printf("%s %dBDT\n",c111,appp03);
    }
    if(appp04>0)
    {
        printf("%s %dBDT\n",d111,appp04);
    }
    if(appp05>0)
    {
        printf("%s %dBDT\n",e111,appp05);
    }
    if(appp06>0)
    {
        printf("%s %dBDT\n",f111,appp06);
    }
    if(appp07>0)
    {
        printf("%s %dBDT\n",g111,appp07);
    }
    if(appp08>0)
    {
        printf("%s %dBDT\n",h111,appp08);
    }
    if(appp09>0)
    {
        printf("%s %dBDT\n",i111,appp09);
    }
    if(appp010>0)
    {
        printf("%s %dBDT\n",j111,appp010);
    }

    printf("\t\tYour total bill is .................................................................... %d BDT\n",sum);
    int amount,rest,famount;
    printf("\t\tEnter the amount you want to give: ");
    scanf("%d",&amount);
    if(amount==sum)
    {

        printf("\t\tYour payment is successful\n");
        printf("\t\tThank you mam/sir.Have a Good day\n");
        printf("\t\tEnter any key for go back : ");
        getch();
        Smart_shop_feature();
    }
    else if(amount<sum)
    {
        while(1)
        {
            printf("\t\tYour have to give more %dBDT\n",sum-amount);
            printf("\t\tEnter the amount you want to give again: ");
            scanf("%d",&famount);
            if(famount==(sum-amount))
            {
                printf("\t\tYour payment is successful\n");
                printf("\t\tThank you mam/sir.Have a Good day\n");
                printf("\t\tEnter any key for go back : ");
                getch();
                Smart_shop_feature();
                break;
            }
        }
    }
    sum = 0;
    int a1=0,a2=0,oma3=0,oma4=0,oma5=0,oma6=0,oma7=0,oma8=0,oma9=0,oma10=0;


}
//*****************************************************************************************************----------------------( Happing hand START)


/*        ##############################################################
          #         Start structure for store Add - Helping_Hand       #
          ##############################################################
*/

struct add_Helping_Hand// this structure for Helper details
{
    char fname[20];
    char lname[20];
    char Phone_number[40];
};
/*        ##############################################################
          #    End structure for store Add - Helping_Hand_Details      #
          ##############################################################
*/

void Helping_Hand_5(void)
{
    int choose;
    system("color fd");
    system("cls");
    Title();
    printf("\t\t\t\t\t\t1. View Plumber list\n\n");
    printf("\t\t\t\t\t\t2. View Cleaner list\n\n");
    printf("\t\t\t\t\t\t3. View Watchman list\n\n");
    printf("\t\t\t\t\t\t4. View Maid list\n\n");
    printf("\t\t\t\t\t\t5. Add Helping Hand Details\n\n");
    printf("\t\t\t\t\t\t6. Back\n\n");
    printf("\t\t\t\t\t\tChoose Option (1-5) : ");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
    {
        system("cls");
        View_Plumber();
        break;
    }
    case 2:
    {
        system("cls");
        View_Cleaner();
        break;
    }
    case 3:
    {
        system("cls");
        View_Watchman();
        break;
    }
    case 4:
    {
        system("cls");
        View_Maid();
        break;
    }
    case 5:
    {
        system("cls");
        add_helping_hand();
    }
    case 6:
    {
        system("cls");
        Features_page();
    }
    default:
    {
        Helping_Hand_5();
        break;
    }
    }
    getch();
}

/*        ##############################################################
          #               Start  Add Page Function                     #
          ##############################################################
*/

void add_helping_hand(void)
{
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t1.Add Plumber Details \n\n");
    printf("\t\t\t\t\t\t2.Add Cleaner Details \n\n");
    printf("\t\t\t\t\t\t3.Watchman Details \n\n");
    printf("\t\t\t\t\t\t4.Add Maid Details \n\n");
    printf("\t\t\t\t\t\t5.Back \n\n");
    printf("\t\t\t\t\t\tChoose Option (1-5):  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_Plumber_Details();
        break;
    }
    case 2:
    {
        system("cls");
        add_Cleaner_Details();
        break;
    }
    case 3:
    {
        system("cls");
        add_watchman_Details();
        break;

    }
    case 4:
    {
        system("cls");
        add_Maid_Details();
        break;

    }
    case 5:
    {
        system("cls");
        Helping_Hand_5();
        break;
    }
    default:
    {
        add_helping_hand();
        break;
    }
    }

}
/*        ##############################################################
          #                 End  Add page function                     #
          ##############################################################
*/
/*        ##############################################################
          #               Start  Add Plumber details                   #
          ##############################################################
*/
void add_Plumber_Details(void)
{
    system("cls");
    FILE *f;
    f = fopen("Plumber Details.txt","a");

    struct add_Helping_Hand addplm; //add h = add plumber details
    Title();

    printf("\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",&addplm.fname);
    printf("\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",&addplm.lname);
    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addplm.Phone_number);

    fprintf(f,"%s %s %s\n",&addplm.fname,&addplm.lname,&addplm.Phone_number);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}

/*        ##############################################################
          #                 End  Add Plumber details                   #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add  Cleaner details                  #
          ##############################################################
*/
void add_Cleaner_Details(void)
{
    system("cls");
    FILE *f;
    f = fopen("Cleaner Details.txt","a");

    struct add_Helping_Hand addplm; //add h = add Cleaner details
    Title();
    printf("\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",&addplm.fname);
    printf("\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",&addplm.lname);
    printf("\t\t\t\t\t\tEnter Phone Number : ");
    scanf("%s",&addplm.Phone_number);

    fprintf(f,"%s %s %s\n",&addplm.fname,&addplm.lname,&addplm.Phone_number);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}

/*        ##############################################################
          #                 End  Add Cleaner details                   #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add  Watchman details                 #
          ##############################################################
*/
void add_watchman_Details(void)
{
    system("cls");
    FILE *f;
    f = fopen("Watchman Details.txt","a");

    struct add_Helping_Hand addplm; //add h = add Watchman details
    Title();
    printf("\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",&addplm.fname);

    printf("\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",&addplm.lname);
    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addplm.Phone_number);

    fprintf(f,"%s %s %s\n",&addplm.fname,&addplm.lname,&addplm.Phone_number);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}

/*        ##############################################################
          #                 End  Add Watchman details                  #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add  Maid details                     #
          ##############################################################
*/
void add_Maid_Details(void)
{
    system("cls");
    FILE *f;
    f = fopen("Maid Details.txt","a");

    struct add_Helping_Hand addplm; //add h = add Maid details
    Title();
    printf("\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",&addplm.fname);

    printf("\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",&addplm.lname);
    printf("\t\t\t\t\t\tEnter Phone Number : ");
    scanf("%s",&addplm.Phone_number);

    fprintf(f,"%s %s %s\n",&addplm.fname,&addplm.lname,&addplm.Phone_number);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}
/*        ##############################################################
          #                  End  Add Maid details                     #
          ##############################################################
*/
/*        ##############################################################
          #                 Start  View details  of  Plumber           #
          ##############################################################
*/
void View_Plumber(void)
{
    FILE *f;
    char pfn[20]; //pfn =  plumber first name..
    char pln[20]; //pln =  Plumber  last name..
    char ppn[20]; //pln = mobile number..
    f = fopen("Plumber Details.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            Helping_Hand_5();
        }
        else if(c == 2)
        {
            exit(0);
        }
        else
        {
            View_Plumber();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s\n",&pfn,&pln,&ppn);
            printf("\n\t\t\t\t\t\t         .........Plumber Details.........\n\n");
            printf("\t\t\t\t\t\tPlumber Name : %s %s\n\n",pfn,pln);
            printf("\t\t\t\t\t\tmobile number :%s\n\n",ppn);
        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}
/*        ##############################################################
          #                End  View details  of plumber               #
          ##############################################################
*/

/*        ##############################################################
          #                 Start  View details of cleaner             #
          ##############################################################
*/
void View_Cleaner(void)
{
    FILE *f;
    char cfn[20]; //cln =  cleaner first name..
    char cln[20]; //cln =  cleaner  last name..
    char cpn[20]; //cln = mobile number..
    f = fopen("Cleaner Details.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            Helping_Hand_5();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            View_Cleaner();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s\n",&cfn,&cln,&cpn);
            printf("\n\t\t\t\t\t\t         .........Cleaner Details.........\n\n");
            printf("\t\t\t\t\t\tCleaner Name : %s %s\n\n",cfn,cln);
            printf("\t\t\t\t\t\tmobile number :%s\n\n",cpn);
        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}
/*        ##############################################################
          #                End  View details  of cleaner               #
          ##############################################################
*/

/*        ##############################################################
          #                Start  View details of Watchman             #
          ##############################################################
*/
void View_Watchman(void)
{
    FILE *f;
    char wfn[20]; //wln =  watchman first name..
    char wln[20]; //wln =  watchman  last name..
    char wpn[20]; //wln = mobile number..
    f = fopen("Watchman Details.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            Helping_Hand_5();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            View_Watchman();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s\n",&wfn,&wln,&wpn);
            printf("\n\t\t\t\t\t\t         .........Watchman Details.........\n\n");

            printf("\t\t\t\t\t\tWatchman Name : %s %s\n\n",wfn,wln);
            printf("\t\t\t\t\t\tmobile number :%s\n\n",wpn);

        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}
/*        ##############################################################
          #                End  View details  of  Watchman                #
          ##############################################################
*/

/*        ##############################################################
          #                    Start  View details of Maid           #
          ##############################################################
*/
void View_Maid(void)
{
    FILE *f;
    char mfn[20]; //mln =  maid first name..
    char mln[20]; //mln =  maid  last name..
    char mpn[20]; //mln = mobile number..
    f = fopen("Maid Details.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            Helping_Hand_5();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            View_Maid();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s\n",&mfn,&mln,&mpn);
            printf("\n\t\t\t\t\t\t         .........Maid Details.........\n\n");
            printf("\t\t\t\t\t\tMaid Name : %s %s\n\n",mfn,mln);
            printf("\t\t\t\t\t\tmobile number :%s\n\n",mpn);
        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    Helping_Hand_5();
}
/*        ##############################################################
          #               End  View details  of  Maid                  #
          ##############################################################
*/

//*****************************************************************************************************------------( Happing hand END )



//****************************************************************************************************************( Start house buy sell system)

/*        ##############################################################
          #        Start structure for store Add - House Broker      #
          ##############################################################
*/

struct add_house_broker
{
    char seller_fname[20];
    char seller_lname[20];
    char Address[40];
    char Location[40];
    char Phone_number[40];
};

void house_broker(void)
{
    int choose;
    system("color fd");
    system("cls");
    Title();
    printf("\t\t\t\t\t\t1. View House's list for Buy\n\n");
    printf("\t\t\t\t\t\t2. Add House's Details for Sell\n\n");
    printf("\t\t\t\t\t\t3. Back\n\n");
    printf("\t\t\t\t\t\tChoose Option (1-3) : ");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
    {
        system("cls");
        view_buy_house();
        break;
    }

    case 2:
    {
        system("cls");
        add_h();
        break;
    }
    case 3:
    {
        system("cls");
        Features_page();
        break;
    }
    default:
    {
        house_broker();
        break;
    }

    }
    getch();
}


void add_h(void)
{
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t1.Add Sell House Details \n\n");
    printf("\t\t\t\t\t\t2.Back \n\n");
    printf("\t\t\t\t\t\tChoose Option (1-2):  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_sell_house();
        break;
    }

    case 2:
    {
        system("cls");
        house_broker();
        break;
    }
    default:
    {
        add_h();
        break;
    }
    }

}

void add_sell_house(void)
{
    system("cls");
    FILE *f;
    f = fopen("Sell House Details.txt","a");

    struct add_house_broker addhd; //add h = add home details
    Title();
    printf("\t\t\t\t\t\tEnter Seller First Name : ");
    fflush(stdin);
    gets(addhd.seller_fname);

    printf("\t\t\t\t\t\tEnter Seller Last Name : ");
    fflush(stdin);
    gets(addhd.seller_lname);

    printf("\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(addhd.Address);

    printf("\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(addhd.Location);

    printf("\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&addhd.Phone_number);

    fprintf(f,"%s %s %s %s %s\n",addhd.seller_fname,addhd.seller_lname,addhd.Address,addhd.Location,addhd.Phone_number);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    house_broker();
}

void view_buy_house(void)
{
    FILE *f;
    char ofn[20]; //oln = owner first name..
    char oln[20]; //oln = owner last name..
    char oad[20]; //oln = owner address details..
    char old[20]; //oln = owner Location name..
    char opn[20]; //oln = owner mobile number..
    f = fopen("Sell House Details.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            house_broker();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            view_buy_house();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s\n",&ofn,&oln,&oad,&old,&opn);
            printf("\n\t\t\t\t\t\t         .........Buy House Details.........\n\n");
            printf("\t\t\t\t\t\tBuyer Name : %s %s\n\n",ofn,oln);
            printf("\t\t\t\t\t\tHouse address :%s\n\n",oad);
            printf("\t\t\t\t\t\tHouse Location :%s\n\n",old);
            printf("\t\t\t\t\t\tBuyer mobile number :%s\n\n",opn);
        }
        fclose(f);
        printf("\t\t\t\t\t\tPress any key for go back...");
        getch();
        house_broker();
    }
}
//****************************************************************************************************************( End house buy sell system)


int education_featurea_page();
void Title();
void search_Teacher();
void search_Student();
void add_t();
void add_Teacher_Details();
void add_Student_Details();

//##################################################################################################################### START Education Management

/*        ##############################################################
          #        Start structure for store Add - Education Managment       #
          ##############################################################
*/

struct add_Education_Managment// this structure for Education Managment details
{
    char fname[20];
    char lname[20];
    char Address[40];
    char Location[40];
    char Phone_number[40];
    char class_range[30];
};

/*        #######################################################################
          #     End structure for store Add - Education Managment_Details       #
          #######################################################################
*/

int education_featurea_page()
{
    int choose;
    system("color fd");
    system("cls");
    Title();
    printf("\n\t\t\t\t\t\t         .........Education Management.........\n\n");
    printf("\t\t\t\t\t\t1. View Teacher's list\n\n");
    printf("\t\t\t\t\t\t2. View Students' list\n\n");
    printf("\t\t\t\t\t\t3. Add Teacher and Student Details\n\n");
    printf("\t\t\t\t\t\t4. Back\n\n");
    printf("\t\t\t\t\t\tChoose Option (1-4) : ");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
    {
        system("cls");
        search_Teacher();
        break;
    }
    case 2:
    {
        system("cls");
        search_Student();
        break;
    }
    case 3:
    {
        system("cls");
        add_t();
        break;
    }
    case 4:
    {
        system("cls");
        Features_page();
        break;
    }
    default:
    {
        education_featurea_page();
        break;
    }
    }
    getch();
}


/*        ##############################################################
          #               Start  Add page function                     #
          ##############################################################
*/
void add_t(void)
{
    system("cls");
    Title();
    int n;
    printf("\t\t\t\t\t\t1.Add Teacher Details \n\n");
    printf("\t\t\t\t\t\t2.Add Student Details \n\n");
    printf("\t\t\t\t\t\t3.Back \n\n");
    printf("\t\t\t\t\t\tChoose Option (1-3):  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        add_Teacher_Details();
        break;
    }
    case 2:
    {
        system("cls");
        add_Student_Details();
        break;
    }
    case 3:
    {
        system("cls");
        education_featurea_page();
        break;
    }
    default:
    {
        add_t();
        break;
    }
    }

}
/*        ##############################################################
          #                 End  Add page function                     #
          ##############################################################
*/
/*        ##############################################################
          #               Start  Add Teacher details                     #
          ##############################################################
*/
void add_Teacher_Details(void)
{
    system("cls");
    FILE *f;
    f = fopen("TeacherDetails.txt","a");

    struct add_Education_Managment adde; //add e = add Teacher details
    Title();
    printf("\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",&adde.fname);

    printf("\n\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",&adde.lname);

    printf("\n\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(adde.Address);

    printf("\n\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(adde.Location);

    printf("\n\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&adde.Phone_number);

    printf("\n\t\t\t\t\t\tEnter Student class range (for example [5-10] ): ");
    fflush(stdin);
    gets(adde.class_range);

    fprintf(f,"%s %s %s %s %s %s\n",adde.fname,adde.lname,adde.Address,adde.Location,adde.Phone_number,adde.class_range);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    education_featurea_page();
}

/*        ##############################################################
          #                 End  Add Teacher details                     #
          ##############################################################
*/

/*        ##############################################################
          #               Start  Add  Student details                     #
          ##############################################################
*/
void add_Student_Details(void)
{
    system("cls");
    FILE *f;
    f = fopen("StudentDetails.txt","a");

    struct add_Education_Managment adde; //add e = add Cleaner details
    Title();
    printf("\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",&adde.fname);

    printf("\n\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",&adde.lname);

    printf("\n\t\t\t\t\t\tEnter Address (without space): ");
    fflush(stdin);
    gets(adde.Address);

    printf("\n\t\t\t\t\t\tEnter Location (without space): ");
    fflush(stdin);
    gets(adde.Location);

    printf("\n\t\t\t\t\t\tEnter Phone Number : ");
    fflush(stdin);
    scanf("%s",&adde.Phone_number);

    printf("\n\t\t\t\t\t\tEnter Student class : ");
    fflush(stdin);
    scanf("%s",&adde.class_range);

    fprintf(f,"%s %s %s %s %s %s\n",adde.fname,adde.lname,adde.Address,adde.Location,adde.Phone_number,adde.class_range);
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    education_featurea_page();
}

/*        ##############################################################
          #                 End  Add Student details                     #
          ##############################################################
*/
/*        ##############################################################
          #                 Start  Search details  of  Teacher           #
          ##############################################################
*/
void search_Teacher(void)
{
    FILE *f;
    char tfn[20]; //tln =  Teacher first name..
    char tln[20]; //tln =  Teacher  last name..
    char tad[20]; //tln =  address details..
    char tld[20]; //tln =  Location name..
    char tpn[20]; //tln = mobile number..
    char tcr[20]; //tln = mobile number..
    f = fopen("TeacherDetails.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            education_featurea_page();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            search_Teacher();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s %s\n",&tfn,&tln,&tad,&tld,&tpn,&tcr);
            printf("\n\t\t\t\t\t\t         .........Teacher Details.........\n\n");
            // printf("\t\t\t\t\t\tTO-LET:\n\n");
            printf("\t\t\t\t\t\tTeacher Name : %s %s\n\n",tfn,tln);
            printf("\t\t\t\t\t\taddress :%s\n\n",tad);
            printf("\t\t\t\t\t\tLocation :%s\n\n",tld);
            printf("\t\t\t\t\t\tmobile number :%s\n\n",tpn);
            printf("\t\t\t\t\t\tStudents Class Range :%s\n\n",tcr);

        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    education_featurea_page();
}
/*        ##############################################################
          #                End  search details  of Teacher               #
          ##############################################################
*/

/*        ##############################################################
          #                    Start  View details of Student             #
          ##############################################################
*/
void search_Student(void)
{
    FILE *f;
    char sfn[20]; //sln =  Student first name..
    char sln[20]; //sln =  Student  last name..
    char sad[20]; //sln =  address details..
    char sld[20]; //sln =  Location name..
    char spn[20]; //sln = mobile number..
    char stc[20]; //sln = mobile number..
    f = fopen("StudentDetails.txt","r");
    system("cls");
    Title();
    if(f == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            education_featurea_page();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            search_Student();
        }
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %s %s %s %s\n",&sfn,&sln,&sad,&sld,&spn,&stc);
            printf("\n\t\t\t\t\t\t         .........Cleaner Details.........\n\n");
            // printf("\t\t\t\t\t\tTO-LET:\n\n");
            printf("\t\t\t\t\t\tStudent Name : %s %s\n\n",sfn,sln);
            printf("\t\t\t\t\t\tAddress : %s\n\n",sad);
            printf("\t\t\t\t\t\tLocation : %s\n\n",sld);
            printf("\t\t\t\t\t\tMobile number : %s\n\n",spn);
            printf("\t\t\t\t\t\tClass : %s\n\n",stc);

        }
    }
    fclose(f);
    printf("\t\t\t\t\t\tPress any key for go back...");
    getch();
    education_featurea_page();
}
/*        ##############################################################
          #                End  search details  of Student                #
          ##############################################################
*/
//##################################################################################################################### END Education Management


//##################################################################################################################### Start smart home Management


struct renter_details
{

    char fname[20];
    char lname[20];
    char mobile_number[30];
    char unit_number[20];

};

/*        ##############################################################
          #       Start feature page of smart home management system   #
          ##############################################################
*/
void smart_Apartment_Management(void)
{
    system("cls");
    Title();
    printf("\t\t\t\t\t\t          Smart Home Management System\n\n\n");

    printf("\t\t\t\t\t  If You to Pay house payment click on 2\n\n");
    printf("\t\t\t\t\t\t1.Add Renter Details\n\n");
    printf("\t\t\t\t\t\t2.Pay Rent\n\n");
    printf("\t\t\t\t\t\t3.View Renter Detais\n\n");
    printf("\t\t\t\t\t\t4.Back\n\n");
    printf("\t\t\t\t\t\tEnter Option (1-4) : ");

    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        system("cls");
        Title();
        add_renter_details();
    }
    case 2:
    {
        system("cls");
        Title();
        payment();
    }
    case 3:
    {
        system("cls");
        Title();
        view_renter_details();
    }
    case 4:
    {
        Features_page();
        break;
    }
    case 5:
    {
        smart_Apartment_Management();
        break;
    }
    }
    getch();
}
/*        ##############################################################
          #       END feature page of smart home management system   #
          ##############################################################
*/

/*        ##############################################################
          #  Start rent details page of smart home management system   #
          ##############################################################
*/
void add_renter_details(void)
{
    struct renter_details r;
    system("cls");
    Title();
    printf("\t\t\t\t\t\t          Add Renter Details\n\n\n");
    printf("\n\t\t\t\t\t\t1.Renter First Name: ");
    scanf("%s",&r.fname);
    printf("\n\t\t\t\t\t\t1.Renter Last Name: ");
    scanf("%s",&r.lname);
    printf("\n\t\t\t\t\t\t3.Renter Mobile Number: ");
    scanf("%s",&r.mobile_number);
    printf("\n\t\t\t\t\t\t4.Unit Number (without space) : ");
    scanf("%s",&r.unit_number);
    for(int i=0; i<strlen(r.unit_number); i++)
    {
        r.unit_number[0]=toupper(r.unit_number[0]);
    }
    char u[20];
    strcpy(u,r.unit_number);

    FILE *rent;

    rent = fopen(strcat(u,".txt"),"a");
    fprintf(rent,"\t\t\t\t\t\tRenter name :%s %s\n\n\t\t\t\t\t\tRenter Phone Number: %s\n\n\t\t\t\t\t\tUnit Number - %s\n\n\t\t\t\t\t\tPayment\n\t\t\t\t\t\t---------\n",r.fname,r.lname,r.mobile_number,r.unit_number);
    //                                                                                                                     \t\t\t\t\t\t---------\n
    fclose(rent);
    printf("\n\n\t\t\tIf you want to add another renter details enter 1 for back enter 0: ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    {
        system("cls");
        add_renter_details();
    }
    case 0:
    {
        smart_Apartment_Management();
        // feature page not found
    }
    default:
    {
        add_renter_details();
        break;
    }
    }
    getch();
}
/*        ##############################################################
          #  END rent details page of smart home management system   #
          ##############################################################
*/

/*        ###################################################################
          #  start rent details view page of smart home management system   #
          ###################################################################
*/
void view_renter_details(void)
{
    system("cls");
    FILE *rent;
    char rfn[20]; //rfn =  renter first name...
    char run[20]; //run = renter unit number...
    Title();
    printf("\n\t\t\t\t\t\tEnter your name: ");
    fflush(stdin);
    gets(rfn);
    printf("\n\t\t\t\t\t\tEnter Unit Number: ");
    scanf("%s",&run);
    for(int i=0; i<strlen(run); i++)
    {
        run[0]=toupper(run[0]);
    }
    char u[20];
    strcpy(u,run);
    rent = fopen(strcat(u,".txt"),"r");
    system("cls");
    Title();
    if(rent == NULL)
    {
        printf("\t\t\t\t\t\tNo Details Available\n\n\n\n");
        int c;
        printf("\t\t\t\t\t\t1.Back\n\n");
        printf("\t\t\t\t\t\t2.Close System\n\n");
        printf("\t\t\t\t\t\tChoose Option: (1-2) ");
        scanf("%d",&c);
        if(c == 1)
        {
            system("cls");
            smart_Apartment_Management();
        }
        else if(c==2)
        {
            exit(0);
        }
        else
        {
            view_renter_details();
        }
    }
    else
    {
        char file;
        file = fgetc(rent);
        while(file != EOF)
        {
            printf("%c",file);
            file = getc(rent);
        }
    }
    fclose(rent);
    printf("\n\t\t\t\t\t\tPress any key for go back...");
    getch();
    smart_Apartment_Management();

}
/*        ###################################################################
          #    END rent details view page of smart home management system   #
          ###################################################################
*/

/*        ########################################################################
          #    Add renter payment details page of smart home management system   #
          ########################################################################
*/
void payment(void)
{
    char month[20];
    char unit[20];
    char name[20];
    system("cls");
    Title();
    printf("\n\t\t\t\t\t\t         Payment\n\n");
    printf("\t\t\t\t\t\tEnter Your Name: ");
    fflush(stdin);
    gets(name);
    printf("\n\t\t\t\t\t\t4.Unit Number (without space): ");
    scanf("%s",&unit);
    printf("\n\t\t\t\t\t\tEnter month short name : ");
    scanf("%s",&month);
    for(int i=0; i<strlen(unit); i++)
    {
        unit[0]=toupper(unit[0]);
    }
    char j[20];
    strcpy(j,unit);
    FILE *rent;
    rent = fopen(strcat(j,".txt"),"a");
    fprintf(rent,"\n\t\t\t\t\t\t%s - paid\n",month);
    fclose(rent);
    printf("\n\t\t\t\t\t\tPress any key for go back...");
    getch();
    smart_Apartment_Management();
}
/*        ########################################################################
          # end Add renter payment details page of smart home management system  #
          ########################################################################
*/
//##################################################################################################################### end smart home Management


