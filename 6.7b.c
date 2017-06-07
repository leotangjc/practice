#include <stdio.h>

int main()
{
    int iHoursWorded=8;
    int iHourlyRate;
    int iGrossPay;
    
    iHourlyRate=13;
    iGrossPay=iHoursWorded*iHourlyRate;
    
    printf("The HoursWorded is:%d\n",iHoursWorded);
    printf("The HourlyRate is:%d\n",iHourlyRate);
    printf("The GrossPay is:%d\n",iGrossPay);
    return 0;
}
