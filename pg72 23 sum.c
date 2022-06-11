#include<stdio.h>
#include<math.h>
int cars(float p1,float p2,float d1,float d2){
    float ans;
    ans = p1+p2-d2;
    if(ans<=0)
        printf("Error messge!");
    
    else
        printf("the Max profit : %f",ans);  
    
    return ans;
}
int main()
{
    float f_car,s_car,fd_car,sd_car;
    float res;
    printf("Enter price of first car: ");
    scanf("%f",&f_car);
    printf("Enter price of second car: ");
    scanf("%f",&s_car);
    printf("Enter price of first car decreases: ");
    scanf("%f",&fd_car);
    printf("Enter price of second car decreases: ");
    scanf("%f",&sd_car);
    cars(f_car,s_car,fd_car,sd_car);

    return 0;
}

