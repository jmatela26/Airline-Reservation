
#include <iostream>

using namespace std;
string Seat1(string forl);
string Seat2(string forl);
int Login(char choice);

int main()
{

     int total=0 , firstB=0, secondB=0, fin1=1, fin2=1, codeA=0,codeB=0;//case 6
     char buyans;
     
     int checking;//case 4
     
     string seat1,seat2;//for case 5
     char seatans;
     int seatA = 1, seatB = 1;
     
     char choiceans, remove, change;//for case 3
     
     int numA=1,numB=1,FirstF=0,SecondF=0;// for case 2         
     char bookans;
     
     char choice, ans;//for whole
     
     string U,P; // for case 1
     char l='f', k;

while(true)
{

    if(l != 'N')
    {
      k = Login(k);
      if (k == 0)
      {
        system("cls");
        cout <<"Thank you\n";
        system("PAUSE");
        return 0;
      }
      else if (k == 7)
      {
          
         system("cls");
                cout<<"First Name: ";
                cin >> U;
                cout<<"Last Name: "   ;  
                cin >> P;
                l = 'N';
      }
    }
    
   else
   { 
    
   do
   {

   system("cls");
   cout <<    "******************MENU******************" <<endl
        <<    "[1] Logout " <<endl
        <<    "[2] Add Flights" <<endl
        <<    "[3] Change/Remove Flight Destinations" <<endl
        <<    "[4] View Flights"<<endl
        <<    "[5] Reserve Seats"<<endl
        <<    "[6] Buy Tickets"<<endl
        <<    "[7] Exit"<<endl
        <<    "****************************************" <<endl;
   cin >> choice;
   
   }while((choice != '1') && (choice != '2') && (choice != '3') && (choice != '4')&& (choice != '5')&& (choice != '6')&& (choice != '7'));
   
   switch(choice)
     {
          case '1': 
               do
               {
               system("cls");
                             
               cout << "Are you sure you want to change your name? [y/n] ";
               cin >> l;
               l = toupper(l);
               
               }while(l != 'N' && l != 'Y');
               
               
                    
               break;
               
          case '2':
               system("cls");
                  if(firstB == 1 && secondB == 1)
                  {
                            cout<<"You have already bought a ticket\n";
                            system("PAUSE");
                            break;
                  }                   
                    
              else if(numA == 0 && numB == 0)  
                 {
                    cout << "You already booked two flights. "
                         << "\nPlease go to [3] \"Change/Remove Flight Destinations\" in the main menu.\n"
                         << "if you want to Change/Remove Flight\n" ;      
                    system("PAUSE");                    
                 }
               
               if(numA == 1)
                 {        
                      do
                      {    
                          system("cls");
                          cout <<"[1] Japan - Russia\n"
                               <<"[2] Japan - Canada\n"
                               <<"First flight: ";
                          cin >> FirstF;
                          numA = 0;
                      }while(FirstF != 1 && FirstF != 2);
                 }  
                          
               if(numB == 1)
                 {
                         system("cls");
                         cout <<"Would you like to book a second flight?[y/n] ";
                         cin >> bookans;
                       
                         bookans = toupper(bookans);
               
                         if(bookans == 'Y')
                          {
                           do
                           {         
                            system("cls");
                            cout << "[1] Japan - Russia\n"
                                 << "[2] Japan - Canada\n"
                                 << "Second flight: ";
                            cin  >> SecondF;
                            numB = 0;
                            
                           }while(SecondF != 1 && SecondF != 2) ; 
                           break;
                          }
                 }                 
                                    

                         
               break;
               
          case '3':
               system("cls");
                  if(firstB == 1 && secondB == 1)
                  {
                            cout<<"You have already bought a ticket\n";
                            system("PAUSE");
                            break;
                  }
                  if(numA == 1 && numB == 1) 
                  {
                      cout << "Please book some flights first\n";
                      system("PAUSE");
                      break;
                   }
               do
               {
               cout <<"Would you like to:\n"
                    <<"[1] Change Flight\n"
                    <<"[2] Remove Flight\n"
                    <<"[3] Exit\n"
                    <<": ";
               cin  >> choiceans ;    
               }while(choiceans != '1' && choiceans != '2' && choiceans != '3');
                              
               switch(choiceans)
                   {
                    case '1':
                         

                         
                       do
                       {
                         system("cls");
                         cout <<"What flight do you want to Change? \n";
                         
                         if(firstB == 1)
                                   cout <<"[1] You have already bought a ticket\n";
                         else if(FirstF == 1)
                                   cout <<"[1] Japan - Russia\n";
                         else if(FirstF == 2)               
                                   cout <<"[1] Japan - Canada\n";
                         else if(FirstF == 0)
                                   cout <<"[1] Please book for first flight\n";

                         if(secondB == 1)    
                                    cout <<"[2] You have already bought a ticket\n";      
                         else if(SecondF == 1)
                                    cout <<"[2] Japan - Russia\n";
                         else if(SecondF == 2)               
                                    cout <<"[2] Japan - Canada\n";
                         else if(SecondF == 0)
                                    cout <<"[2] Please book for second flight\n";   
                                    
                         cout <<": " ;
                                    
                         cin >> change;                      
                       }while( (change != '1' && change != '2') || (FirstF == 0 && change == '1') || (SecondF == 0 && change == '2') || (change == '1' && firstB == 1) || (change == '2' && secondB == 1)); 
                       
                       if(change == '1')
                          {
                              do
                              {
                                 system("cls");
                                 
                                 cout<<"Change into: \n"
                                      <<"[1] Japan - Russia\n"
                                      <<"[2] Japan - Canada\n"
                                      <<": ";                                 
                                 cin >> FirstF; 
                                 
                              }while(FirstF != 1 && FirstF != 2);
                          }  

                       if(change == '2')
                          {
                              do
                              {
                                 system("cls");
                                 
                                 cout<<"Change into: \n"
                                      <<"[1] Japan - Russia\n"
                                      <<"[2] Japan - Canada\n"
                                      <<": ";                                 
                                 cin >> SecondF; 
                              }while(SecondF != 1 && SecondF != 2);
                          }                           
                         
                         break;
                         
                    case '2':
                         
                       do
                       {
                         system("cls");
                         cout <<"What flight do you want to remove? \n";
                         
                         if(firstB == 1)
                                   cout <<"[1] You have already bought a ticket\n";
                         else if(FirstF == 1)
                                   cout <<"[1] Japan - Russia\n";
                         else if(FirstF == 2)               
                                   cout <<"[1] Japan - Canada\n";
                         else if(FirstF == 0)
                                   cout <<"[1] Please book for first flight\n";

                         if(secondB == 1)    
                                    cout <<"[2] You have already bought a ticket\n";      
                         else if(SecondF == 1)
                                    cout <<"[2] Japan - Russia\n";
                         else if(SecondF == 2)               
                                    cout <<"[2] Japan - Canada\n";
                         else if(SecondF == 0)
                                    cout <<"[2] Please book for second flight\n";
                                    
                         cout <<": " ;
                                    
                         cin >> remove;                      
                       }while((remove != '1' && remove != '2') || (FirstF == 0 && remove == 1) || (SecondF == 0 && remove == 2) || (remove == '1' && firstB == 1) || (remove == '2' && secondB == 1)); 
                       
                       if(remove == '1')
                        {
                                 numA=1;
                                 FirstF=0;
                                 seatA=1;
                        }
                        
                       if(remove == '2')
                        {
                                 numB=1;
                                 SecondF=0;
                                 seatB=1;
                        }
                       break;
                         
                         
                    case '3':      
                         break;
                    default:
                         break;      
                   }
               
               cout << "3";               
               break;
               
          case '4': 
               system("cls");
               
           
                  if(firstB == 0 && secondB == 0) 
                  {

                      cout << "Please buy some tickets first\n";
                      system("PAUSE");
                      break;
                   }  

                   cout << "(Codes avilable : " << codeA << " , " << codeB << " )\n";                   
                   cout <<"ticket code: ";
                   cin >> checking;
                   cout << endl;
                   
                         
                   if ((checking != codeA && checking != codeB)||checking == 0)
                   {
                                cout<<"Code invalid";
                                system("PAUSE");
                                break;
                   }
                   else if(checking == codeA)
                   {
                   cout << "Ticket bought by: "<< U <<" "<< P <<endl;                               
                   cout << "Flight: ";
                   
                   if(FirstF == 1)
                             cout <<"Japan - Russia\n";
                   if(FirstF == 2)               
                             cout <<"Japan - Canada\n";
                   if(FirstF == 0)
                             cout <<"None\n";     
                             
                   cout<<"Seat Number: ";   
                   if (seatA==0)           
                             cout << seat1<<endl;
                   if(seatA==1 && FirstF == 0)   
                              cout << "-\n";       
                   else if (seatA==1)
                             cout <<"Please reserve a seat first\n";
                             
                   cout << "cost: ";
                             
                   if(seatA==1)  
                   { 
                              cout << "-\n"; 
                               
                              }
                              
                   else if(FirstF == 0)  
                   { 
                              cout << "-\n"; 
                                
                              }                              
                              
                   else if(FirstF == 1) 
                   {
                             cout << "70,000 Yen\n";
                             
                   }
                   else if(FirstF == 2)
                   {
                             cout << "63,000 Yen\n";
                             
                   }
                   }
      //////////////////////////////////////////////////////////////////////////////////             
                   cout << endl;
///////////////////////////////////////////////////////////////////////////////////////////                   
                   if(checking == codeB)
                   {
                   cout << "Ticket bought by: "<< U<<" " << P <<endl;
                   cout << "Flight: ";
                   
                   if(SecondF == 1)
                             cout <<"Japan - Russia\n";
                   if(SecondF == 2)               
                             cout <<"Japan - Canada\n";
                   if(SecondF == 0)
                             cout <<"None\n";     
                             
                   cout<<"Seat Number: ";   
                   if (seatB==0)           
                             cout << seat2<<endl;
                   if(seatB==1 && SecondF == 0)   
                              cout << "-\n";       
                   else if (seatB==1)
                             cout <<"Please reserve a seat first\n";
                             
                   cout << "cost: ";
                             
                   if(seatB==1)   
                   {
                              cout << "-\n"; 
                               
                              }          
                   else if (SecondF == 0) 
                   {  
                              cout << "-\n"; 
                                                              
                              }
                   else if(SecondF == 1) 
                   {
                             cout << "70,000 Yen\n";
                             
                   }
                   else if(SecondF == 2)
                   {
                             cout << "63,000 Yen\n";
                             
                   }                  
                   } 
                   system("PAUSE"); 
                                
               break;
               
          case '5':

               
               system("cls");

                  if(firstB == 1 && secondB == 1)
                  {
                            cout<<"You have already bought a ticket\n";
                            system("PAUSE");
                            break;
                  }                   

                  if(numA == 1 && numB == 1) 
                  {
                      cout << "Please book some flights first\n";
                      system("PAUSE");
                      break;
                   }               
               
               do
               {
                   
               system("cls");
               
               
                         if(firstB == 1)
                                   cout <<"[1] You have already bought a ticket\n";
                         else if(FirstF == 1)
                                   cout <<"[1] Japan - Russia\n";
                         else if(FirstF == 2)               
                                   cout <<"[1] Japan - Canada\n";
                         else if(FirstF == 0)
                                   cout <<"[1] Please book for first flight\n";

                         if(secondB == 1)    
                                    cout <<"[2] You have already bought a ticket\n";      
                         else if(SecondF == 1)
                                    cout <<"[2] Japan - Russia\n";
                         else if(SecondF == 2)               
                                    cout <<"[2] Japan - Canada\n";
                         else if(SecondF == 0)
                                    cout <<"[2] Please book for second flight\n";
                                    
                         cout <<"[3] Exit";
                                 
               cout <<endl;
               
               cout<< "Reserve seat for: ";
               cin >> seatans;
               
               }while((seatans != '3' && seatans != '1' && seatans != '2') || (FirstF == 0 && seatans == '1') || (SecondF == 0 && seatans == '2') || (seatans == '1' && firstB == 1) || (seatans == '2' && secondB == 1));
               
               if (seatans == '1')
               {
                  seat1 = Seat1(seat1);
                  seatA = 0;
               } 
               if (seatans == '2')
               {
                  seat2 = Seat2(seat2); 
                  seatB = 0;                 
               }
               
               if(seatans == '3')
                          break;
                                  
               break;
               
          case '6':
               system("cls");

                  if(firstB == 1 && secondB == 1)
                  {
                            cout<<"You have already bought a ticket";
                            system("PAUSE");
                            break;
                  }

               do
               {
                             
                  if(numA == 1 && numB == 1) 
                  {
                      cout << "Please book some flights first\n";

                      break;
                   }  
               
                   cout << "First booked Flight: ";
                   
                   if(FirstF == 1)
                             cout <<"Japan - Russia\n";
                   if(FirstF == 2)               
                             cout <<"Japan - Canada\n";
                   if(FirstF == 0)
                             cout <<"None\n";     
                             
                   cout<<"Seat Number: ";   
                   if (seatA==0)           
                             cout << seat1<<endl;
                   if(seatA==1 && FirstF == 0)   
                              cout << "-\n";       
                   else if (seatA==1)
                             cout <<"Please reserve a seat first\n";
                             
                   cout << "cost: ";
                             
                   if(seatA==1)  
                   { 
                              cout << "-\n"; 
                               
                              }
                              
                   else if(FirstF == 0)  
                   { 
                              cout << "-\n"; 
                               
                              }                              
                              
                   else if(FirstF == 1) 
                   {
                             cout << "70,000 Yen\n";
                             
                   }
                   else if(FirstF == 2)
                   {
                             cout << "63,000 Yen\n";
                             
                   }
                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                   
                   cout << endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                   
                   
                   cout << "Second booked Flight: ";
                   
                   if(SecondF == 1)
                             cout <<"Japan - Russia\n";
                   if(SecondF == 2)               
                             cout <<"Japan - Canada\n";
                   if(SecondF == 0)
                             cout <<"None\n";     
                             
                   cout<<"Seat Number: ";   
                   if (seatB==0)           
                             cout << seat2<<endl;
                   if(seatB==1 && SecondF == 0)   
                              cout << "-\n";       
                   else if (seatB==1)
                             cout <<"Please reserve a seat first\n";
                             
                   cout << "cost: ";
                             
                   if(seatB==1)   
                   {
                              cout << "-\n"; 
                                
                              }          
                   else if (SecondF == 0) 
                   {  
                              cout << "-\n"; 
                                                              
                              }
                   else if(SecondF == 1) 
                   {
                             cout << "70,000 Yen\n";
                             
                   }
                   else if(SecondF == 2)
                   {
                             cout << "63,000 Yen\n";
                             
                   }                   
                   
                                         
                   cout<<endl<<endl<<"\nWould you like to buy \n"
                                   <<"[1]First ticket \n"
                                   <<"[2]Second ticket\n"
                                   <<"[3]Exit\n"
                                   <<": ";
                   cin >> buyans;
                   cout<<endl<<endl;

                   
                }while(buyans != '1' && buyans != '2' && buyans != '3');
                
                   switch(buyans)
                   {
                           case '1':
                                if(FirstF == 0)
                                {
                                          cout<<"Please book a ticket first befor buying";
                                          
                                          break;
                                }
                                else if(firstB == 1)
                                {
                                     cout<<"you have already bought this ticket";
                                     break;
                                }
                                else if(seatA == 1)
                                {
                                     cout<<"Please reserve a seat first";
                                     
                                     break;
                                }
                                else
                                {
                                    cout << "Thank you for buying\n"
                                         << "your ticket code is 408";
                                    codeA = 408;
                                    
                                    firstB = 1;
                                    break;
                                }
                                break;
                                
                           case '2':
                                if(SecondF == 0)
                                {
                                          cout<<"Please book a ticket first befor buying";
                                          
                                          break;
                                }
                                else if(secondB == 1)
                                {
                                     cout<<"you have already bought this ticket";
                                     break;
                                }                                
                                else if(seatB == 1)
                                {
                                     cout<<"Please reserve a seat first";
                                     
                                     break;
                                }
                                else
                                {
                                    cout << "Thank you for buying\n"
                                         << "your ticket code is 568";
                                    codeB = 568;
                                    
                                    secondB = 1;
                                }                                
                                break;
                                
                           case '3':
                                
                                break;
                   
                   }       
                             cout << endl;                         
                             system("PAUSE");
               break;
                              
          case '7':
               system("cls");
               system("PAUSE");
               return 0;
               break;
               
          default:    
               break;
     }
     
   }
}


    
    system("PAUSE");
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Login(char choice)
{
    
   char ans;
   int hana=0;

   
   do
   {
       
       if(hana == 1)
       {
               system("cls");
               cout<<"Please Login First \n";
               system("PAUSE");
       }       
       
       do
       {
       
   system("cls");
   cout <<    "******************MENU******************" <<endl
        <<    "[1] Login" <<endl
        <<    "[2] Add Flights" <<endl
        <<    "[3] Change/Remove Flight Destinations" <<endl
        <<    "[4] View Flights"<<endl
        <<    "[5] Reserve Seats"<<endl
        <<    "[6] Buy Tickets"<<endl
        <<    "[7] Exit"<<endl
        <<    "****************************************" <<endl;
   cin >> choice;
   
   }while((choice != '1') && (choice != '2') && (choice != '3') && (choice != '4')&& (choice != '5')&& (choice != '6')&& (choice != '7'));
   
   if(choice == '1' || choice == '7')
             hana=7;
   else
             hana=1;
             

   
  }while(hana==1);
   
   switch(choice)
     {
          case '1': 

                  return 7;         
               break;
          case '7':
               system("cls");
               return 0;
               break;
               
     }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

string Seat1(string forl)
{
    int b;
    int row;
    int col;
    char a;
    char c,ans;
    int kazu =0;
    int hana;
    string ad;
    
    do
    {
       system("cls");
      c= 'A';
      if(kazu == 0)
      {
      b=0;
      hana=0;
      }
      cout<<"y = Available seats\n"
          <<"x = Taken seats\n\n";
      cout<<"     1 2  3 4 5 6  7 8\n";
        
      for(row=1;row<=7;row++)
      {
      
        cout<<c++<<"    ";
        
          for(col=1;col<=8;col++)   
          {
          if(b == col && hana == row)                          
          cout << "x ";
          
          else
          {
          cout << "y ";  
          }
          
          if(col == 2 || col ==6)
          cout << ' ';  
            
          }
          cout<<endl<<endl;    
      }
      
      if(kazu == 0)
      {
      cout<<endl<<"Please input set number: ";
      cin>> a >> b;
            a = toupper(a);
        if((a != 'A' && a != 'B' && a != 'C' && a != 'D' && a != 'E' && a != 'F' && a != 'G') || (b != 1 && b != 2 && b != 3 && b != 4 && b != 5 && b != 6 && b != 7 && b != 8 ))
            kazu--;
      kazu++;
      }
      
      
      else
      {
      cout<<endl<<"Do you want to save this "<<a<<b<<"?[y/n] ";
      cin>>ans;
      ans=tolower(ans);
      if(ans == 'n')
      kazu=0;
      else
      break;
      
      }
      

      

      

      
      
      if(a == 'A')
           hana = 1;
      if(a == 'B')
           hana = 2;     
      if(a == 'C')
           hana = 3;     
      if(a == 'D')
           hana = 4;     
      if(a == 'E')
           hana = 5;
      if(a == 'F')
           hana = 6;          
      if(a == 'G')
           hana = 7; 
           
      if(b == 1)
           forl = "1";
      if(b == 2)
           forl = "2";     
      if(b == 3)
           forl = "3";     
      if(b == 4)
           forl = "4";     
      if(b == 5)
           forl = "5";
      if(b == 6)
           forl = "6";          
      if(b == 7)
           forl = "7";
      
      }while(true);
      ad = a+forl;
      return ad;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

string Seat2(string forl)
{
    int b;
    int row;
    int col;
    char a;
    char c,ans;
    int kazu =0;
    int hana;
    string ad;
    
    do
    {
       system("cls");
      c= 'A';
      if(kazu == 0)
      {
      b=0;
      hana=0;
      }
      cout<<"y = Available seats\n"
          <<"x = Taken seats\n\n";
      cout<<"     1 2  3 4 5 6  7 8\n";
        
      for(row=1;row<=7;row++)
      {
      
        cout<<c++<<"    ";
        
          for(col=1;col<=8;col++)   
          {
          if(b == col && hana == row)                          
          cout << "x ";
          
          else
          {
          cout << "y ";  
          }
          
          if(col == 2 || col ==6)
          cout << ' ';  
            
          }
          cout<<endl<<endl;    
      }
      
      if(kazu == 0)
      {
      cout<<endl<<"Please input set number: ";
      cin>> a >> b;
            a = toupper(a);
        if((a != 'A' && a != 'B' && a != 'C' && a != 'D' && a != 'E' && a != 'F' && a != 'G') || (b != 1 && b != 2 && b != 3 && b != 4 && b != 5 && b != 6 && b != 7 && b != 8))
            kazu--;
      kazu++;
      }
      
      
      else
      {
      cout<<endl<<"Do you want to save this "<<a<<b<<"?[y/n] ";
      cin>>ans;
      ans=tolower(ans);
      if(ans == 'n')
      kazu=0;
      else
      break;
      
      }
      

      

      

      
      
      if(a == 'A')
           hana = 1;
      if(a == 'B')
           hana = 2;     
      if(a == 'C')
           hana = 3;     
      if(a == 'D')
           hana = 4;     
      if(a == 'E')
           hana = 5;
      if(a == 'F')
           hana = 6;          
      if(a == 'G')
           hana = 7; 
           
      if(b == 1)
           forl = "1";
      if(b == 2)
           forl = "2";     
      if(b == 3)
           forl = "3";     
      if(b == 4)
           forl = "4";     
      if(b == 5)
           forl = "5";
      if(b == 6)
           forl = "6";          
      if(b == 7)
           forl = "7";
      
      }while(true);
      ad = a+forl;
      return ad;
}

