#include <stdio.h>

int main()

{
    int input,c,f,k; 
    
    
    printf("1. enter in ferenhite \n2. enter in celcius \n3. enter in kelvin \n");
    scanf("%d",&input);
    
    if(input == 1)
    {
        int far;
        
        printf("enter the value in farenhite: \n");
        scanf("%d", &far);
        
        c=(5*far-160)/9;
        k=((5*far-160)/9)+273;
        
        printf("temp in C = %d \ntemp in k = %d",c,k);
        
    }else if(input == 2){
        
        int cel;
        
        printf("enter the value in celcius: \n");
        scanf("%d", &cel);
        
        f=(9*cel+160)/5;
        k=cel+273;
        
        printf("Temp in F = %d \nTemp in K = %d",f,k);
        
    }else if(input == 3){
        
        int kel;
        
        printf("enter the value in Kelvin: \n");
        scanf("%d", &kel);
        
        f=(9*(kel-273)+160)/5;
        c=kel-273;
        
        printf("Temp in F = %d \nTemp in C = %d",f,c);
    }else if(input < 1 || input > 3){
        
        printf("enter a valid unit (number assigned)");
    }
    
}
