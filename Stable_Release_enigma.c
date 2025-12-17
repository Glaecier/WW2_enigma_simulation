#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Rotor1
{
	char data,*ptr;
};

void rotateRotor1Left(struct Rotor1 rotor1[], int size) {
    char *temp=rotor1[0].ptr;
    for (int i = 0; i < size - 1; ++i) {
        rotor1[i].ptr = rotor1[i + 1].ptr;   
    }
    rotor1[size - 1].ptr = temp;         
}

void rotateRotor2Left(struct Rotor1 rotor2[], int size) {
    char *temp=rotor2[0].ptr;
    for (int i = 0; i < size - 1; ++i) {
        rotor2[i].ptr = rotor2[i + 1].ptr;   
    }
    rotor2[size - 1].ptr = temp;         
}
int wordcnt(void);
int main()
{
    int choice;
     while(1){
    printf("\nMenu:\n1.Encryption\n2.Decryption\n3.Exit\n\n");
    scanf("%d", &choice);
        if (choice == 3){
            printf("Cryptography session terminated.\n");
                break;
    }
	else if (choice == 1) {
		FILE *fp;
	struct Rotor1 rotor1[26],rotor2[26],rotor3[26],rotor4[26],rotor5[26];
	char *ptrtemp=NULL,l;
	int rotor1_rotations = 0;
	for(int i=0;i<26;i++)
	{
		rotor1[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor2[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor3[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor4[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor5[i].data=(i+'A');
	}
	rotor1[0].ptr=&rotor2[20].data;
	rotor1[1].ptr=&rotor2[15].data;
	rotor1[2].ptr=&rotor2[22].data;
	rotor1[3].ptr=&rotor2[9].data;
	rotor1[4].ptr=&rotor2[12].data;
	rotor1[5].ptr=&rotor2[11].data;
	rotor1[6].ptr=&rotor2[2].data;
	rotor1[7].ptr=&rotor2[16].data;
	rotor1[8].ptr=&rotor2[4].data;
	rotor1[9].ptr=&rotor2[0].data;
	rotor1[10].ptr=&rotor2[6].data;
	rotor1[11].ptr=&rotor2[8].data;
	rotor1[12].ptr=&rotor2[1].data;
	rotor1[13].ptr=&rotor2[7].data;
	rotor1[14].ptr=&rotor2[3].data;
	rotor1[15].ptr=&rotor2[25].data;
	rotor1[16].ptr=&rotor2[19].data;
	rotor1[17].ptr=&rotor2[23].data;
	rotor1[18].ptr=&rotor2[13].data;
	rotor1[19].ptr=&rotor2[5].data;
	rotor1[20].ptr=&rotor2[10].data;
	rotor1[21].ptr=&rotor2[14].data;
	rotor1[22].ptr=&rotor2[18].data;
	rotor1[23].ptr=&rotor2[17].data;
	rotor1[24].ptr=&rotor2[21].data;
	rotor1[25].ptr=&rotor2[24].data;

	rotor2[0].ptr=&rotor3[24].data;
	rotor2[1].ptr=&rotor3[5].data;
	rotor2[2].ptr=&rotor3[18].data;
	rotor2[3].ptr=&rotor3[14].data;
	rotor2[4].ptr=&rotor3[2].data;
	rotor2[5].ptr=&rotor3[22].data;
	rotor2[6].ptr=&rotor3[16].data;
	rotor2[7].ptr=&rotor3[25].data;
	rotor2[8].ptr=&rotor3[13].data;
	rotor2[9].ptr=&rotor3[0].data;
	rotor2[10].ptr=&rotor3[23].data;
	rotor2[11].ptr=&rotor3[7].data;
	rotor2[12].ptr=&rotor3[10].data;
	rotor2[13].ptr=&rotor3[3].data;
	rotor2[14].ptr=&rotor3[6].data;
	rotor2[15].ptr=&rotor3[20].data;
	rotor2[16].ptr=&rotor3[12].data;
	rotor2[17].ptr=&rotor3[4].data;
	rotor2[18].ptr=&rotor3[8].data;
	rotor2[19].ptr=&rotor3[1].data;
	rotor2[20].ptr=&rotor3[9].data;
	rotor2[21].ptr=&rotor3[15].data;
	rotor2[22].ptr=&rotor3[11].data;
	rotor2[23].ptr=&rotor3[19].data;
	rotor2[24].ptr=&rotor3[17].data;
	rotor2[25].ptr=&rotor3[21].data;

	rotor3[0].ptr=&rotor4[16].data;
	rotor3[1].ptr=&rotor4[7].data;
	rotor3[2].ptr=&rotor4[11].data;
	rotor3[3].ptr=&rotor4[10].data;
	rotor3[4].ptr=&rotor4[12].data;
	rotor3[5].ptr=&rotor4[8].data;
	rotor3[6].ptr=&rotor4[14].data;
	rotor3[7].ptr=&rotor4[13].data;
	rotor3[8].ptr=&rotor4[5].data;
	rotor3[9].ptr=&rotor4[17].data;
	rotor3[10].ptr=&rotor4[0].data;
	rotor3[11].ptr=&rotor4[21].data;
	rotor3[12].ptr=&rotor4[19].data;
	rotor3[13].ptr=&rotor4[23].data;
	rotor3[14].ptr=&rotor4[2].data;
	rotor3[15].ptr=&rotor4[22].data;
	rotor3[16].ptr=&rotor4[25].data;
	rotor3[17].ptr=&rotor4[4].data;
	rotor3[18].ptr=&rotor4[24].data;
	rotor3[19].ptr=&rotor4[1].data;
	rotor3[20].ptr=&rotor4[6].data;
	rotor3[21].ptr=&rotor4[18].data;
	rotor3[22].ptr=&rotor4[9].data;
	rotor3[23].ptr=&rotor4[3].data;
	rotor3[24].ptr=&rotor4[20].data;
	rotor3[25].ptr=&rotor4[15].data;

	rotor4[0].ptr=&rotor5[6].data;
	rotor4[1].ptr=&rotor5[19].data;
	rotor4[2].ptr=&rotor5[21].data;
	rotor4[3].ptr=&rotor5[13].data;
	rotor4[4].ptr=&rotor5[23].data;
	rotor4[5].ptr=&rotor5[14].data;
	rotor4[6].ptr=&rotor5[1].data;
	rotor4[7].ptr=&rotor5[8].data;
	rotor4[8].ptr=&rotor5[16].data;
	rotor4[9].ptr=&rotor5[5].data;
	rotor4[10].ptr=&rotor5[3].data;
	rotor4[11].ptr=&rotor5[2].data;
	rotor4[12].ptr=&rotor5[9].data;
	rotor4[13].ptr=&rotor5[4].data;
	rotor4[14].ptr=&rotor5[25].data;
	rotor4[15].ptr=&rotor5[22].data;
	rotor4[16].ptr=&rotor5[20].data;
	rotor4[17].ptr=&rotor5[10].data;
	rotor4[18].ptr=&rotor5[24].data;
	rotor4[19].ptr=&rotor5[7].data;
	rotor4[20].ptr=&rotor5[11].data;
	rotor4[21].ptr=&rotor5[0].data;
	rotor4[22].ptr=&rotor5[17].data;
	rotor4[23].ptr=&rotor5[12].data;
	rotor4[24].ptr=&rotor5[15].data;
	rotor4[25].ptr=&rotor5[18].data;


	fp=fopen("Encrypted_Text.txt","a");
	printf("\nEnter a Word (press . to stop)\n");
while(1){
	char str[26];
	scanf("%s",&str);
	 if (strcmp(str, ".") == 0)
            break;
for(int j = 0; str[j] != '\0' && j < 26; j++)
{
    l = str[j];

    for(int i = 0; i < 26; i++)
    {
        if(rotor1[i].data == l)
        {
            ptrtemp = rotor1[i].ptr;
            break;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(rotor2[i].data == *ptrtemp)
        {
            ptrtemp = rotor2[i].ptr;
            break;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(rotor3[i].data == *ptrtemp)
        {
            ptrtemp = rotor3[i].ptr;
            break;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(rotor4[i].data == *ptrtemp)
        {
            ptrtemp = rotor4[i].ptr;
            break;
        }
    }

    str[j] = *ptrtemp;  // Store encrypted character

    // ROTATE THE ROTORS
    // Rotate Rotor 1 and Rotor 5 together
    char temp = rotor1[0].data;
    for(int i = 0; i < 25; i++)
    {
        rotor1[i].data = rotor1[i+1].data;
    }
    rotor1[25].data = temp;
    
// Rotor 5 rotates with Rotor 1
    temp = rotor5[0].data; 
    for(int i = 0; i < 25; i++)
    {
        rotor5[i].data = rotor5[i+1].data;
    }
    rotor5[25].data = temp;

    // If rotor1 has done a full cycle, rotate rotors 2 and 4 together
    if (j % 26 == 25)
    {
        temp = rotor2[0].data;
        for(int i = 0; i < 25; i++)
        {
            rotor2[i].data = rotor2[i+1].data;
        }
        rotor2[25].data = temp;

    // Rotor 4 rotates with Rotor 2
        temp = rotor4[0].data; 
        for(int i = 0; i < 25; i++)
        {
            rotor4[i].data = rotor4[i+1].data;
        }
        rotor4[25].data = temp;
    }

    // If rotor2 (and rotor4) have done a full cycle, rotate rotor3
    if ((j / 26) % 26 == 25)
    {
        temp = rotor3[0].data;
        for(int i = 0; i < 25; i++)
        {
            rotor3[i].data = rotor3[i+1].data;
        }
        rotor3[25].data = temp;
    }
}
//printf("%s\n", str); // Print the full encrypted word
fprintf(fp,"%s ",str);
}
fclose(fp);
printf("\nBack to Menu-->");
}

else //QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ
{
struct Rotor1 rotor1[26],rotor2[26],rotor3[26],rotor4[26],rotor5[26];
	char *ptrtemp=NULL,l;
	FILE *fp,*fdecr;
	int rotor1_rotations = 0;
	for(int i=0;i<26;i++)
	{
		rotor1[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor2[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor3[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor4[i].data=(i+'A');
	}
	for(int i=0;i<26;i++)
	{
		rotor5[i].data=(i+'A');
	}
	
rotor5[6].ptr = &rotor4[0].data;
rotor5[19].ptr = &rotor4[1].data;
rotor5[21].ptr = &rotor4[2].data;
rotor5[13].ptr = &rotor4[3].data;
rotor5[23].ptr = &rotor4[4].data;
rotor5[14].ptr = &rotor4[5].data;
rotor5[1].ptr = &rotor4[6].data;
rotor5[8].ptr = &rotor4[7].data;
rotor5[16].ptr = &rotor4[8].data;
rotor5[5].ptr = &rotor4[9].data;
rotor5[3].ptr = &rotor4[10].data;
rotor5[2].ptr = &rotor4[11].data;
rotor5[9].ptr = &rotor4[12].data;
rotor5[4].ptr = &rotor4[13].data;
rotor5[25].ptr = &rotor4[14].data;
rotor5[22].ptr = &rotor4[15].data;
rotor5[20].ptr = &rotor4[16].data;
rotor5[10].ptr = &rotor4[17].data;
rotor5[24].ptr = &rotor4[18].data;
rotor5[7].ptr = &rotor4[19].data;
rotor5[11].ptr = &rotor4[20].data;
rotor5[0].ptr = &rotor4[21].data;
rotor5[17].ptr = &rotor4[22].data;
rotor5[12].ptr = &rotor4[23].data;
rotor5[15].ptr = &rotor4[24].data;
rotor5[18].ptr = &rotor4[25].data;

rotor4[16].ptr = &rotor3[0].data;
rotor4[7].ptr = &rotor3[1].data;
rotor4[11].ptr = &rotor3[2].data;
rotor4[10].ptr = &rotor3[3].data;
rotor4[12].ptr = &rotor3[4].data;
rotor4[8].ptr = &rotor3[5].data;
rotor4[14].ptr = &rotor3[6].data;
rotor4[13].ptr = &rotor3[7].data;
rotor4[5].ptr = &rotor3[8].data;
rotor4[17].ptr = &rotor3[9].data;
rotor4[0].ptr = &rotor3[10].data;
rotor4[21].ptr = &rotor3[11].data;
rotor4[19].ptr = &rotor3[12].data;
rotor4[23].ptr = &rotor3[13].data;
rotor4[2].ptr = &rotor3[14].data;
rotor4[22].ptr = &rotor3[15].data;
rotor4[25].ptr = &rotor3[16].data;
rotor4[4].ptr = &rotor3[17].data;
rotor4[24].ptr = &rotor3[18].data;
rotor4[1].ptr = &rotor3[19].data;
rotor4[6].ptr = &rotor3[20].data;
rotor4[18].ptr = &rotor3[21].data;
rotor4[9].ptr = &rotor3[22].data;
rotor4[3].ptr = &rotor3[23].data;
rotor4[20].ptr = &rotor3[24].data;
rotor4[15].ptr = &rotor3[25].data;

rotor3[24].ptr = &rotor2[0].data;
rotor3[5].ptr = &rotor2[1].data;
rotor3[18].ptr = &rotor2[2].data;
rotor3[14].ptr = &rotor2[3].data;
rotor3[2].ptr = &rotor2[4].data;
rotor3[22].ptr = &rotor2[5].data;
rotor3[16].ptr = &rotor2[6].data;
rotor3[25].ptr = &rotor2[7].data;
rotor3[13].ptr = &rotor2[8].data;
rotor3[0].ptr = &rotor2[9].data;
rotor3[23].ptr = &rotor2[10].data;
rotor3[7].ptr = &rotor2[11].data;
rotor3[10].ptr = &rotor2[12].data;
rotor3[3].ptr = &rotor2[13].data;
rotor3[6].ptr = &rotor2[14].data;
rotor3[20].ptr = &rotor2[15].data;
rotor3[12].ptr = &rotor2[16].data;
rotor3[4].ptr = &rotor2[17].data;
rotor3[8].ptr = &rotor2[18].data;
rotor3[1].ptr = &rotor2[19].data;
rotor3[9].ptr = &rotor2[20].data;
rotor3[15].ptr = &rotor2[21].data;
rotor3[11].ptr = &rotor2[22].data;
rotor3[19].ptr = &rotor2[23].data;
rotor3[17].ptr = &rotor2[24].data;
rotor3[21].ptr = &rotor2[25].data;
rotor2[20].ptr = &rotor1[0].data;
rotor2[15].ptr = &rotor1[1].data;
rotor2[22].ptr = &rotor1[2].data;
rotor2[9].ptr = &rotor1[3].data;
rotor2[12].ptr = &rotor1[4].data;
rotor2[11].ptr = &rotor1[5].data;
rotor2[2].ptr = &rotor1[6].data;
rotor2[16].ptr = &rotor1[7].data;
rotor2[4].ptr = &rotor1[8].data;
rotor2[0].ptr = &rotor1[9].data;
rotor2[6].ptr = &rotor1[10].data;
rotor2[8].ptr = &rotor1[11].data;
rotor2[1].ptr = &rotor1[12].data;
rotor2[7].ptr = &rotor1[13].data;
rotor2[3].ptr = &rotor1[14].data;
rotor2[25].ptr = &rotor1[15].data;
rotor2[19].ptr = &rotor1[16].data;
rotor2[23].ptr = &rotor1[17].data;
rotor2[13].ptr = &rotor1[18].data;
rotor2[5].ptr = &rotor1[19].data;
rotor2[10].ptr = &rotor1[20].data;
rotor2[14].ptr = &rotor1[21].data;
rotor2[18].ptr = &rotor1[22].data;
rotor2[17].ptr = &rotor1[23].data;
rotor2[21].ptr = &rotor1[24].data;
rotor2[24].ptr = &rotor1[25].data;

	fp=fopen("Encrypted_Text.txt","r");
	fdecr=fopen("Decrypted_Text.txt","a");
	//printf("\nEnter a Word (press . to stop)\n");
	char *str;
	str=(char*)malloc(wordcnt() * sizeof(char));
	fgets(str,wordcnt(),fp);
//while(1){
	//fgets(str,26,fp);
	 /*if (strcmp(str, ".") == 0)
            break;*/
	for(int j=0;j<wordcnt();j++)
	{
		l=str[j];
		if(str[j]==' ')
		{
		    fprintf(fdecr,"%c",' ');
		    continue;
		}
		else{
		for(int i=0;i<26;i++)
		{
			if(rotor5[i].data==l)
			{
				ptrtemp=rotor5[i].ptr;
				break;
			}
		}
		for(int i=0;i<26;i++)
		{
			if(rotor4[i].data==*ptrtemp)
			{
				ptrtemp=rotor4[i].ptr;
				break;
			}
		}
		l=*ptrtemp;
		for(int i=0;i<26;i++)
		{
			if(rotor3[i].data==l)
			{
				ptrtemp=rotor3[i].ptr;
				break;
			}
		}
		for(int i=0;i<26;i++)
		{
			if(rotor2[i].data==*ptrtemp)
			{
				ptrtemp=rotor2[i].ptr;
				break;
			}
		}

    str[j] = *ptrtemp;  // Store encrypted character

    // ROTATE THE ROTORS
    // Rotate Rotor 1 and Rotor 5 together
    char temp = rotor1[0].data;
    for(int i = 0; i < 25; i++)
    {
        rotor1[i].data = rotor1[i+1].data;
    }
    rotor1[25].data = temp;

 // Rotor 5 rotates with Rotor 1
    temp = rotor5[0].data;
    for(int i = 0; i < 25; i++)
    {
        rotor5[i].data = rotor5[i+1].data;
    }
    rotor5[25].data = temp;

    // If rotor1 has done a full cycle, rotate rotors 2 and 4 together
    if (j % 26 == 25)
    {
        temp = rotor2[0].data;
        for(int i = 0; i < 25; i++)
        {
            rotor2[i].data = rotor2[i+1].data;
        }
        rotor2[25].data = temp;

    // Rotor 4 rotates with Rotor 2
        temp = rotor4[0].data; 
        for(int i = 0; i < 25; i++)
        {
            rotor4[i].data = rotor4[i+1].data;
        }
        rotor4[25].data = temp;
    }

    // If rotor2 (and rotor4) have done a full cycle, rotate rotor3
    if ((j / 26) % 26 == 25)
    {
        temp = rotor3[0].data;
        for(int i = 0; i < 25; i++)
        {
            rotor3[i].data = rotor3[i+1].data;
        }
        rotor3[25].data = temp;
    }
		}//FOR LOOP CLOSING BRACKET
}//else closing bracket
str[wordcnt()]='\0';
fprintf(fdecr,"%s\b",str); // Print the full encrypted word
//fprintf(fdecr,"%s\n",str);
//}//WHILE LOOP CLOSING BRACKET
fclose(fp);
fclose(fdecr);
printf("\nBack to Menu-->");
}
}

return 0;
}
int wordcnt(void)
{
    FILE *fp;
	int cnt=0;
	fp=fopen("Encrypted_Text.txt","r");
	char c;
	while((c=fgetc(fp))!=EOF)
	{
		cnt++;
	}
	fclose(fp);
	return cnt;
}
