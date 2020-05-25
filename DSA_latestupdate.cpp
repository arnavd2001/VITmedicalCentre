#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#define MAXPATIENTS 100
using namespace std;
void Mainmenu();
void DisplayScans();
void display();
void Bill();
int Count();
bool CheckNumber();
bool CheckNumber(string s)
{
    if (s.length()==10)
        return false;
    else
        return true;
}
struct patient
{
    string name;
    string age;
    string phone_no;
    string sex;
    string scan;
    string date;
    struct patient *next;
}*front1=0,*rear=0;

int Count()
{
    int Count = 0;
    patient *current = front1;
    while (current != 0)
    {
        Count++;
        current = current->next;
    }
    return Count;
}
void Add_patient(string name_val,string age_val,string phone_no,string sex_val,string scan_val,string date_val)
{
    patient *new_patient=new patient();
    if(new_patient==0)
    {
        cout<<"Very Crowded"<<endl;
    }
    else
    {
    new_patient->name=name_val;
    new_patient->age=age_val;
    new_patient->phone_no=phone_no;
    new_patient->sex=sex_val;
    new_patient->scan=scan_val;
    new_patient->date=date_val;
    new_patient->next=0;
    }
    if(front1==0)
    {
        front1=rear=new_patient;
    }
    else
    {
        rear->next=new_patient;
        rear=new_patient;
    }
    cout<<endl;
    cout<<"\n";
    cout<<"The following record will be created: "<<endl;
    cout<<endl;
    cout<<"name: "<<new_patient->name<<endl;
    cout<<"age: "<<new_patient->age<<endl;
    cout<<"contact_no: "<<new_patient->phone_no<<endl;
    cout<<"sex: "<<new_patient->sex<<endl;
    cout<<"scan type:"<<new_patient->scan<<endl;
    cout<<"Apt.date: "<<new_patient->date<<endl;
    cout<<endl;
    cout<<"Patient's record has been added"<<endl;
    cout<<endl;
    cout<<"PLEASE PROCEED TO THE BILLING SECTION FOR PAYMENT!!"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"Press 0 to go back to main menu"<<endl;
          int choice;
          scanf("%d",&choice);
          system("cls");
          switch(choice)
          {
              case 0:
                  Mainmenu();
                  break;
          }
}
void Remove_patient()
{
    patient *p;
    if(Count()==0)
    {
        cout<<"No patients"<<endl;
    }
    else
    {
        p=front1;
    cout<<"The following patient record shall be deleted: "<<endl;
    cout<<endl;
    cout<<"name: "<<p->name<<endl;
    cout<<"age: "<<p->age<<endl;
    cout<<"contact_no: "<<p->phone_no<<endl;
    cout<<"sex: "<<p->sex<<endl;
    cout<<"scan type:"<<p->scan<<endl;
    cout<<"Apt.date: "<<p->date<<endl;
    cout<<endl;
        front1=front1->next;
        delete(p);
    cout<<"the patient has been scanned successfully"<<endl;
    cout<<endl;
    cout<<"Patient's record has been deleted successfully"<<endl;
    cout<<endl;
    cout<<"Please send in the next patient"<<endl;
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"Press 0 to go back to main menu"<<endl;
          int choice;
          scanf("%d",&choice);
          system("cls");
          switch(choice)
          {
              case 0:
                  Mainmenu();
          }

}
void display()
{
    patient *t=front1;
    int i=1;
    while(t!=0)
    {
        cout<<endl;
        cout<<i<<"."<<"name: "<<t->name<<endl;
        cout<<"age: "<<t->age<<endl;
        cout<<"phone_no: "<<t->phone_no<<endl;
        cout<<"sex: "<<t->sex<<endl;
        cout<<"Scan type: "<<t->scan<<endl;
        cout<<"Apt.date: "<<t->date<<endl;
        i++;
        t=t->next;
    }
        cout<<"\n";
    cout<<"Press 0 to go back to main menu"<<endl;
          int choice;
          scanf("%d",&choice);
          system("cls");
          switch(choice)
          {
              case 0:
                  Mainmenu();

          }
}
int ReadNumber()
{
   // this function reads an integer number from the keyboard.
   // it is used because input with cin >> doesn't work properly!
   char buffer[20];
   cin.getline(buffer, sizeof(buffer));
   return atoi(buffer);
}
void DisplayScans()
{
            cout << setw(5) << "Sl. No:" << setw(15) << "Scan Type" << setw(14) << "Cost" << endl << endl;
          cout << setw(5) << 1 << setw(15) << "MRI-Scan" << setw(15) << "Rs.9000" << endl;
          cout << setw(5) << 2 << setw(15) << "X-Rays" << setw(15) << "Rs.500" << endl;
          cout << setw(5) << 3 << setw(15) << "CT-scan" << setw(15) << "Rs.2000" << endl;
          cout << setw(5) << 4 << setw(15) << "Endoscopy" << setw(15) << "Rs.3000" << endl;
          cout << setw(5) << 5 << setw(15) << "Ultrasound" << setw(15) << "Rs.3500" << endl;
          cout << setw(5) << 6 << setw(15) << "CAT" << setw(15) << "Rs.2300" << endl;
          printf("\n");
          printf("\n");
          cout<<"Press 0 to go back to main menu"<<endl;
          int choice;
          scanf("%d",&choice);
          system("cls");
          switch(choice)
          {
              case 0:
                  Mainmenu();
          }

}
void Billing()
{
    cout<<"...........................................BILLING SECTION..............................................\n "<<endl;
   cout<<"Please enter the type of scan the patient opted for in the form(CT-scan,MRI-scan,X-Rays,Ultrasound,Endoscopy,CAT)"<<endl;
   fflush(stdin);
   string scan_val;
   getline(cin,scan_val);
   string ct="CT-scan";
   string MRI="MRI-scan";
   string XRays="X-Rays";
   string Endoscopy="Endoscopy";
   string CAT="CAT";
   string Ultrasound="Ultrasound";
   if((scan_val.compare(ct))==0)
   {
       cout<<"Total amount:Rs.2000"<<endl;
   }
   if((scan_val.compare(MRI))==0)
   {
       cout<<"Total amount:Rs.10000"<<endl;
   }
      if((scan_val.compare(XRays))==0)
   {
       cout<<"Total amount:Rs.500"<<endl;
   }
      if((scan_val.compare(Ultrasound))==0)
   {
       cout<<"Total amount:Rs.3000"<<endl;
   }
    if((scan_val.compare(Endoscopy))==0)
   {
       cout<<"Total amount:Rs.3000"<<endl;
   }
         if((scan_val.compare(CAT))==0)
   {
       cout<<"Total amount:Rs.3000"<<endl;
   }

         cout<<"\n";
    cout<<"Press 0 to go back to main menu"<<endl;
          int choice;
          scanf("%d",&choice);
          system("cls");
          switch(choice)
          {
              case 0:
                  Mainmenu();

          }

}
void Mainmenu()
{
  cout<<"                                      WELCOME TO THE VIT MEDICAL CENTRE.                  "<<endl;
  cout<<"                                        +============================+          \n"<<endl;
  cout<<"                                     THIS IS THE DEPARTMENT OF RADIOLOGY           \n   "<<endl;
  cout<<"                                        +============================+          \n\n" <<endl;
  cout<<"                                   The various options that are offered are:"<<endl;
  cout<<endl;
  cout<<"                                   Press 1 to see the various scans and their corresponding costs"<<endl;
  cout<<endl;
  cout<<"                                   Press 2 for registering a patient for a Scan"<<endl;
  cout<<endl;
  cout<<"                                   Press 3 for removing Patient entry"<<endl;
  cout<<endl;
  cout<<"                                   Press 4 to see the list of patients"<<endl;
  cout<<endl;
  cout<<"                                   Press 5 to obtain bill for Patient"<<endl;
  cout<<endl;
  cout<<"                                   Press 6 to exit:"<<endl;
  int choice;
  scanf("%d",&choice);
  system("cls");
  switch(choice)
  {
      case 1:
          {
          DisplayScans();
          break;
          }
    case 2:
        {
        patient *p;
        cout<<".................................SCAN REGISTER...............................\n "<<endl;
        cout<<endl;
        cout<<"Enter name of patient: "<<endl;
        fflush(stdin);
        string name_val;
        getline(cin,name_val);
        cout<<"Enter age of patient: "<<endl;
        string age_val;
        getline(cin,age_val);
        cout <<"Enter contact no.: "<<endl;
        string phone_no;
        getline(cin,phone_no);
        if(CheckNumber(phone_no))
            cout<<"Please Enter a valid contact no. :"<<endl;
            getline(cin,phone_no);
        cout<<"Enter Sex(Male/Female): "<<endl;
        string sex_val;
        getline(cin,sex_val);
        cout<<"Enter the type of scan: "<<endl;
        string scan_val;
        getline(cin,scan_val);
        cout<<"Enter the date preferred by the patient: "<<endl;
        cout<<endl;
        cout<<"Press 1 for setting appointment as today(20/05/2020)"<<endl;
        cout<<"Press 2 for setting appointment as 21/05/2020"<<endl;
        cout<<"Press 3 for setting appointment as 22/05/2020"<<endl;
        string date_val;
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
            date_val="22/05/2020";
            break;
            }
        case 2:
            {
            date_val="21/05/2020";
            break;
            }
        case 3:
            {
            date_val="22/05/2020";
            break;
            }
        }
        Add_patient(name_val,age_val,phone_no,sex_val,scan_val,date_val);
        break;
        }
    case 3:
        {
        Remove_patient();
        }
    case 4:
        {
        display();
        break;
        }
    case 5:
        {
            Billing();
            break;
        }
    case 6:
        {
            cout<<"Thank you!!!"<<endl;
            exit(1);
        }

  }
}
//***********************************************************************************Appointment
// define maximum number of patients in a queue
// define structure for patient data
struct patient1
{
   char FirstName[50];
   char LastName[50];
   char ID[20];
};


// define class for queue
class queue1
{
   public:
   queue1 (void);
   int AddPatientAtEnd (patient1 p);
   int AddPatientAtBeginning (patient1 p);
   patient1 GetNextPatient (void);
   int RemoveDeadPatient (patient1 * p);
   void OutputList (void);
   char DepartmentName[50];

   private:
   int NumberOfPatients;
   patient1 List[MAXPATIENTS];
};


// declare member functions for queue

queue1::queue1 ()
{
   // constructor
   NumberOfPatients = 0;
}


int queue1::AddPatientAtEnd (patient1 p)
{
   // adds a normal patient to the end of the queue.
   // returns 1 if successful, 0 if queue is full.
  if (NumberOfPatients >= MAXPATIENTS)
   {
      // queue is full
      return 0;
   }
      // put in new patient
      else
      List[NumberOfPatients] = p;  NumberOfPatients++;
      return 1;
}


int queue1::AddPatientAtBeginning (patient1 p)
{
   // adds a critically ill patient to the beginning of the queue.
   // returns 1 if successful, 0 if queue is full.
   int i;
   if (NumberOfPatients >= MAXPATIENTS)
   {
      // queue is full
      return 0;
   }

   // move all patients one position back in queue
   for (i = NumberOfPatients-1; i >= 0; i--)
   {
      List[i+1] = List[i];
   }
   // put in new patient
   List[0] = p;  NumberOfPatients++;
   return 1;
}


patient1 queue1::GetNextPatient (void)
{
   // gets the patient that is first in the queue.
   // returns patient with no ID if queue is empty

   int i;  patient1 p;
   if (NumberOfPatients == 0) {
   // queue is empty
   strcpy(p.ID,"");
   return p;}
   // get first patient
   p = List[0];
   // move all remaining patients one position forward in queue
   NumberOfPatients--;
   for (i=0; i<NumberOfPatients; i++)
   {
      List[i] = List[i+1];
   }
   // return patient
   return p;
}


int queue1::RemoveDeadPatient (patient1 * p)
{
   // removes a patient from queue.
   // returns 1 if successful, 0 if patient not found
   int i, j, found = 0;
   // search for patient
   for (i=0; i<NumberOfPatients; i++)
	{
      		if (stricmp(List[i].ID, p->ID) == 0)
		{
	 	// patient found in queue
	 	*p = List[i];  found = 1;
	 	// move all following patients one position forward in queue
	 	NumberOfPatients--;
	 		for (j=i; j<NumberOfPatients; j++)
				{
	    				List[j] = List[j+1];
				}
		}
	}
   return found;
}


void queue1::OutputList (void)
{
   // lists entire queue on screen
   int i;
   if (NumberOfPatients == 0)
	{
      		cout << "There are no patients"<<endl;
	}
   else
	{

		for (i=0; i<NumberOfPatients; i++)
		{
			cout<<i+1<<"."<<List[i].FirstName<<endl;
	 		cout << " " <<List[i].LastName<<endl;
	 		cout << " " <<List[i].ID<<endl;
		}
	}
}


// declare functions used by main:

patient1 InputPatient (void)
{
   // this function asks user for patient data.
   patient1 p;
   cout << "Please enter data for new patient First name: "<<endl;
   cin.getline(p.FirstName, sizeof(p.FirstName));
   cout << "Last name: "<<endl;
   cin.getline(p.LastName, sizeof(p.LastName));
   cout << "Social security number: "<<endl;
   cin.getline(p.ID, sizeof(p.ID));
   // check if data valid
   if (p.FirstName[0]==0 || p.LastName[0]==0 || p.ID[0]==0)
	{
      		// rejected
      		strcpy(p.ID,"");
      		cout << "Error: Data not valid. Operation cancelled."<<endl;
      		getch();
	}
   return p;
}


void OutputPatient (patient1 * p)
{
   // this function outputs patient data to the screen
   if (p == NULL || p->ID[0]==0)
	{
      		cout << "No patient"<<endl;
      		return;
	}
   else
   cout << "Patient data:"<<endl;
   cout << "First name: " << p->FirstName<<endl;
   cout << "Last name: " << p->LastName<<endl;
   cout << "Social security number: " << p->ID<<endl;
}


int ReadNumber1()
{
   // this function reads an integer number from the keyboard.
   // it is used because input with cin >> doesn't work properly!
   char buffer[20];
   cin.getline(buffer, sizeof(buffer));
   return atoi(buffer);
}


void DepartmentMenu (queue1 * q)
{
   // this function defines the user interface with menu for one department
   int choice = 0, success;  patient1 p;
   while (choice != 6)
	{
      	   // clear screen
      	   system("cls");
      	   // print menu
      	   cout << "Welcome to department: " << q->DepartmentName<<endl;
      	   cout << "Please enter your choice:"<<endl;
      	   cout << "1:  Add normal patient"<<endl;
      	   cout << "2:  Add critically ill patient"<<endl;
      	   cout << "3:  Take out patient for operation"<<endl;
      	   cout << "4:  Remove dead patient from queue"<<endl;
      	   cout << "5:  List queue"<<endl;
      	   cout << "6:  Change department or exit"<<endl;
      	   // get user choice
      	   choice = ReadNumber1();
      		// do indicated action
      	switch (choice)
	  {
      		case 1:   // Add normal patient
p = InputPatient();
	 	if (p.ID[0])
		   {
	    		success = q->AddPatientAtEnd(p);
	    		system("cls");
	    		  if (success)
			    {
	       			cout << "Patient added:"<<endl;

			    }
	        else
		   {
	       		// error
	       		cout << "Error: The queue is full. Cannot add patient:"<<endl;
		   }
	    		OutputPatient(&p);
	    		cout << "Press any key"<<endl;
	    		getch();
	  }
	 break;

      case 2:   // Add critically ill patient
	 p = InputPatient();
	 if (p.ID[0])
	     {
	    	success = q->AddPatientAtBeginning(p);
	    	system("cls");
	    	  if (success)
			{
	       		  cout << "Patient added:"<<endl;
	     		}
	 	  else
	     		{
	       		  // error
	       		  cout << "Error: The queue is full. Cannot add patient:"<<endl;
			}
			  OutputPatient(&p);
	    		  cout << "Press any key"<<endl;
	    		  getch();
	     }
	 break;

      case 3:   // Take out patient for operation
	 p = q->GetNextPatient();
	 system("cls");
	 if (p.ID[0])
	    {
	       cout << "Patient to operate:"<<endl;
	       OutputPatient(&p);}
	 else
	    {
	       cout << "There is no patient to operate."<<endl;
	    }
	       cout << "Press any key"<<endl;
	       getch();
	       break;

      case 4:   // Remove dead patient from queue
	 p = InputPatient();
	 if (p.ID[0])
	   {
	        success = q->RemoveDeadPatient(&p);
	        system("cls");
	          if (success)
		      {
	       		cout << "Patient removed:"<<endl;
		      }
	    	  else
		      {
	       		// error
	       		cout << "Error: Cannot find patient:"<<endl;
		      }
	   	OutputPatient(&p);
	    	cout << "Press any key"<<endl;
	    	getch();
	   }
	 break;

      case 5:   // List queue
	 system("cls");
	 q->OutputList();
	 cout << "Press any key"<<endl;
	 getch();  break;
	 }
      }
}


// main function defining queues and main menu
int  Appointment ()
{
   int i, MenuChoice = 0;
   // define three queues
   queue1 departments[7];
   // set department names
   strcpy (departments[0].DepartmentName, "General Checkup");
   strcpy (departments[1].DepartmentName, "Cardiac and Pulmonary");
   strcpy (departments[2].DepartmentName, "Orthopedic");
   strcpy (departments[3].DepartmentName, "Opthalmic");
   strcpy (departments[4].DepartmentName, "ENT");
   strcpy (departments[5].DepartmentName, "Neurology");
   strcpy (departments[6].DepartmentName, "Cosmetic");

   while (MenuChoice != 8)
	{
      	   // clear screen
      	   system("cls");
      	   // print menu
      	   cout << "Welcome to the VIT Medical Centre"<<endl;
      	   cout << "Please enter your choice:"<<endl;
          for (i = 0; i < 7; i++)
		{
	 	   // write menu item for department i
	 	   cout << "" << (i+1) << ":  " << departments[i].DepartmentName<<endl;
		}
      	  cout << "8:  Exit"<<endl;
      	  // get user choice
      	  MenuChoice = ReadNumber1();
      	  // is it a department name?
      		if (MenuChoice >= 1 && MenuChoice <= 7)
		    {
	 		// call submenu for department
	 		// (using pointer arithmetics here:)
	 		DepartmentMenu (departments + (MenuChoice-1));
		    }
	}
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////


struct BloodBank
{
    char Name[20];
    char Blood[4];
    string Email[20];
    string phoneNumber[12];
    struct BloodBank *next;
}*Profile=NULL;

void Add()
{
    system("cls");
    string number;
    struct BloodBank *CurrNode, *NewNode;
    NewNode= (struct BloodBank*)malloc(sizeof(struct BloodBank));
    printf("Enter Name:\n");
    scanf("%s",&NewNode->Name);
    printf("Enter Blood Group:\n");
    scanf("%s",&NewNode->Blood);
    printf("Enter Email:\n");
    scanf("%s",&NewNode->Email);
    printf("Enter Number:\n");
    scanf("%s",&NewNode->phoneNumber);
	//if(strlen(phoneNumber)!=10)
    //printf("This is not a valid Phone Number.");
    NewNode->next=NULL;
    if(Profile==NULL)
    {
        Profile=NewNode;
    }
    else
    {
        CurrNode=Profile;
        while(CurrNode->next!=NULL)
        {
            CurrNode=CurrNode->next;
        }
        CurrNode->next=NewNode;
    }
}

void Search()
{
    struct BloodBank *display=Profile;
    int Count=0;
    char NAME[20],Blood[4];

Start:
    system("cls");
    printf("\n\t1.Search by Name\n\t2.Search by Blood Group\n\t3. Main Menu\n");
    switch(getch())
    {
    case '1':
    {
        printf("\nEnter Name to search profile:\n");
        scanf("%s",&NAME);
        while(display!=NULL)
        {
            if(strcmp(display->Name,NAME)==0)
            {
                Count++;
                printf("%d.\n\tName: %s",Count,display->Name);
                printf("\n\tBlood Group: %s",display->Blood);
                printf("\n\tEmail: %s",display->Email);
                printf("\n\tNumber: %s\n\n",display->phoneNumber);
            }
            display=display->next;
        }
        break;
    }
    case '2':
    {
        printf("\nEnter Blood Group to search profile:\n");
        scanf("%s",&Blood);
        while(display!=NULL)
        {
            if(strcmp(display->Blood,Blood)==0)
            {
                Count++;
                printf("%d.\n\tName: %s",Count,display->Name);
                printf("\n\tBlood Group: %s",display->Blood);
                printf("\n\tEmail: %s",display->Email);
                printf("\n\tNumber: %s\n\n",display->phoneNumber);
            }
            display=display->next;
        }
        break;
    }
    case '3':
    {
        goto End;
        break;
    }
    default:
    {
        printf("Wrong Input !\n");
        goto Start;
        break;
    }
    }
End:
    printf("\n\nPress any key for Main Menu.\n");
    getch();
}

void Delete(struct BloodBank *CurrNode)
{
    system("cls");
    char Name[20];
    struct BloodBank *Prev=NULL;
    printf("\nTo delete a profile Please enter Name:\n");
    scanf("%s",&Name);
    while(CurrNode!=NULL)
    {
        if(strcmp(CurrNode->Name,Name)==0)
        {
            break;
        }
        Prev=CurrNode;
        CurrNode=CurrNode->next;
    }
    if(CurrNode==NULL)
    {
        printf("\n\nNot Found!\n");
    }
    else if(Prev==NULL)
    {
        Profile=CurrNode->next;
        free(CurrNode);
        printf("\n%s is deleted.\n",Name);
    }
    else
    {
        Prev->next=CurrNode->next;
        free(CurrNode);
        printf("\n%s is deleted.\n",Name);
    }
    printf("\n\nPress any key for Main Menu.\n");
    getch();
}

void ViewAll(struct BloodBank *display)
{
    system("cls");
    int Count=0;
    while(display!=NULL)
    {
        Count++;
        printf("%d.\n\tName: %s",Count,display->Name);
        printf("\n\tBlood Group: %s",display->Blood);
        printf("\n\tEmail: %s",display->Email);
        printf("\n\tNumber: %s\n\n",display->phoneNumber);
        display=display->next;
    }
    if(Profile==NULL)
    {
        printf("BloodBank is Empty!");
    }
    printf("\n\nPress any key for Main Menu.\n");
    getch();
}

int blood()
{
    int load1,load2,age;
    char Pass[20],Hint[20];
    printf("-----------------Blood Bank Application-----------------\n");
    printf("Press any key to start\n");
    getch();
Password:
    system("cls");
    printf("\n-------Blood Bank Application-------");
    printf("\n1. Create New Account\t2. Forgot Password?\t3. Login\t4. Exit\n");
    printf("Enter Your Choice : \n");
    switch(getch())
    {
    case '1':
    {
        printf("\nEnter New Password:\n");
        gets(Pass);
        printf("\nEnter Hints for Security:\n");
        gets(Hint);
        goto Password;
        break;
    }
    case '2':
    {
        char Reset[20];
        printf("\nEnter Hints for Reset Password:\n");
        gets(Reset);
        if(strcmp(Hint,Reset)==0)
        {
            printf("\nEnter New Password:\n");
            gets(Pass);
            printf("\nPassword has been Changed Successfully.\n");
        }
        else
        {
            printf("\nYou Need to Remember Hints For Reseting Password!\n");
            getch();
        }
        goto Password;
        break;
    }
    case '3':
    {
        char Login[20];
        printf("\nEnter Password to Login:\n");
        gets(Login);
        if(strcmp(Pass,Login)==0)
        {
            goto Menu;
        }
        else
        {
            goto Password;
        }
        break;

    }
    case '4':
    {
        goto End;
        break;
    }
    default:
    {
        goto Password;
        break;
    }

    }
Menu:

    system("cls");
    printf("\n--------BloodBank Application--------\n");
    printf("\n1. Create\n2. Search\n3. Delete\n4. Display All Profiles\n5. Exit \n6. LogOut\n");
    printf("Enter Your Choice : \n");
    switch(getch())
    {
    case '1':
    {
        printf("Please enter your age : ");
        scanf("%d",&age);
        if(age >= 18 && age<60)
        {
            Add();
            goto Menu;
            break;
        }
        else
        {
            printf("You are not allowed to donate Blood!");
            printf("\n\nPress any key to continue\n");
            getch();
            goto Menu;
        }

    }
    case '2':
    {
        Search();
        goto Menu;
        break;
    }
    case '3':
    {
        Delete(Profile);
        goto Menu;
        break;
    }
    case '4':
    {
        ViewAll(Profile);
        goto Menu;
        break;
    }
    case '5':
    {
        goto End;
        break;
    }
    case '6':
    {
        goto Password;
        break;
    }
    default:
    {
        goto Menu;
        break;
    }
    }
End:
    system("cls");
    printf("\nThank you for using BloodBank.");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("@ Copyright May,2020 || All Rights Reserved by Florence Hospital\n");
    return 0;
}
int main()
{
    cout<<"\n\n"<<endl;
    cout<<"                                   WELCOME TO THE VIT MEDICAL CENTRE.                  "<<endl;
    cout<<"                               +======================================+          \n"<<endl;
    cout<<"                    Enter Your Choice: "<<endl;
    cout<<"                    Press 1 to book an Appointment with the Doctor"<<endl;
    cout<<"                    Press 2 to book a MRI Scan with the Hospital"<<endl;
    cout<<"                    Press 3 to Procure Services from the Blood Bank\n"<<endl;
    cout<<"                               +======================================+          \n" <<endl;
    int choice;
    choice=ReadNumber();
    switch(choice)
    {
    case 1:
        system("cls");
        Appointment();
        break;
    case 2:
        system("cls");
        Mainmenu();
        break;
    case 3:
        system("cls");
        blood();
        break;
    }
}
