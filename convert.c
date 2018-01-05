#include <stdio.h> 
#include <stdlib.h> 


void Cel(double P) /*perevod iz Celsiya v Farengate & Kelvin*/
{ 
    if(P<-273.15) {printf("Does not exist temperature!");}/*proverka po zakonam phizicki*/
    else
    {
        double F = P * 1.8 + 32 ;
        double K = P + 273.15 ; 
        printf("%.2f C: \n",P); /*vivod dannih*/
        printf("%.2f F \n",F); 
        printf("%.2f K \n",K);
    } 
} 

void Far(double P) /*perevod iz Farengate v Celsii & Kelvin*/
{
    if(P<=-459.7) {printf("Does not exist temperature!");}/*proverka po zakonam phizicki*/
    else
    {
        double C =(P - 32) / 1.8; 
        double K = C + 273.15; 
        printf("%.2f F:\n",P); /*vivod dannih*/
        printf("%.2f C\n",C); 
        printf("%.2f K\n",K);
        printf("%s РЎ РґРЅРµРј СЂРѕР¶РґРµРЅРёСЏ!!!\n", );

    } 
} 

void Kel(double P) /*perevod iz Kelvin v Celsii & Farengate*/
{
    if(P<=0){printf("Does not exist temperature!");}/*proverka po zakonam phizicki*/
    else
    {
        double C = P - 273.15; 
        double F = C * 1.8 + 32; 
        printf("%.2f K:\n",P); /*vivod dannih*/ 
        printf("%.2f C\n",C); 
        printf("%.2f F\n",F);
    } 
} 

int main(int argc, char *argv[]) 
{
    if (argc == 3){/*proverka kovla vvedennih dannih*/
        if (*argv[2]=='C') { 
        Cel(atof(argv[1])); /*preobrazovanie iz stroki v int i otadem v void*/
    } else if (*argv[2] == 'F') { 
        Far(atof(argv[1])); /*preobrazovanie iz stroki v int i otadem v void*/
    } else if (*argv[2] == 'K') { 
        Kel(atof(argv[1])); /*preobrazovanie iz stroki v int i otadem v void*/
    }
} else { 
        Cel(atof(argv[1])); 
        Far(atof(argv[1])); 
        Kel(atof(argv[1])); 
    } 
    return(0); 
}