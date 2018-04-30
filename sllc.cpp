//fauzi riski-1717051029
//irham setyaki-1757051005

#include <iostream> 
#include <stdlib.h>
#include <conio.h>
using namespace std;

class node 
{
  public:					
  int angka;
  node *next; 				
}; 


node *awal_node = NULL;	

void tambahdepan(int parameter)
{
  node *baru;			
  baru = new node;		
  cout << "Masukkan Angka   : ";
  cin >> baru->angka;   
  baru->next = NULL;	
  if(awal_node == NULL)	
	  {
	    awal_node=baru;		//f
	    awal_node->next = NULL;
	  }
  else
	  {
	    baru->next = awal_node;
	    awal_node = baru;
	  }
} 

void tambahbelakang(int parameter)
  {
  node *temp, *temp2, *posisi;   
  temp = new node; 
   
  cout << "Masukkan Angka     : "; 
  cin >>   temp->angka;  
    
  temp->next = NULL; 
									// Set up link pada node
	  if (awal_node == NULL)
		  {
		    awal_node = temp;
		    posisi = awal_node;
		  }
	  else
		  {
		    temp2 = awal_node;
		    										
		    while (temp2->next != NULL)		
			    {
			      temp2 = temp2->next; 			 
			    }
		  temp2->next = temp;
		  }
} 

void print_node()
{
  node *temp;
  temp = awal_node;
  cout << endl;
	  if (temp == NULL)
	    	cout << "List kosong!" << endl;
	  else
		  {
		    while (temp != NULL)
			    {
			     cout <<temp->angka << ", ";
			     temp = temp->next; 
			    }
		    cout<<endl;
		  }
} 

void hapusdepan(int parameter)
{
  node *temp;
  temp = awal_node;
  awal_node = awal_node->next;
  delete temp;
} 

void hapusbelakang(int parameter)
{
  node *temp1, *temp2;
	  if (awal_node == NULL)
	    cout << "List kosong!" << endl;
	  else
	  {
	    temp1 = awal_node;
		    if (temp1->next == NULL)
			    {
			      delete temp1;
			      awal_node = NULL;
			    }
		    else 
			    {
			      while (temp1->next != NULL)
				      {
				        temp2 = temp1;
				        temp1 = temp1->next;
				      }
			      delete temp1;
			      temp2->next = NULL;
			    }
	
	   }
} 

void tambahtengah(int parameter)
