#include<iostream>
#include<string.h>
//#include"HealthStatus.h"
using namespace std;
class code{
	public:
	void graph()
{
	cout<<"\n\nIdentify your Category According to your BMI with the help of following Graph\n\n";
	cout<<"| | | | | | | |16 | | | | | |18 | | | | |25 | | | | |30 | | | |35 | | | | |40\n";
	cout<<"   vunderweight     underweight     Normal     Overweight   ObessC1   ObeseC2\n";
	cout<<"<---------------->  <--------->  <--------->  <--------->  <-------> <-------->\n";
}
int encrypt(double bmi){
	char s1[]="ANEMEA";
	char s2[]="VITAMINDEFICIENCIES";
	char s3[]="YOUAREFITPERSON";
	char s4[]="DIABETIS";
	char s5[]="HEARTATTACK";
	if(bmi<=16)
	{
	
	char key1[]="INDORE";
		int msgL1= strlen(s1);
		int keyL1= strlen(key1);
		int  i,j;
	
	char newKey1[msgL1], encryptedM1[msgL1];
	char  decryptedM1[msgL1];
	
	//Generating New key
	j=0;
	for(i=0; i<msgL1; ++i)
	{  if(j==keyL1)
	      j=0;
	      
	  newKey1[i]=key1[j];
	   j++;
	   
		
	}
	newKey1[i]='\0';
	 
	 // Encryption :-
	 for(i=0; i<msgL1; ++i)
	 encryptedM1[i]=((s1[i]+newKey1[i])%26)+'A';
	 
	 encryptedM1[i]='\0';
	 
	 //Decryption:-
	 for(i=0; i<msgL1; ++i)
	 decryptedM1[i]=(((encryptedM1[i]-newKey1[i])+26)%26)+'A';
	
	 decryptedM1[i]='\0';
	 cout<<"\n Encrypted Msg:= "<<encryptedM1;
	 cout<<"------------------------------------------------------------------------";
	 cout<<"\nThe Information display below is disease that can catch you" ;
	 cout<<"\n<sensitive information>\n";
	 cout<<"We have displayed it in *ENCRYPTED* form To *DECRYPTE* it:-"; 
//	 cout<<"you have to varify your identity by Entering your id and password again\n";
	 cout<<"\n Original Message:= "<<s1;
	 cout<<"\n Key:= "<<key1;
	 cout<<"\n New Generated Key:= "<<newKey1;
	 cout<<"\n Encrypted Msg:= "<<encryptedM1;

	 cout<<"\n Decrypted Msg:= "<<decryptedM1;
	 graph();
	 
	 
 }
 

if(bmi>16 && bmi<=18)
	{
	
	char key2[]="BHOPAL";
		int msgL2= strlen(s2);
		int keyL2= strlen(key2);
		int  i,j;
	
	char newKey2[msgL2], encryptedM2[msgL2], decryptedM2[msgL2];
	
	//Generating New key
	j=0;
	for(i=0; i<msgL2; ++i)
	{  if(j==keyL2)
	      j=0;
	      
	  newKey2[i]=key2[j];
	   j++;
	   
		
	}
	newKey2[i]='\0';
	 
	 // Encryption :-
	 for(i=0; i<msgL2; ++i)
	 encryptedM2[i]=((s2[i]+newKey2[i])%26)+'A';
	 
	 encryptedM2[i]='\0';
	 
	 //Decryption:-
	 for(i=0; i<msgL2; ++i)
	 decryptedM2[i]=(((encryptedM2[i]-newKey2[i])+26)%26)+'A';
	
	 decryptedM2[i]='\0';
	 cout<<"\n Encrypted Msg:= "<<encryptedM2;
	 cout<<"------------------------------------------------------------------------";
	 cout<<"\nThe Information display below is disease that can catch you" ;
	 cout<<"\n<sensitive information>\n";
	 cout<<"We have displayed it in *ENCRYPTED* form To *DECRYPTE* it:-"; 
//	 cout<<"you have to varify your identity by Entering your id and password again\n";
	 cout<<"\n Original Message:= "<<s2;
	 cout<<"\n Key:= "<<key2;
	 cout<<"\n New Generated Key:= "<<newKey2;
	 cout<<"\n Encrypted Msg:= "<<encryptedM2;
	
	
	 cout<<"\n Decrypted Msg:= "<<decryptedM2;
	 graph();
}
if(bmi>18 && bmi<=25)
	{
	
	char key3[]="RATLAM";
		int msgL3= strlen(s3);
		int keyL3= strlen(key3);
		int  i,j;
	
	char newKey3[msgL3], encryptedM3[msgL3], decryptedM3[msgL3];
	
	//Generating New key
	j=0;
	for(i=0; i<msgL3; ++i)
	{  if(j==keyL3)
	      j=0;
	      
	  newKey3[i]=key3[j];
	   j++;
	   
		}
	newKey3[i]='\0';
	 
	 // Encryption :-
	 for(i=0; i<msgL3; ++i)
	 encryptedM3[i]=((s3[i]+newKey3[i])%26)+'A';
	 
	 encryptedM3[i]='\0';
	 
	 //Decryption:-
	 for(i=0; i<msgL3; ++i)
	 decryptedM3[i]=(((encryptedM3[i]-newKey3[i])+26)%26)+'A';
	
	 decryptedM3[i]='\0';
	 cout<<"\n Encrypted Msg:= "<<encryptedM3;
	 cout<<"------------------------------------------------------------------------";
	 cout<<"\nThe Information display below is disease that can catch you" ;
	 cout<<"\n<sensitive information>\n";
	 cout<<"We have displayed it in *ENCRYPTED* form To *DECRYPTE* it:-"; 
//	 cout<<"you have to varify your identity by Entering your id and password again\n";
	 cout<<"\n Original Message:= "<<s3;
	 cout<<"\n Key:= "<<key3;
	 cout<<"\n New Generated Key:= "<<newKey3;
	 cout<<"\n Encrypted Msg:= "<<encryptedM3;

	 
	 cout<<"\n Decrypted Msg:= "<<decryptedM3;
	 graph();
	 
}
if(bmi>25 && bmi<=30)
	{
	
	char key4[]="DELHI";
		int msgL4= strlen(s4);
		int keyL4= strlen(key4);
		int  i,j;
	
	char newKey4[msgL4], encryptedM4[msgL4], decryptedM4[msgL4];
	
	//Generating New key
	j=0;
	for(i=0; i<msgL4; ++i)
	{  if(j==keyL4)
	      j=0;
	      
	  newKey4[i]=key4[j];
	   j++;
	   
		
	}
	newKey4[i]='\0';
	 
	 // Encryption :-
	 for(i=0; i<msgL4; ++i)
	 encryptedM4[i]=((s4[i]+newKey4[i])%26)+'A';
	 
	 encryptedM4[i]='\0';
	 
	 //Decryption:-
	 for(i=0; i<msgL4; ++i)
	 decryptedM4[i]=(((encryptedM4[i]-newKey4[i])+26)%26)+'A';
	
	 decryptedM4[i]='\0';
	 cout<<"\n Encrypted Msg:= "<<encryptedM4;
	 cout<<"------------------------------------------------------------------------";
	 cout<<"\nThe Information display below is disease that can catch you" ;
	 cout<<"\n<sensitive information>\n";
	 cout<<"We have displayed it in *ENCRYPTED* form To *DECRYPTE* it:-"; 
	 cout<<"you have to varify your identity by Entering your id and password again\n";
	 cout<<"\n Original Message:= "<<s4;
	 cout<<"\n Key:= "<<key4;
	 cout<<"\n New Generated Key:= "<<newKey4;
	 cout<<"\n Encrypted Msg:= "<<encryptedM4;
	
	
	 cout<<"\n Decrypted Msg:= "<<decryptedM4;
	 graph();
	 
}
else
	{
	
	char key5[]="MUMBAL";
		int msgL5= strlen(s5);
		int keyL5= strlen(key5);
		int  i,j;
	
	char newKey5[msgL5], encryptedM5[msgL5], decryptedM5[msgL5];
	
	//Generating New key
	j=0;
	for(i=0; i<msgL5; ++i)
	{  if(j==keyL5)
	      j=0;
	      
	  newKey5[i]=key5[j];
	   j++;
	   
		
	}
	newKey5[i]='\0';
	 
	 // Encryption :-
	 for(i=0; i<msgL5; ++i)
	 encryptedM5[i]=((s5[i]+newKey5[i])%26)+'A';
	 
	 encryptedM5[i]='\0';
	 
	 //Decryption:-
	 for(i=0; i<msgL5; ++i)
	 decryptedM5[i]=(((encryptedM5[i]-newKey5[i])+26)%26)+'A';
	
	 decryptedM5[i]='\0';
	 cout<<"\n Encrypted Msg:= "<<encryptedM5;
	 cout<<"------------------------------------------------------------------------";
	 cout<<"\nThe Information display below is disease that can catch you" ;
	 cout<<"\n<sensitive information>\n";
	 cout<<"We have displayed it in *ENCRYPTED* form To *DECRYPTE* it:-"; 
	 cout<<"you have to varify your identity by Entering your id and password again\n";
	 cout<<"\n Original Message:= "<<s5;
	 cout<<"\n Key:= "<<key5;
	 cout<<"\n New Generated Key:= "<<newKey5;
	 cout<<"\n Encrypted Msg:= "<<encryptedM5;
	
	 cout<<"\n Decrypted Msg:= "<<decryptedM5;
	 graph();


}
}
};

